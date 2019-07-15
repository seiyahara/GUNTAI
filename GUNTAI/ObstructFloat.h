#ifndef _OBSTRUCT_FLOAT_H_
#define _OBSTRUCT_FLOAT_H_

#include "DxLib.h"

class ObstructFloat
{
public:
	ObstructFloat();				// コンストラクタ.
	virtual ~ObstructFloat();		// デストラクタ.

    void Update();					// 更新.
    void Draw();					// 描画.

	// モデルハンドルの取得.
    int GetModelHandle() { return m_modelHandle; }

    // ポジションのgetter/setter.
    const VECTOR& GetPos() const { return m_pos; }
    void SetPos(const VECTOR m_set) { m_pos = m_set; }

private:
    int		m_modelHandle;	// モデルハンドル.
    VECTOR	m_pos;			// ポジション.

	float rad;						// sin移動用のラジアン関数.
};

#endif // _OBSTRUCT_FLOAT_H_

