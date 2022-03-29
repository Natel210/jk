// P4.Puzzle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "PuzzleBasic.h"
#include "PuzzlePlayer.h"
#include "PlaySetting.h"

int main()
{
	PuzzlePlayer PB;
	if (0 == _access("Auto.Save",0))
	{
		PB.AutoLoad(&PB);

	}
	else
	{
		PB.AutoSave(&PB);
	}
	PB.StartPrint();

	while (true)
	{
		PB.MovingPlayer();
		PB.FinishGame();
		PB.AutoSave(&PB);
	}

    return 0;
}

