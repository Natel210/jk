#include "stdafx.h"
#include "bullet.h"

bullet::bullet() {}
bullet::bullet(short _x, short _y) : Pixp_ix(_x), Pixp_iy(_y)
{
}
//�÷��̾��� xy��ǥ�� �ް� �ʹ�.

bullet::~bullet()
{
}

/////////////private/////////////////

//���� �Ѿ��� �ʿ����� ������ ������ش�.
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
//�Ѿ��� �����ѿ� ���� ����� //�÷��̾� ��ǥ�� �̵��ϴ°� ���� ����ִ�.//������ ���꿡 ���ս�ų����// XXXXXXXXXXX

void bullet::bulletRander()
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { b_ix , b_iy });
	cout << " * ";
}
//�̰� �̵��ҋ� ���� ǥ�����ش�. ///�̰ͱ��� ������ �־���. ///XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

////////////////public////////////////


void bullet::Map(short _x, short _y)
{
	Mapb_ix = (_x);
	Mapb_iy = (_y);
}
//���� ������ // (�÷��̾�xy��(�Ķ���ͷν����))->(�� xy��)���� ��
void bullet::bulletMove(short p_ix, short p_iy)
{

	if (true == bulletcost)
	{
		b_ix++;
		bulletRander();
		Limit(p_ix, p_iy);
	}


}
//�Ѿ��� �߽ε����� ��ĭ�� �̵��Ѵ�.
//�̵��Ŀ��� �÷����� ��ǥ�� �̵����ش�.
//�Ķ���ʹ� �÷��̾��� xy��ǥ

//Ʈ���ϋ��� �˾Ƽ�����
//�޽��ϋ��� �÷��̾ ���󰣴�.
void bullet::bulletUnfire(short p_ix, short p_iy)
{
	if (false == bulletcost)
	{
		b_ix = p_ix;
		b_iy = p_iy;
	}
}