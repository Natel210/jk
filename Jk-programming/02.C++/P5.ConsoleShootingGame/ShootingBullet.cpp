#include "stdafx.h"
#include "ShootingBullet.h"

bullet::bullet() {}
//�÷��̾��� xy��ǥ�� �ް� �ʹ�.

bullet::~bullet()
{
}




void bullet::Map(short _x, short _y)
{
	Mapb_ix = (_x);
	Mapb_iy = (_y);
}
//���� ������ // (�÷��̾�xy��(�Ķ���ͷν����))->(�� xy��)���� ��

