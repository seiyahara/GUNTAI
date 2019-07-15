#ifndef _STAGE_H_
#define _STAGE_H_

#include "DxLib.h"

class Stage final
{
public:
	Stage();		//コンストラクタ
	~Stage();		//デストラクタ

	void Draw();	//描画
	void Update();	//更新

	int GetModelhandle() { return m_modelHandle; }

	const VECTOR& GetPos() const{ return m_pos; }
	void SetPos(const VECTOR m_set) { m_pos = m_set; }

private:
	int m_modelHandle;
	VECTOR m_pos;
};

#endif