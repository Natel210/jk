#include "stdafx.h"
//#include "PlaySetting.h"
//
//
//PlaySetting::PlaySetting()
//{
//
//}
//
//PlaySetting::~PlaySetting()
//{
//}
//
//void PlaySetting::AutoSave(PuzzlePlayer* _Player)
//{
//	FILE* AutoFile = 0;
//	//�ϵ� ��ũ�� �ִ� �����Ϳ� ���ٱ����� ������ �ڵ�
//	fopen_s(&AutoFile, "Auto.Save", "wb");
//	
//	if (0 != AutoFile)
//	{
//		fwrite(_Player,sizeof(PuzzlePlayer),1, AutoFile);
//		fclose(AutoFile);
//	}
//
//}
//
//void PlaySetting::AutoLoad(PuzzlePlayer* _Player)
//{
//	FILE* AutoFile = 0;
//	fopen_s(&AutoFile, "Auto.Save", "rb");
//
//	if (0 != AutoFile)
//	{
//		fread_s(_Player, sizeof(PuzzlePlayer), sizeof(PuzzlePlayer), 1, AutoFile);
//		fclose(AutoFile);
//	}
//	else
//	{
//		printf_s("SaveFile Error");
//		_getch();
//		return;
//	}
//}


