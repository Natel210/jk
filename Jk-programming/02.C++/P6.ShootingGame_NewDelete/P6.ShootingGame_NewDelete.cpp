// P6.ShootingGame_NewDelete.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ConsoleScreen.h"
#include "ConsolePlayer.h"
#include "ConsoleMonster.h"
#include "ConsoleBullet.h"
#include <Windows.h>
#include <stdlib.h>
#include <crtdbg.h>
#include <conio.h>




int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	CConsoleScreen CCS = CConsoleScreen();
	CCS.Init({ 100, 20 });

	CConsoleMonster::MonsterMapInit(CCS.GetScreenSize());

	CConsolePlayer CP = CConsolePlayer();
	CP.SetPos({ CCS.GetScreenSize().HX() , CCS.GetScreenSize().Y - 1 });
	CP.SetScreen(&CCS);

	CBullet Bullet[100];

	for (size_t i = 0; i < 100; i++)
	{
		Bullet[i].Death();
		Bullet[i].SetScreen(&CCS);
	}

	CP.SetBullet(Bullet);

	int MonsterCountX = CCS.GetScreenSize().HX() / 2;
	int MonsterCountY = CCS.GetScreenSize().HY() / 2;
	CConsoleMonster** ArrMonster = new CConsoleMonster*[MonsterCountY];

	for (int i = 0; i < MonsterCountY; i++)
	{
		ArrMonster[i] = new CConsoleMonster[MonsterCountX];
	}
	//ArrMonsterNew부여


	for (int y = 0; y < MonsterCountY; y++)
	{
		for (int x = 0; x < MonsterCountX; x++)
		{
			ArrMonster[y][x].SetScreen(&CCS);
			ArrMonster[y][x].SetPos({ x * 2, y * 2 });
		}
	}


	while (true)
	{
		Sleep(100);

		CCS.Clear();

		CP.Update();
		CP.Render();

		CConsoleMonster::MonsterMapClear();

		for (int y = 0; y < MonsterCountY; y++)
		{
			for (int x = 0; x < MonsterCountX; x++)
			{
				if (false == ArrMonster[y][x].IsDeath())
				{
					ArrMonster[y][x].Check();
				}
			}
		}

		for (int y = 0; y < MonsterCountY; y++)
		{
			for (int x = 0; x < MonsterCountX; x++)
			{
				if (false == ArrMonster[y][x].IsDeath())
				{
					ArrMonster[y][x].Update();
					ArrMonster[y][x].Render();
				}
			}
		}

		for (size_t i = 0; i < 100; i++)
		{
			if (false == Bullet[i].IsDeath())
			{
				Bullet[i].Update();
				Bullet[i].Render();
			}
		}

		CConsoleMonster::DownCheck();

		CCS.Show();


		if (true == CP.PlayerGameOver)
		{
			while (true)
			{
				bool retrun_game = false;
				system("cls");
				printf_s("종료하시겠습니까? ( y / n )\n");
				int y_n = _getch();
				switch (y_n)
				{
				case 'y':
				case 'Y':
				{
					for (int i = 0; i < MonsterCountY; i++)
					{
						delete[] ArrMonster[i];
					}
					delete[] ArrMonster;
					CConsoleMonster::MonsterMapInitDelete(CCS.GetScreenSize());
					CCS.InitDelete();
					_exit(0);
				}
				case 'n':
				case 'N':
					retrun_game = true;
					break;
				default:
					printf_s("다시입력해주세요.\n");
					Sleep(700);
					break;
				}
				if (true == retrun_game)
				{
					CP.PlayerGameOver = false;
					break;
				}
			}
		}
		//종료시키자
	}
}



