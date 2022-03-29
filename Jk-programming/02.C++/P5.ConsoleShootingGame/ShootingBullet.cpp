#include "stdafx.h"
#include "ShootingBullet.h"

bullet::bullet() {}
//플레이어의 xy좌표를 받고 싶다.

bullet::~bullet()
{
}




void bullet::Map(short _x, short _y)
{
	Mapb_ix = (_x);
	Mapb_iy = (_y);
}
//총의 맵제한 // (플레이어xy맵(파라미터로써야함))->(블릿 xy맵)으로 줌

