#include "stdafx.h"
#include "PuzzlePlayer.h"


PuzzlePlayer::PuzzlePlayer()
{
}


PuzzlePlayer::~PuzzlePlayer()
{
}



void PuzzlePlayer::MovingPlayer()
{
	if (1 == _kbhit())
	{
		int commnd = _getch();
		if (224 == commnd)
		{
			int arrow_P= _getch();
			Puzzlemove(arrow_P);
			Printf();
				//i�� x��ǥ  j�� y��ǥ
		}
	}
}

void PuzzlePlayer::AutoSave(PuzzlePlayer* _Player)
{
	FILE* AutoFile = 0;
	//�ϵ� ��ũ�� �ִ� �����Ϳ� ���ٱ����� ������ �ڵ�
	fopen_s(&AutoFile, "Auto.Save", "wb");

	if (0 != AutoFile)
	{
		fwrite(_Player, sizeof(PuzzlePlayer), 1, AutoFile);
		fclose(AutoFile);
	}

}

void PuzzlePlayer::AutoLoad(PuzzlePlayer* _Player)
{
	FILE* AutoFile = 0;
	fopen_s(&AutoFile, "Auto.Save", "rb");

	if (0 != AutoFile)
	{
		fread_s(_Player, sizeof(PuzzlePlayer), sizeof(PuzzlePlayer), 1, AutoFile);
		fclose(AutoFile);
	}
	else
	{
		printf_s("SaveFile Error");
		_getch();
		return;
	}
}

void PuzzlePlayer::StartPrint()
{
	Printf();
}