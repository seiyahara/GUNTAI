#ifndef _BOIDS_MANAGER_H_
#define _BOIDS_MANAGER_H_

class BoidsBase;

//�Q��̐�

class BoidsManager final
{
public:
	BoidsManager();			//�R���X�g���N�^
	~BoidsManager();		//�f�X�g���N�^

	void CreateFlock();		//�Q��̐���
	void DestroyFlock();	//�Q��̍폜

	void Update();			//�X�V
	void Draw();			//�`��

private:

	int flockModelSourceHandle;		//	�Q�ꃂ�f���̑�{�̃n���h��
};

#endif