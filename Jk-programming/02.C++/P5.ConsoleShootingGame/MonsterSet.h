#pragma once
#include "Consoleframe.h"
class MonsterSet : public Consoleframe
{
private:
	int Monster_X = 0;
	int Monster_Y = 0;
	bool monster_LR = true; //�¿��¿�

	void MonsterMove_RL();
	void Monsterdown();
	void delay(clock_t n);
	//���� ����



protected:
	void Playercuser(int _y, int _x);
public:
	MonsterSet();
	~MonsterSet();
public:

	//void MonsterDeath();
	////���� ���̱�

	void MonsterNumber();
	//���� ������

	void MonsterMove();
	//�����̸� �ְ� ���� �����̰� �Ѵ�.

};

