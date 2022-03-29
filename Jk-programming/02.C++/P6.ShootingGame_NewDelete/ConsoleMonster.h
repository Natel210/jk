#pragma once
#include "ConsoleObject.h"
class CConsoleMonster :
	public CConsoleObject
{
public:
	static IPOINT MapSize;
	static CConsoleMonster*** ArrMonsterMap;
	static IPOINT Dir;
	static bool Down;

	static CConsoleMonster* GetMonster(IPOS _Pos) {

		if (
			(_Pos.X < 0) || (_Pos.X > MapSize.X)
			)
		{
			return nullptr;
		}
		else if (
			(_Pos.Y < 0) || (_Pos.Y > MapSize.Y - 1)
			)
		{
			return nullptr;
		}

		return ArrMonsterMap[_Pos.Y][_Pos.X];
	}

public:
	static void MonsterMapInit(ISIZE _ScreenSize);
	static void MonsterMapInitDelete(ISIZE _ScreenSize);

	static void MonsterMapClear();
	static void DownCheck();

public:
	virtual void Check();
	virtual void Update();

public:
	CConsoleMonster();
	~CConsoleMonster();
};

