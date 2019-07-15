#include "Player.h"
#include "Camera.h"

#define USE_LERP_CAMERA 1

//-----------------------------------------------------------------------------
// @brief  コンストラクタ.
//-----------------------------------------------------------------------------
Camera::Camera()
{
	//奥行0.1～1000までをカメラの描画範囲とする
	SetCameraNearFar(0.1f, 10000.0f);

	m_pos = VGet(0, 0, 0);
}

//-----------------------------------------------------------------------------
// @brief  デストラクタ.
//-----------------------------------------------------------------------------
Camera::~Camera()
{
	// 処理なし.
}

//-----------------------------------------------------------------------------
// @brief  更新.
//-----------------------------------------------------------------------------
void Camera::Update(const Player& player)
{
	// lerpを使用して実装.
	// lerp(VECTOR a, VECTOR b, float t)は
	// answer = a + ((b-a) * t)
	VECTOR aimPos = VGet(player.GetPos().x, player.GetPos().y + 100.0f, player.GetPos().z + 300.0f); // b
	VECTOR posToAim = VSub(aimPos, m_pos);	// (b-a)
	VECTOR scaledPosToAim = VScale(posToAim, 0.03f);	// ((b-a) * t)
	m_pos = VAdd(m_pos, scaledPosToAim);	// a + ((b-a) * t)
	// カメラに位置を反映.
	SetCameraPositionAndTarget_UpVecY(m_pos, player.GetPos());
}