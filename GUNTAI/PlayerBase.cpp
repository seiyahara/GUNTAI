#include "PlayerBase.h"

PlayerBase::PlayerBase(int sourceModelHandle)
{
	modelHandle = MV1DuplicateModel(sourceModelHandle);
	
	if (modelHandle < 0)
	{
		printfDx("�f�[�^�̓ǂݍ��݂Ɏ��s�@sourceId:%d", sourceModelHandle);
	}
}

PlayerBase::~PlayerBase()
{
	//���f���̃A�����[�h
	MV1DeleteModel(modelHandle);
}

void PlayerBase::Draw()
{
	//3D���f���̕`��
	MV1DrawModel(modelHandle);
}
