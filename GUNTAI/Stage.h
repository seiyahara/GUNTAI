#ifndef _STAGE_H_
#define _STAGE_H_

#include "DxLib.h"

class Stage final
{
public:
	Stage();		//�R���X�g���N�^
	~Stage();		//�f�X�g���N�^

	void Draw();	//�`��
	void Update();	//�X�V

	int GetModelhandle() { return m_modelHandle; }

	const VECTOR& GetPos() const{ return m_pos; }
	void SetPos(const VECTOR m_set) { m_pos = m_set; }

private:
	int m_modelHandle;
	VECTOR m_pos;
};

#endif