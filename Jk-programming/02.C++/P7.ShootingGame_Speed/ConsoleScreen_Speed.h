#pragma once
// �ܼ�ȭ���� �� ������� ũ�⸦ �ٲ��ְ�
// ���ȼ��� � ���ڰ� �ִ����� ���� ������ �׻� ��� ���� �༮�Դϴ�.

struct IPOINT
{
public:
	static IPOINT IPLEFT;
	static IPOINT IPRIGHT;
	static IPOINT IPDOWN;
	static IPOINT IPUP;
	static IPOINT IPZERO;

	int X;
	int Y;

	int HX() {
		return (short)(X * 0.5f);
	}

	int HY() {
		return (short)(Y * 0.5f);
	}

	bool operator == (const IPOINT& _Ohter) const
	{
		return X == _Ohter.X && Y == _Ohter.Y;
	}


	IPOINT& operator = (const IPOINT& _Ohter)
	{
		X = _Ohter.X;
		Y = _Ohter.Y;

		return *this;
	}

	IPOINT& operator += (const IPOINT& _Ohter)
	{
		X += _Ohter.X;
		Y += _Ohter.Y;

		return *this;
	}


	IPOINT& operator *= (const int _Value)
	{
		// 0, 1 * -1
		X *= _Value;
		Y *= _Value;

		return *this;
	}
};

typedef IPOINT IPOS;
typedef IPOINT ISIZE;

class CConsoleScreen
{
	// �� private�̳�?
private:
	IPOINT m_ScreenPoint;
	char** m_ScreenPixel;

	char m_ClearChar;

public:
	ISIZE GetScreenSize() {
		return m_ScreenPoint;
	}

public:
	void Init(IPOINT _Point);
	void InitDelete();


	void SetPixel(IPOS _Pos, char _Chr);
	char GetPixel(IPOS _Pos);
	void Clear();

	void Show();

	bool IsOverPos(IPOS _Pos);

public:
	CConsoleScreen();
	~CConsoleScreen();
};

