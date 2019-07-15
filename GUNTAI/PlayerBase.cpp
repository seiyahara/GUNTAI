#include "PlayerBase.h"

PlayerBase::PlayerBase(int sourceModelHandle)
{
	modelHandle = MV1DuplicateModel(sourceModelHandle);
	
	if (modelHandle < 0)
	{
		printfDx("データの読み込みに失敗　sourceId:%d", sourceModelHandle);
	}
}

PlayerBase::~PlayerBase()
{
	//モデルのアンロード
	MV1DeleteModel(modelHandle);
}

void PlayerBase::Draw()
{
	//3Dモデルの描画
	MV1DrawModel(modelHandle);
}
