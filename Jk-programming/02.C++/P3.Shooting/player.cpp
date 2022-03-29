#include "stdafx.h"
#include "player.h"


player::player(short _x, short _y) : p_ix(_x), p_iy(_y)
{
}


player::~player()
{
}

void player::command()
{
	if (1 == _kbhit())
	{
		int command = _getch();
		if (224 == command)
		{
			switch (_getch())
			{
			case 72:
				p_iy -= 1;
				if (p_iy < 0)
				{
					p_iy = 0;
				}
				for (short i = 0; i < 20; i++)
				{
					Playerbullets[i].bulletUnfire(p_ix, p_iy);
				}
				break;
			case 80:
				p_iy += 1;
				if (p_iy > Map_iy)
				{
					p_iy = Map_iy;
				}
				for (short i = 0; i < 20; i++)
				{
					Playerbullets[i].bulletUnfire(p_ix, p_iy);
				}
				break;
			case 75:
				p_ix -= 1;
				if (p_ix < 0)
				{
					p_ix = 0;
				}
				for (short i = 0; i < 20; i++)
				{
					Playerbullets[i].bulletUnfire(p_ix, p_iy);
				}
				break;
			case 77:
				p_ix += 1;
				if (p_ix > Map_ix)
				{
					p_ix = Map_ix;
				}
				for (short i = 0; i < 20; i++)
				{
					Playerbullets[i].bulletUnfire(p_ix, p_iy);//���󰡱�
				}
				break;
			default:
				break;
			}
		}
		if (105 == command)
		{
			for (short i = 0; i < 20; i++)
			{
				if (false == Playerbullets[i].bulletcost)
				{
					Playerbullets[i].bulletcost = true;
					break;
				}
			}
		}
	}
}
//Ŀ�Ǵ��� �Է½ÿ� true�� ������ش�

void player::render()
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { p_ix , p_iy });
	cout << "[*]";
}
//�÷��̾� ������

void player::p_map(short _x, short _y)
{
	Map_ix = (_x - 3);
	Map_iy = (_y - 1);
	for (short i = 0; i < 20; i++)
	{
		Playerbullets[i].Map(Map_ix, Map_iy);
	}
}
//�� ���Ѱ� ���ÿ� �÷��̾�/���� ������ ���ÿ�

void player::bulletmovent()
{
	for (short i = 0; i < 20; i++)
	{
		Playerbullets[i].bulletMove(p_ix, p_iy);
	}
}