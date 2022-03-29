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
		//i�� x��ǥ  j�� y��ǥ
	}
	PuzzleMap[4][4] = 'P';

	for (int RandonNumber = 1; RandonNumber < 10; RandonNumber++)
		//�ͽ� ȹ��
	{
		int RandomSwap = ((rand() % 4) + 1);
		RandomLogic(RandomSwap);
		Puzzlemove(RandomCommand);
	}
	Printf();
}
//������
//���� ���� �Է��̶� �÷��̾�
//�ͽ�(�׿����� ������)

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
				//���ڿ� %s�� ����Ϸ��ϴ� �ַ���.
			}
		}
		//i�� x��ǥ  j�� y��ǥ
	}
}
//����� �Լ�
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
//����Ű ���� �Լ�
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
//���� �ͽ� �Լ�(�ش� ����Ű �̵�)
//������ ���ÿ� �ǵ���
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
					printf_s("�����մϴ�. ������ Ŭ���� �ϼ˽��ϴ�.\n");
					_getch();
					exit(0);
				}
				else
				{
					return;
				}
					//i�� x��ǥ  j�� y��ǥ
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
