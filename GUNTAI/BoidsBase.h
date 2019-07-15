#ifndef _BoidsBase_H_
#define _BoidsBase_H_

#include"DxLib.h"

//群れの数
#define FLOCK_NUM 10

class Player;

class BoidsBase
{
public:
	BoidsBase();									//コンストラクタ
	virtual ~BoidsBase();							//デストラクタ

	virtual void Update(const Player& player);		//更新
	virtual void Draw();							//描画

	
	const VECTOR& GetPos() const { return m_pos[FLOCK_NUM]; }
	void SetPos(const VECTOR m_set[FLOCK_NUM]) { m_pos[FLOCK_NUM] = m_set[FLOCK_NUM]; }

private:
	int m_modelHandle[FLOCK_NUM];			//モデルハンドル


	VECTOR m_pos[FLOCK_NUM];							//ポジション
	VECTOR m_parentPos;									//親のポジション
};

#endif