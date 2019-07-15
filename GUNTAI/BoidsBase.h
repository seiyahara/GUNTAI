#ifndef _BoidsBase_H_
#define _BoidsBase_H_

#include"DxLib.h"

//�Q��̐�
#define FLOCK_NUM 10

class Player;

class BoidsBase
{
public:
	BoidsBase();									//�R���X�g���N�^
	virtual ~BoidsBase();							//�f�X�g���N�^

	virtual void Update(const Player& player);		//�X�V
	virtual void Draw();							//�`��

	
	const VECTOR& GetPos() const { return m_pos[FLOCK_NUM]; }
	void SetPos(const VECTOR m_set[FLOCK_NUM]) { m_pos[FLOCK_NUM] = m_set[FLOCK_NUM]; }

private:
	int m_modelHandle[FLOCK_NUM];			//���f���n���h��


	VECTOR m_pos[FLOCK_NUM];							//�|�W�V����
	VECTOR m_parentPos;									//�e�̃|�W�V����
};

#endif