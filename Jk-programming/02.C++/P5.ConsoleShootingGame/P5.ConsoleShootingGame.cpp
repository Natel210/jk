// P5.ConsoleShootingGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Consoleframe.h"
#include "MonsterSet.h"
#include "ShootingPlayer.h"

int main()
{

	ShootingPlayer G_Set = ShootingPlayer();
	G_Set.Init({ 100, 50 });
	G_Set.MonsterNumber();
	G_Set.P_start_print();
	//ShootingPlayer SPlay = ShootingPlayer();
	//SPlay.P_start_print();

	int PlayerX = 20;
	int PlayerY = 20;
	while (true)
	{
		G_Set.Clear();
		G_Set.MonsterMove();
		G_Set.Command();
		G_Set.bulletmovent();
		//		G_Set.MonsterDeath();

		G_Set.Show();
		G_Set.Player_print();


		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,0 });
	}
	G_Set.InitDelete({ 100,50 });

	return 0;
}

