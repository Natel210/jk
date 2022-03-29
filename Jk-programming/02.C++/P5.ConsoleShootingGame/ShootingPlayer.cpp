#include "stdafx.h"
#include "ShootingPlayer.h"


ShootingPlayer::ShootingPlayer()
{
}


ShootingPlayer::~ShootingPlayer()
{
}


void ShootingPlayer::Command()
{
	if (1 == _kbhit())
	{

		int command = _getch();
		if (224 == command)
		{
			switch (_getch())
			{
			case 72:
				for (short i = 0; i < 20; i++)
				{
					if (false == Playerbullets[i].bulletcost)
					{
						Playerbullets[i].bulletcost = true;
						Playerbullets[i].b_ix = p_ix;
						Playerbullets[i].b_iy = (p_iy - 1);
						break;
					}
				}
				Player_print();
				break;
				//발싸
			case 75:
				--p_ix;
				Player_print();
				break;
			case 77:
				++p_ix;
				Player_print();
				break;
			default:
				break;
			}
		}
	}
}
//커맨더를 입력시에 true로 만들어준다

void ShootingPlayer::P_start_print()
{
	p_ix = ((m_ScreenPoint.X) / 2);
	p_iy = ((m_ScreenPoint.Y) - 4);
	SetPixel({ p_ix, p_iy }, '0');
}
//플레이어 렌더링

void ShootingPlayer::Player_print()
{
	SetPixel({ p_ix, p_iy }, '0');
}


void ShootingPlayer::bullet_Z_New()
{
	for (short i = 0; i < 20; i++)
	{
		Playerbullets[i].bulletcost = false;
		Playerbullets[i].Map(m_ScreenPoint.X, m_ScreenPoint.Y);
	}
}


void ShootingPlayer::bulletmovent()
{
	for (short i = 0; i < 20; i++)
	{
		if (true == Playerbullets[i].bulletcost)
		{
			Playerbullets[i].b_iy--;
			SetPixel({ (Playerbullets[i].b_ix), (Playerbullets[i].b_iy) }, '@');
			if (0 >= Playerbullets[i].b_iy)
			{
				Playerbullets[i].bulletcost = false;
				Playerbullets[i].b_ix = 0;
				Playerbullets[i].b_iy = 0;

			}
		}
	}
}

