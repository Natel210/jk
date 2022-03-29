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

	void Command(); //커멘드 입력
	void P_start_print();//시작위치
	void Player_print();//중간중간
	void bulletmovent();


public:
	ShootingPlayer();
	~ShootingPlayer();
};

