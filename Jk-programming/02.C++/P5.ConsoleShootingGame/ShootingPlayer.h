#pragma once
#include "MonsterSet.h"
#include "ShootingBullet.h"
class ShootingPlayer : public MonsterSet
{
private:
	int p_ix;
	int p_iy;

	bullet Playerbullets[20];
	void bullet_Z_New();

public:

	void Command(); //Ŀ��� �Է�
	void P_start_print();//������ġ
	void Player_print();//�߰��߰�
	void bulletmovent();


public:
	ShootingPlayer();
	~ShootingPlayer();
};

