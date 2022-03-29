// 17.ClassStatic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

class Monster
{
private:
	// 클래스 안에서 static이 붙은 변수를 클래스 정적 변수라고 한다.
	// 전역변수.
	// 클래스마다 무조건 하나만 생긴다.
	// 클래스 정적변수는
	// extern과 비슷한 성향을 띈다.
	// 있을거다.
	static int TotalMonsterCreate;// 메모리가 만들어진 몬스터
	static int MoveMonster;// 실제 움직이고 있는 몬스터
public:
	int Hp;

public:
	static int TotalMonsterCount()
	{
		return TotalMonsterCreate;
	}
	// 1. static 함수에서는 일반 맴버변수를 사용할수 없다.
	// 2. thiscall이 아니다. stdcall _cdecl
	// this가 존재하지 않으므로
	//static int MonsterHp()
	//{
	//	// this->
	//	return Hp;
	//}


public:
	void CreateMonster() {
		++MoveMonster;
		std::cout << MoveMonster << "'s Monster Moving" << std::endl;
	}
	void DeathMonster() {
		--MoveMonster;
		std::cout << MoveMonster << "'s Monster Moving" << std::endl;
	}

public:
	Monster()//생성자 함수
	{
		++TotalMonsterCreate;
		std::cout << "Monster's" << TotalMonsterCreate << "th Create!" << std::endl;
	}
};

int Monster::TotalMonsterCreate = 0;
int Monster::MoveMonster = 0;

int main()
{
	// Monster NewMonster = Monster();

	// NewMonster.Hp = 10;
	// static 변수는 굳이 객체를 통해서 사용할 필요가 없다.
	// NewMonster.MonsterCount = 10;

	Monster ArryMonster_s[100];
	ArryMonster_s[0].CreateMonster();
	ArryMonster_s[1].CreateMonster();
	ArryMonster_s[2].CreateMonster();

	ArryMonster_s[0].DeathMonster();
	ArryMonster_s[1].DeathMonster();

	// 클래스마다 하나 생기고 이녀석은 전역변수 거의 취급이 같기 때문에
	// 데이터 영역에 올라갑니다.
	// 클래스의 이름만 안다면 언제든지 사용이 가능하다.

	std::cout << Monster::TotalMonsterCount() << std::endl;
    return 0;
}

