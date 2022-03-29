#include "stdafx.h"
#include "ConsolePlayer_Speed.h"
#include "Bullet_Speed.h"
#include <conio.h>


CConsolePlayer::CConsolePlayer() : Count(0)
{
	SetRenderChr('P');
}

CConsolePlayer::~CConsolePlayer()
{
}

void CConsolePlayer::Update() 
{
	if (0 != _kbhit())
	{

		switch (_getch())
		{
		case 'a':
		case 'A':
			m_Pos += IPOINT::IPLEFT;
			break;
		case 'd':
		case 'D':
			m_Pos += IPOINT::IPRIGHT;
			break;
		case 'w':
		case 'W':
			m_ArrBullet[Count].Live();
			m_ArrBullet[Count].SetPos(m_Pos);
			++Count;

			if (Count >= 100)
			{
				Count = 0;
			}
			break;
		case 'q':
		case 'Q':
			PlayerGameOver = true;
			break;
		}
	}
}