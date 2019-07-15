﻿#include "ObstructFloat.h"

#define _USE_MATH_DEFINES
#include <math.h>

//-----------------------------------------------------------------------------
// @brief  コンストラクタ.
//-----------------------------------------------------------------------------
ObstructFloat::ObstructFloat()
{
	m_pos = VGet(0, 0, 0);
	rad = 0;
}

//-----------------------------------------------------------------------------
// @brief  デストラクタ.
//-----------------------------------------------------------------------------
ObstructFloat::~ObstructFloat()
{
	
}

//-----------------------------------------------------------------------------
// @brief  3Dモデルの描画.
//-----------------------------------------------------------------------------
void ObstructFloat::Draw()
{
	DrawSphere3D(m_pos, 40, 32, GetColor(255, 0, 0), GetColor(255, 255, 255),TRUE);
}

//-----------------------------------------------------------------------------
// @brief  更新.
//-----------------------------------------------------------------------------
void ObstructFloat::Update()
{
	rad += static_cast<float>((M_PI / 180) * 5);
	m_pos.y -= 10;
	m_pos.z = -300;

	// ３Dモデルのポジション設定
	MV1SetPosition(m_modelHandle, m_pos);
}
