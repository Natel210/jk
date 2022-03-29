// P3.Shooting.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "player.h"
#include "bullet.h"
#include "uncuser.h"


int main()
{
	system("mode con:cols=100 lines=50");

	system("title ShootingGame");
	player NewPlayer = player(30, 25);
	NewPlayer.p_map(100, 50);
	uncuser();
	while (true)
	{
		NewPlayer.command();
		NewPlayer.bulletmovent();
		system("cls");
		NewPlayer.render();
	}
	return 0;
}