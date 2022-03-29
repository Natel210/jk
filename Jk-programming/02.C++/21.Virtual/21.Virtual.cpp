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
	// 만약 자식이 이 virtual이 붙은 함수를 완전히 똑같은 형태로 구현한다면
	// 리턴값 함수명 파라미터가 같을때
	// 자신이 실제 할당된 형태의 함수를 호출할수 있다.
	// 이런 신기한 일이 가능이유는?
	// 만약 virtual 함수를 하나라도 만들면
	// 그 클래스에 가상함수 테이블이라는 것이 만들어 진다.
	// 가상함수 테이블이란 함수의 주소들의 집합니다.
	// 가상함수 테이블이 없다면 대조를 할필요가 없으므로
	// if(가상함수 테이블이 있다면) 
	// {가상 함수 테이블을 참조해서 그중 나의 실제 자료형과 같은 함수를 호출}
	// else { 그냥 내 포인터형의 함수를 호출}
	// virtual이 붙어있다.
	virtual void Zone::InPlayer(Player* _pPlayer111)
	{
		// 오버로딩과는 다르다.
		// 이것을 오버라이드라고 부릅니다.
		printf_s("존 베이스의 함수입니다.\n");
	}
};

class	BattleZone : public Zone
{
public:
	void InPlayer(Player* _pPlayer) {

		// 부모의 함수를 그대로 호출하고 싶을때가 있다.
		/*Zone::InPlayer(_pPlayer);*/
		printf_s("배틀존에서 싸움을 시작합니다.\n");
	}
};

class	TownZone : public Zone
{
public:
	void InPlayer(Player* _pPlayer) {
		printf_s("마을에서 쉬고 있습니다.");
	}
};

int main()
{
	ConsolObject* ArrObject[100];

	// 100인덱스는 무슨마을이다.
	// 내가 이동할수 있는곳 20

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
//가상-업 캐스팅이랑했을때 어떻개될까??
//->가상on  업.다운 캐스팅 -> 우리가 이전시간에본 업다운 케스팅이된다. ->확인해서 찾아가준다.
//->가상off 업,다운 캐스팅 ->
// 업케스팅-> 부모것을 호출한다.
// 다운케스팅->  11번은 마을인데 배틀로인식된다. ok!
//를 확인해봐라.!

