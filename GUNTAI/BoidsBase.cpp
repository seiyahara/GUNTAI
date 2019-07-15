#include"BoidsBase.h"
#include"Player.h"

BoidsBase::BoidsBase()
{
	m_modelHandle[0] = MV1LoadModel("data/model/chara/Boids.pmx");
	m_pos[0] = VGet(0, 0, 0);

	for (int i = 1; i < FLOCK_NUM; i++)
	{
		m_modelHandle[i]= MV1DuplicateModel(m_modelHandle[0]);
		m_pos[FLOCK_NUM] = VGet(/*rand() %*/ 100, /*rand() % */100, 0);
		printfDx("m_pos=", m_pos[i]);
	}
}

BoidsBase::~BoidsBase()
{
	//モデルのアンロード
	for (int i = 0; i < FLOCK_NUM; i++)
	{
		MV1DeleteModel(m_modelHandle[i]);
	}
}


void BoidsBase::Draw()
{
	for (int i=0; i < FLOCK_NUM; i++)
	{
		//モデルの描画
		MV1DrawModel(m_modelHandle[i]);
	}
}



void BoidsBase::Update(const Player& player)
{
	for (int i = 0; i < FLOCK_NUM; i++)
	{
		MV1SetPosition(m_modelHandle[i], m_pos[FLOCK_NUM]);
	}

	/*m_parentPos = VGet(player.GetPos().x, player.GetPos().y, player.GetPos().z + 100);
	m_pos = m_parentPos;*/
}
