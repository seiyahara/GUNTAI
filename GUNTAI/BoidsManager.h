#ifndef _BOIDS_MANAGER_H_
#define _BOIDS_MANAGER_H_

class BoidsBase;

//群れの数

class BoidsManager final
{
public:
	BoidsManager();			//コンストラクタ
	~BoidsManager();		//デストラクタ

	void CreateFlock();		//群れの生成
	void DestroyFlock();	//群れの削除

	void Update();			//更新
	void Draw();			//描画

private:

	int flockModelSourceHandle;		//	群れモデルの大本のハンドル
};

#endif