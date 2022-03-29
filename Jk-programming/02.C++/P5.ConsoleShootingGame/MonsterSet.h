#pragma once
#include "Consoleframe.h"
class MonsterSet : public Consoleframe
{
private:
	int Monster_X = 0;
	int Monster_Y = 0;
	bool monster_LR = true; //좌우좌우

	void MonsterMove_RL();
	void Monsterdown();
	void delay(clock_t n);
	//몬스터 무빙



protected:
	void Playercuser(int _y, int _x);
public:
	MonsterSet();
	~MonsterSet();
public:

	//void MonsterDeath();
	////몬스터 죽이기

	void MonsterNumber();
	//몬스터 수지정

	void MonsterMove();
	//딜레이를 주고 몹이 움직이게 한다.

};

