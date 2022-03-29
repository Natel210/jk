#include "stdafx.h"
#include "ConsoleMonster.h"

IPOINT CConsoleMonster::Dir = IPOINT::IPRIGHT;
IPOINT  CConsoleMonster::MapSize = IPOINT::IPZERO;
CConsoleMonster*** CConsoleMonster::ArrMonsterMap;
bool CConsoleMonster::Down = false;

CConsoleMonster::CConsoleMonster()
{
	SetRenderChr('M');
}

CConsoleMonster::~CConsoleMonster()
{
}

void CConsoleMonster::MonsterMapClear() {
	for (int Y = 0; Y < MapSize.Y; Y++)
	{
		for (int X = 0; X < MapSize.X; X++)
		{
			ArrMonsterMap[Y][X] = nullptr;
		}
	}
}

void CConsoleMonster::MonsterMapInit(ISIZE _ScreenSize) {

	ArrMonsterMap = new CConsoleMonster**[_ScreenSize.Y];

	for (int i = 0; i < _ScreenSize.Y; i++)
	{
		ArrMonsterMap[i] = new CConsoleMonster*[_ScreenSize.X];
	}

	MapSize = _ScreenSize;
}

void CConsoleMonster::MonsterMapInitDelete(ISIZE _ScreenSize)
{

	for (int i = 0; i < _ScreenSize.Y; i++)
	{
		delete ArrMonsterMap[i];
	}

	delete[] ArrMonsterMap;
}





void CConsoleMonster::Check() {

	if (
		((Dir == IPOINT::IPRIGHT) && (m_Pos.X == m_pScreen->GetScreenSize().X - 1)) ||
		((Dir == IPOINT::IPLEFT) && (m_Pos.X == 0))
		)
	{
		Down = true;
	}
}

void CConsoleMonster::Update()
{
	if (false == Down)
	{
		m_Pos += Dir;
	}
	else if (true == Down)
	{
		m_Pos += IPOINT::IPDOWN;
	}

	ArrMonsterMap[m_Pos.Y][m_Pos.X] = this;
}

void CConsoleMonster::DownCheck() {
	if (true == Down)
	{
		Down = false;
		Dir *= -1;
	}
}