#ifndef _OBSTRUCT_STATIC_H_
#define _OBSTRUCT_STATIC_H_

#include "DxLib.h"

class ObstructStatic
{
public:
	ObstructStatic();				// コンストラクタ.
	virtual ~ObstructStatic();		// デストラクタ.

	void Update();					// 更新.
    void Draw();					// 描画.

	// モデルハンドルの取得.
    int GetModelHandle() { return m_modelHandle; }

    // ポジションのgetter/setter.
    const VECTOR& GetPos() const { return m_pos; }
    void SetPos(const VECTOR set) { m_pos = set; }

private:
    int		m_modelHandle;	// モデルハンドル.
    VECTOR	m_pos;			// ポジション.

};

#endif // _OBSTACLE_BASE_H_

