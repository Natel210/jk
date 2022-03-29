#include "stdafx.h"
#include "PuzzleFrame.h"

void M_frame(const short const _x, const short const _y)
{

	for (short x = 0; x < (_x * 3); ++x)
	{
		for (short y = 0; y < (_y * 2); ++y)
		{
			bool B_y = (0 == (y % 2));
			if (true == B_y)

			{
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { x , y });
				printf_s("-");
			}
		}
	}
	for (short x = 0; x < (_x * 3); ++x)
	{
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { x , (_y * 2) });
		printf_s("-");
	}
	for (short x = 0; x < (_x * 3); ++x)
	{
		for (short y = 0; y < (_y * 2) + 1; ++y)
		{

			bool B_x = (0 == (x % 3));
			if (true == B_x)
			{
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { x  , y });
				printf_s("|");
			}

		}
	}
	for (short y = 0; y < (_y * 2) + 1; ++y)
	{
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { (_x * 3) , y });
		printf_s("|");
	}

}
//»óÀÚÆ²
