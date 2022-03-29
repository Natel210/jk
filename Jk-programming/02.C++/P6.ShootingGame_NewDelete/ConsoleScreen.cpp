#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include <Windows.h>
#include "ConsoleScreen.h"

using namespace std;

IPOINT IPOINT::IPLEFT = { -1, 0 };
IPOINT IPOINT::IPRIGHT = { 1, 0 };
IPOINT IPOINT::IPDOWN = { 0, 1 };
IPOINT IPOINT::IPUP = { 0, -1 };
IPOINT IPOINT::IPZERO = { 0, 0 };

CConsoleScreen::CConsoleScreen() : m_ClearChar(' ')
{
}


CConsoleScreen::~CConsoleScreen()
{

	for (int i = 0; i < m_ScreenPoint.Y; i++)
	{
		delete m_ScreenPixel[i];
	}

	delete[] m_ScreenPixel;
}

void CConsoleScreen::Init(IPOINT _Point)
{
	m_ScreenPoint = _Point;

	if (0 >= m_ScreenPoint.X
		|| 0 >= m_ScreenPoint.Y)
	{
		return;
	}

	char ScreenSizeText[256];

	sprintf_s(ScreenSizeText, "mode con:cols=%d lines=%d", _Point.X, _Point.Y + 1);

	system(ScreenSizeText);

	m_ScreenPixel = new char*[m_ScreenPoint.Y];

	for (int i = 0; i < m_ScreenPoint.Y; i++)
	{
		m_ScreenPixel[i] = new char[m_ScreenPoint.X];
	}

	Clear();

	// 수없이 많은 
	// memset(m_ScreenPixel, ' ',sizeof(_Point.X * _Point.Y * sizeof(char)));
}

void CConsoleScreen::InitDelete()
{
	for (size_t i = 0; i < m_ScreenPoint.Y; i++)
	{
		delete[] m_ScreenPixel[i];
	}

	delete[] m_ScreenPixel;
}
//뉴 지워주기!


bool CConsoleScreen::IsOverPos(IPOS _Pos) {

	if (
		(_Pos.X < 0) || (_Pos.X > m_ScreenPoint.X)
		)
	{
		return true;
	}
	else if (
		(_Pos.Y < 0) || (_Pos.Y > m_ScreenPoint.Y - 1)
		)
	{
		return true;
	}
	else
	{
		return false;
	}

}

void CConsoleScreen::SetPixel(IPOS _Pos, char _Chr)
{
	if (IsOverPos(_Pos))
	{
		return;
	}

	m_ScreenPixel[_Pos.Y][_Pos.X] = _Chr;
}

char CConsoleScreen::GetPixel(IPOS _Pos) {

	if (IsOverPos(_Pos))
	{
		return 0;
	}

	return m_ScreenPixel[_Pos.Y][_Pos.X];
}

void CConsoleScreen::Clear() {
	for (int y = 0; y < m_ScreenPoint.Y; y++)
	{
		for (int x = 0; x < m_ScreenPoint.X; x++)
		{
			m_ScreenPixel[y][x] = m_ClearChar;
		}
	}
}

void CConsoleScreen::Show() {

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0, 0 });

	for (int y = 0; y < m_ScreenPoint.Y; y++)
	{
		for (int x = 0; x < m_ScreenPoint.X; x++)
		{
			cout << m_ScreenPixel[y][x];
		}
		// cout << endl;
	}
}