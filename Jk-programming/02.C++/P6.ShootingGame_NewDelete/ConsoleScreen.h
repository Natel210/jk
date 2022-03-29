#pragma once
// 콘솔화면을 내 마음대로 크기를 바꿔주고
// 각픽셀에 어떤 글자가 있는지에 대한 정보를 항상 들고 있을 녀석입니다.

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
	// 왜 private이냐?
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

