// 13.HeaderAndC++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// ��ü�� �־�� �Ѵ�.
// ��ü�� ������� ���赵�� �־�� �Ѵ�.
// ���赵�� ����� ��������ȴ�.
// -> C++���� ����� ��� ������ ���ڴ�.

#include "Bullet.h"
//�������� ���� ����� ���������ȴ�.
#include "PlayerMove.h"

int main()
{
	PlayerMove Fst_P;
	PlayerMove Snd_P;
	Bullet Fst_B;
	Bullet Snd_B;

	Fst_P.Move();
	Fst_P.Move();

	Snd_P.Move();
	Snd_P.Move();//����ƽO
	////���غ�///
	Fst_B.Fire();//����ƽX
	Fst_B.Fire();

	Snd_B.Fire();
	Snd_B.Fire();

    return 0;
}

