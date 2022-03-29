// 13.HeaderAndC++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// 객체가 있어야 한다.
// 객체를 만들려면 설계도가 있어야 한다.
// 설계도의 헤더를 가져오면된다.
// -> C++에서 헤더를 어떻개 쓰는지 배우겠다.

#include "Bullet.h"
//내가쓰고 싶은 헤더를 가지고오면된다.
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
	Snd_P.Move();//스태틱O
	////비교해봐///
	Fst_B.Fire();//스태틱X
	Fst_B.Fire();

	Snd_B.Fire();
	Snd_B.Fire();

    return 0;
}

