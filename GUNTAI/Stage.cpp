#include"Stage.h"

//�R���X�g���N�^
Stage::Stage()
{
	m_modelHandle=MV1LoadModel("data/model/stage/stage.pmx");

	m_pos = VGet(0, 0, 0);
}

//�f�X�g���N�^
Stage::~Stage()
{
	MV1DeleteModel(m_modelHandle);
}

//�`��
void Stage::Draw()
{
	MV1DrawModel(m_modelHandle);
}

//�X�V
void Stage::Update()
{
	MV1SetPosition(m_modelHandle, m_pos);
}
