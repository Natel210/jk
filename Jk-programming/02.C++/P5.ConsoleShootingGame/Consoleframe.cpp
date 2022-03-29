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
	//������ ���ϱ�

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
	//�ʱ�ȭ
}
//�ʻ���(+New)

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
//�����(-New)





bool Consoleframe::IsOverPos(IPOS _Pos)
{
	return false;
}
// ������ �ʴ� ���� �Ǿ����� Ȯ���ϱ�

void Consoleframe::SetPixel(IPOS _Pos, char _charNum)
{
	if (IsOverPos(_Pos))
	{
		return;
	}
	m_ScreenPixel[_Pos.Y][_Pos.X] = _charNum;
}
//set�ȼ� ������ֱ�

char Consoleframe::GetPixel(IPOS _Pos)
{
	if (IsOverPos(_Pos))
	{
		return 0;
		//������������ ������ �ʿ��ϴ�.
	}
	return m_ScreenPixel[_Pos.Y][_Pos.X];
}
//�Ȼ� Ȯ���۾�
//��Ȯ�ϰ� ������

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