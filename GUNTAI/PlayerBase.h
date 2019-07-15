#ifndef _PLAYER_BASE_H_
#define _PLAYER_BASE_H_

#include "DxLib.h"

class PlayerBase
{
public:
	PlayerBase(int sourceModelHandle);
	virtual ~PlayerBase();

	virtual void Update() = 0;
	virtual void Draw();

	//���f���n���h���̎擾
	int GetModelHandle() { return modelHandle; }

	//�|�W�V������getter/setter
	const VECTOR& GetPos()const { return m_pos; }
	void SerPos(const VECTOR m_set) { m_pos = m_set; }

protected:
	int modelHandle;
	VECTOR m_pos;
};

#endif
