#ifndef _CAMERA_H_
#define _CAMERA_H_

#include "DxLib.h"

class Player;

class Camera
{
public:
	Camera();							// コンストラクタ.
	~Camera();							// デストラクタ.

	void Update(const Player& player);	// 更新.

	// ポジションのgetter/setter.
	const VECTOR& GetPos() const { return m_pos; }

private:
	VECTOR	m_pos;			// ポジション.
};

#endif // _CAMERA_H_