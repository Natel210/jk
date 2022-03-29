#include "stdafx.h"
#include "bullet.h"

bullet::bullet() {}
bullet::bullet(short _x, short _y) : Pixp_ix(_x), Pixp_iy(_y)
{
}
//플레이어의 xy좌표를 받고 싶다.

bullet::~bullet()
{
}

/////////////private/////////////////

//다음 총알을 맵에따른 제한을 만드어준다.
void bullet::Limit(short p_ix, short p_iy)
{
	if (-1 > b_ix)
	{
		bulletcost = false;
		b_ix = p_ix;
		b_iy = p_iy;
	}
	else if (b_ix > Mapb_ix)
	{
		b_ix = (Mapb_ix - 1);
		bulletcost = false;
		b_ix = p_ix;
		b_iy = p_iy;
	}
	else if (-1 > b_iy)
	{
		bulletcost = false;
		b_ix = p_ix;
		b_iy = p_iy;
	}
	else if (b_iy > Mapb_iy)
	{
		b_iy = (Mapb_iy - 1);
		bulletcost = false;
		b_ix = p_ix;
		b_iy = p_iy;
	}
	else
	{
		bulletcost = true;
	}
}
//총알의 맵제한에 따른 변경식 //플래이어 좌표로 이동하는거 까지 들어있다.//하지만 무브에 통합시킬것임// XXXXXXXXXXX

void bullet::bulletRander()
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { b_ix , b_iy });
	cout << " * ";
}
//이건 이동할떄 마다 표시해준다. ///이것까지 무빙에 넣었다. ///XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

////////////////public////////////////


void bullet::Map(short _x, short _y)
{
	Mapb_ix = (_x);
	Mapb_iy = (_y);
}
//총의 맵제한 // (플레이어xy맵(파라미터로써야함))->(블릿 xy맵)으로 줌
void bullet::bulletMove(short p_ix, short p_iy)
{

	if (true == bulletcost)
	{
		b_ix++;
		bulletRander();
		Limit(p_ix, p_iy);
	}


}
//총알의 발싸됫을때 한칸씩 이동한다.
//이동후에는 플레이의 좌표로 이동해준다.
//파라미터는 플래이어의 xy좌표

//트루일떄는 알아서가고
//펄스일떄는 플래이어를 따라간다.
void bullet::bulletUnfire(short p_ix, short p_iy)
{
	if (false == bulletcost)
	{
		b_ix = p_ix;
		b_iy = p_iy;
	}
}