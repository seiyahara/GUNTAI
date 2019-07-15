#include "Player.h"

//-----------------------------------------------------------------------------
// @brief  コンストラクタ.
//-----------------------------------------------------------------------------
Player::Player(int sourceModelHandle)
	:PlayerBase(sourceModelHandle)
{
	m_pos = VGet(0, 0, 0);
}

Player::Player(int sourceModelHandle)
{
}

//-----------------------------------------------------------------------------
// @brief  デストラクタ.
//-----------------------------------------------------------------------------
Player::~Player()
{
	//処理なし
}

//-----------------------------------------------------------------------------
// @brief  更新.
//-----------------------------------------------------------------------------
void Player::Update()
{
	// キー入力取得
	int Key = GetJoypadInputState(DX_INPUT_KEY_PAD1);

	m_pos.z -= 3;

	// 上を押していたら上に進む
	if (Key & PAD_INPUT_UP)
	{
		m_pos.y += 5;
	}

	// 下を押していたら下に進む
	if (Key & PAD_INPUT_DOWN)
	{
		m_pos.y -= 5;
	}

	// 右を押していたら右に進む
	if (Key & PAD_INPUT_RIGHT)
	{
		m_pos.x -= 5;
	}

	// 左を押していたら左に進む
	if (Key & PAD_INPUT_LEFT)
	{
		m_pos.x += 5;
	}

	// ３Dモデルのポジション設定
	MV1SetPosition(m_modelHandle, m_pos);
}

//-----------------------------------------------------------------------------
// @brief  描画.
//-----------------------------------------------------------------------------
void Player::Draw()
{
	// ３Ｄモデルの描画
	MV1DrawModel(m_modelHandle);
}

void Player::Neighbors()
{

}

void Player::Separation()
{

}

void Player::Alignment()
{

}

void Player::Join()
{

}