#pragma once
struct IPOINT
{
public:
	static IPOINT IPLEFT;
	static IPOINT IPRIGHT;
	static IPOINT IPDOWN;
	static IPOINT IPUP;

	int X; //X값
	int Y; //Y값



	int HX() {
		return (int)(X * 0.5f);
	}
	// X절반

	int HY() {
		return (int)(Y * 0.5f);
	}
	// Y절반

	bool operator == (const IPOINT& _Ohter) const
	{
		return X == _Ohter.X && Y == _Ohter.Y;
	}
	// 내가가진 XY값과 입력해주는 XY가 같은지..
	// 둘중하나라도 다르다면0

	IPOINT& operator = (const IPOINT& _Ohter)
	{
		X = _Ohter.X;
		Y = _Ohter.Y;

		return *this;
	}
	//XY값대입

	IPOINT& operator += (const IPOINT& _Ohter)
	{
		X += _Ohter.X;
		Y += _Ohter.Y;

		return *this;
	}
	//XY+1대입

};

typedef IPOINT IPOS;
typedef IPOINT ISIZE;