// P4.PuzzleClass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "PuzzleSize.h"
#include "PuzzleFrame.h"


int main()
{
	int P_x = 5;
	int P_y = 5;
	//플래이어 맵 싸이즈 정해버리기!
	PuzzleSize PS = PuzzleSize(P_x, P_y);
	M_frame((short)P_x, (short)P_y);
    return 0;
}

