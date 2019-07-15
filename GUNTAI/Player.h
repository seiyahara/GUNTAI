#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "PlayerBase.h"

#define FLOCK_NUM 10

class Player final
{
public:
	Player(int sourceModelHandle);				// コンストラクタ.
	virtual ~Player();				// デストラクタ.

	void Update();			// 更新.

	void Neighbors();								//一番近い仲間を検知
	void Separation();								//近隣の仲間との衝突を避ける
	void Alignment();								//近隣の仲間の速度に合わせようとする
	void Join();			//近隣の仲間の近くに居ようとする

private :
	VECTOR m_pos;
};

#endif // _PLAYER_H_