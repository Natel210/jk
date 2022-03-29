// 17.ClassStatic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

class Monster
{
private:
	// Ŭ���� �ȿ��� static�� ���� ������ Ŭ���� ���� ������� �Ѵ�.
	// ��������.
	// Ŭ�������� ������ �ϳ��� �����.
	// Ŭ���� ����������
	// extern�� ����� ������ ���.
	// �����Ŵ�.
	static int TotalMonsterCreate;// �޸𸮰� ������� ����
	static int MoveMonster;// ���� �����̰� �ִ� ����
public:
	int Hp;

public:
	static int TotalMonsterCount()
	{
		return TotalMonsterCreate;
	}
	// 1. static �Լ������� �Ϲ� �ɹ������� ����Ҽ� ����.
	// 2. thiscall�� �ƴϴ�. stdcall _cdecl
	// this�� �������� �����Ƿ�
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
	Monster()//������ �Լ�
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
	// static ������ ���� ��ü�� ���ؼ� ����� �ʿ䰡 ����.
	// NewMonster.MonsterCount = 10;

	Monster ArryMonster_s[100];
	ArryMonster_s[0].CreateMonster();
	ArryMonster_s[1].CreateMonster();
	ArryMonster_s[2].CreateMonster();

	ArryMonster_s[0].DeathMonster();
	ArryMonster_s[1].DeathMonster();

	// Ŭ�������� �ϳ� ����� �̳༮�� �������� ���� ����� ���� ������
	// ������ ������ �ö󰩴ϴ�.
	// Ŭ������ �̸��� �ȴٸ� �������� ����� �����ϴ�.

	std::cout << Monster::TotalMonsterCount() << std::endl;
    return 0;
}

