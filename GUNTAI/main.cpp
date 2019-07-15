#include "DxLib.h"
#include "PlayerBase.h"
#include "Player.h"
#include "Camera.h"
#include "Stage.h"
#include "BoidsBase.h"
#include "ObstructStatic.h"
#include "ObstructFloat.h"

//-----------------------------------------------------------------------------
// @brief  メイン関数.
//-----------------------------------------------------------------------------
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) 
{
	// ＤＸライブラリ初期化処理
	if (DxLib_Init() == -1)		
	{
		return -1;	// エラーが起きたら直ちに終了
	}

	// 画面モードのセット
	SetGraphMode(640, 480, 16);
	ChangeWindowMode(TRUE);

	//Zバッファを有効にする
	SetUseZBuffer3D(TRUE);
	//Zバッファへの書き込みを有効にする
	SetWriteZBuffer3D(TRUE);

	// カメラを生成.
	Camera* camera = new Camera();

	// プレイヤーを生成.
	Player* player = new Player();

	//ステージを生成
	Stage* stage = new Stage();

	//群れの生成
	BoidsBase* boids = new BoidsBase();


	// 障害物を生成.
    ObstructStatic* obstructStatic1 = new ObstructStatic();
    ObstructFloat* obstructFloat = new ObstructFloat();
    ObstructStatic* obstructStatic2 = new ObstructStatic();

	// 障害物の位置を初期化.
	float band = 10.0f;
    obstructStatic1->SetPos(VGet(-band + (band * 0), 0, -1.0f));
    obstructFloat->SetPos(VGet(-band + (band * 1), 0, -1.0f));
    obstructStatic2->SetPos(VGet(-band + (band * 2), 0, -1.0f));

	//ステージの位置を初期化
	stage->SetPos(VGet(0, 0, 0));

	// エスケープキーが押されるかウインドウが閉じられるまでループ
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		// プレイヤー制御.
		player->Update();

		//群れの制御
		boids->Update(*player);

		// カメラ制御.
		camera->Update(*player);

		// 障害物制御.
        obstructStatic1->Update();
        obstructFloat->Update();
        obstructStatic2->Update();

		//ステージ制御
		stage->Update();

		// 画面を初期化する
		ClearDrawScreen();

		// プレイヤー描画.
		player->Draw();

		// 障害物描画.
        obstructStatic1->Draw();
        obstructFloat->Draw();
        obstructStatic2->Draw();

		//ステージ描画
		stage->Draw();

		//群れの描画
		boids->Draw();

		// 裏画面の内容を表画面に反映させる
		ScreenFlip();
	}

	// プレイヤーを削除.
	delete(player);

	// 群れを削除
	delete(boids);

	// カメラを削除.
	delete(camera);

	// 障害物を削除.
    delete(obstructStatic1);
    delete(obstructFloat);
    delete(obstructStatic2);

	//ステージを削除
	delete(stage);

	// ＤＸライブラリの後始末
	DxLib_End();

	// ソフトの終了
	return 0;
}