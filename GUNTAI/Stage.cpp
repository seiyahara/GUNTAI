#include"Stage.h"

//コンストラクタ
Stage::Stage()
{
	m_modelHandle=MV1LoadModel("data/model/stage/stage.pmx");

	m_pos = VGet(0, 0, 0);
}

//デストラクタ
Stage::~Stage()
{
	MV1DeleteModel(m_modelHandle);
}

//描画
void Stage::Draw()
{
	MV1DrawModel(m_modelHandle);
}

//更新
void Stage::Update()
{
	MV1SetPosition(m_modelHandle, m_pos);
}
