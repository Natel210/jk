#include "stdafx.h"
#include "Consoleframe.h"


Consoleframe::Consoleframe()
{
}


Consoleframe::~Consoleframe()
{
}

void Consoleframe::Init(IPOINT _Point)
{
	m_ScreenPoint = _Point;
	if (0 >= m_ScreenPoint.X || 0 >= m_ScreenPoint.Y)
	{
		return;
	}

	char ScreenSizeText[256];
	sprintf_s(ScreenSizeText, "mode con:cols=%d lines=%d", _Point.X, _Point.Y + 1);
	system(ScreenSizeText);
	//사이즈 정하기

	m_ScreenPixel = new char*[_Point.Y];

	for (size_t i = 0; i < _Point.Y; i++)
	{
		m_ScreenPixel[i] = new char[_Point.X];
	}
	//
	ScreenPixel_bool = new bool*[_Point.Y];

	for (size_t i = 0; i < _Point.Y; i++)
	{
		ScreenPixel_bool[i] = new bool[_Point.X];
		for (size_t x = 0; x < _Point.X; x++)
		{
			ScreenPixel_bool[i][x] = false;
		}
	}
	//
	Clear();
	//초기화
}
//맵생성(+New)

void Consoleframe::InitDelete(IPOINT _Point)
{
	for (size_t i = 0; i < _Point.Y; i++)
	{
		delete[] m_ScreenPixel[i];
	}

	delete[] m_ScreenPixel;



	for (size_t i = 0; i < _Point.Y; i++)
	{
		delete[] ScreenPixel_bool[i];
	}
	delete[] ScreenPixel_bool;

}
//종료시(-New)





bool Consoleframe::IsOverPos(IPOS _Pos)
{
	return false;
}
// 원하지 않는 값이 되었을때 확인하기

void Consoleframe::SetPixel(IPOS _Pos, char _charNum)
{
	if (IsOverPos(_Pos))
	{
		return;
	}
	m_ScreenPixel[_Pos.Y][_Pos.X] = _charNum;
}
//set픽셀 기록해주기

char Consoleframe::GetPixel(IPOS _Pos)
{
	if (IsOverPos(_Pos))
	{
		return 0;
		//정수형임으로 값형이 필요하다.
	}
	return m_ScreenPixel[_Pos.Y][_Pos.X];
}
//픽샐 확인작업
//정확하게 들어갔느냐

void Consoleframe::Clear()
{
	for (size_t y = 0; y < m_ScreenPoint.Y; y++)
	{
		for (size_t x = 0; x < m_ScreenPoint.X; x++)
		{
			m_ScreenPixel[y][x] = ' ';
		}
	}
}


void Consoleframe::Show()
{
	for (size_t y = 0; y < m_ScreenPoint.Y; y++)
	{
		for (size_t x = 0; x < m_ScreenPoint.X; x++)
		{
			std::cout << m_ScreenPixel[y][x];
		}
		// cout << endl;
	}
}