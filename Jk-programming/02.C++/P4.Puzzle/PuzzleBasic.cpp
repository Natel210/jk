#include "stdafx.h"
#include "PuzzleBasic.h"


PuzzleBasic::PuzzleBasic()
{
	srand((unsigned int)time(0));
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			PuzzleMap[j][i] = ((i + 1) + (j * 5));
		}
		//i가 x좌표  j가 y좌표
	}
	PuzzleMap[4][4] = 'P';

	for (int RandonNumber = 1; RandonNumber < 10; RandonNumber++)
		//믹싱 획수
	{
		int RandomSwap = ((rand() % 4) + 1);
		RandomLogic(RandomSwap);
		Puzzlemove(RandomCommand);
	}
	Printf();
}
//생성자
//먼저 숫자 입력이랑 플레이어
//믹싱(그에따른 움직임)

void PuzzleBasic::Printf()
{
	for (short j = 0; j < 5; j++)
	{
		for (short i = 0; i < 5; i++)
		{
			if(10 > PuzzleMap[j][i])
			{
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { (i * 5) , (j * 2) });
				printf_s("[0%d]", PuzzleMap[j][i]);
			}
			if (10 <= PuzzleMap[j][i])
			{
				if ('P' != PuzzleMap[j][i])
				{
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { (i * (short)5) , (j * (short)2) });
					printf_s("[%d]", PuzzleMap[j][i]);
				}
			}
			if ('P' == PuzzleMap[j][i])
			{
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { (i * (short)5) , (j * (short)2) });
				printf_s("[P%c]", PuzzleMap[j][i]);
				//문자열 %s로 출력하려하니 애러뜸.
			}
		}
		//i가 x좌표  j가 y좌표
	}
}
//입출력 함수
//pubilic

void PuzzleBasic::Puzzlemove(int _command)
{
	int j;
	int i;
	for (j = 0; j < 5; j++)
	{
		for (i = 0; i < 5; i++)
		{
			if ('P' == PuzzleMap[j][i])
			{
				switch (_command)
				{
				case 72:
					{
						if (0 != j)
						{
							int temp;
							temp = PuzzleMap[j][i];
							PuzzleMap[j][i] = PuzzleMap[(j-1)][i];
							PuzzleMap[(j-1)][i] = temp;
						}
						return;
					}
					//-1y
				case 80:
					{
						if (4 != j)
						{
							int temp;
							temp = PuzzleMap[j][i];
							PuzzleMap[j][i] = PuzzleMap[(j+1)][i];
							PuzzleMap[(j+1)][i] = temp;
						}
						return;
					}
					//+1y
				case 75:
					{
						if (0 != i)
						{
							int temp;
							temp = PuzzleMap[j][i];
							PuzzleMap[j][i] = PuzzleMap[j][(i - 1)];
							PuzzleMap[j][(i - 1)] = temp;
						}
						return;
					}
					//-1x
				case 77:
					{
						if (4 != i)
						{
							int temp;
							temp = PuzzleMap[j][i];
							PuzzleMap[j][i] = PuzzleMap[j][(i + 1)];
							PuzzleMap[j][(i + 1)] = temp;
						}
						return;
					}
					//+1x
				default:
					break;
				}
			}
		}
	}

}
//방향키 조작 함수
//pubilic

void PuzzleBasic::RandomLogic(int RandomSwap)
{
	switch (RandomSwap)
	{
	case 1:
		RandomCommand = 72;
		//-1 y
		break;
	case 2:
		RandomCommand = 80;
		// +1 y
		break;
	case 3:
		RandomCommand = 75;
		// -1 x
		break;
	case 4:
		RandomCommand = 77;
		// +1 x
	default:
		break;
	}
}
//랜덤 믹스 함수(해당 방향키 이동)
//생성과 동시에 되도록
//private

void PuzzleBasic::FinishGame()
{
	ChackPoint = 0;
	for (size_t j = 0; j < 5; j++)
	{
		for (size_t i = 0; i < 5; i++)
		{
			if ('P' == PuzzleMap[4][4])
			{
				if (((j*5)+i)+1 == PuzzleMap[j][i])
				{
					ChackPoint++;
					//printf_s("\n%d", ChackPoint);
				}
				else if (24 == ChackPoint)
				{
					printf_s("축하합니다. 게임을 클리어 하셧습니다.\n");
					_getch();
					exit(0);
				}
				else
				{
					return;
				}
					//i가 x좌표  j가 y좌표
			}
			else {
				return;
			}

		}
	}
}

PuzzleBasic::~PuzzleBasic()
{
}
