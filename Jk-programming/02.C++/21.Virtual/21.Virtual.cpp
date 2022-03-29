// 21.Virtual.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class ConsolObject
{
public:
	int X;
	int Y;
};

class Bullet : public ConsolObject
{
};

class Monster : public ConsolObject
{
};

class Player
{
};

class Zone
{
public:
	Zone* m_LinkZone;

public:
	// ���� �ڽ��� �� virtual�� ���� �Լ��� ������ �Ȱ��� ���·� �����Ѵٸ�
	// ���ϰ� �Լ��� �Ķ���Ͱ� ������
	// �ڽ��� ���� �Ҵ�� ������ �Լ��� ȣ���Ҽ� �ִ�.
	// �̷� �ű��� ���� ����������?
	// ���� virtual �Լ��� �ϳ��� �����
	// �� Ŭ������ �����Լ� ���̺��̶�� ���� ����� ����.
	// �����Լ� ���̺��̶� �Լ��� �ּҵ��� ���մϴ�.
	// �����Լ� ���̺��� ���ٸ� ������ ���ʿ䰡 �����Ƿ�
	// if(�����Լ� ���̺��� �ִٸ�) 
	// {���� �Լ� ���̺��� �����ؼ� ���� ���� ���� �ڷ����� ���� �Լ��� ȣ��}
	// else { �׳� �� ���������� �Լ��� ȣ��}
	// virtual�� �پ��ִ�.
	virtual void Zone::InPlayer(Player* _pPlayer111)
	{
		// �����ε����� �ٸ���.
		// �̰��� �������̵��� �θ��ϴ�.
		printf_s("�� ���̽��� �Լ��Դϴ�.\n");
	}
};

class	BattleZone : public Zone
{
public:
	void InPlayer(Player* _pPlayer) {

		// �θ��� �Լ��� �״�� ȣ���ϰ� �������� �ִ�.
		/*Zone::InPlayer(_pPlayer);*/
		printf_s("��Ʋ������ �ο��� �����մϴ�.\n");
	}
};

class	TownZone : public Zone
{
public:
	void InPlayer(Player* _pPlayer) {
		printf_s("�������� ���� �ֽ��ϴ�.");
	}
};

int main()
{
	ConsolObject* ArrObject[100];

	// 100�ε����� ���������̴�.
	// ���� �̵��Ҽ� �ִ°� 20

	Player NewPlayer;
	Zone* P_Zone[20];
	BattleZone BZ[10];
	TownZone TZ[10];

	for (size_t i = 0; i < 10; i++)
	{
		P_Zone[i] = &BZ[i];
		P_Zone[i + 10] = &TZ[i];
	}

	P_Zone[11]->InPlayer(&NewPlayer);

	BattleZone* P_BZ_0 = (BattleZone*)P_Zone[11];
	P_BZ_0->InPlayer(&NewPlayer);
	//
	return 0;
}
//����-�� ĳ�����̶������� ����ɱ�??
//->����on  ��.�ٿ� ĳ���� -> �츮�� �����ð����� ���ٿ� �ɽ����̵ȴ�. ->Ȯ���ؼ� ã�ư��ش�.
//->����off ��,�ٿ� ĳ���� ->
// ���ɽ���-> �θ���� ȣ���Ѵ�.
// �ٿ��ɽ���->  11���� �����ε� ��Ʋ���νĵȴ�. ok!
//�� Ȯ���غ���.!

