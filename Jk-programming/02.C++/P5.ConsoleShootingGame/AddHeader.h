#pragma once
struct IPOINT
{
public:
	static IPOINT IPLEFT;
	static IPOINT IPRIGHT;
	static IPOINT IPDOWN;
	static IPOINT IPUP;

	int X; //X��
	int Y; //Y��



	int HX() {
		return (int)(X * 0.5f);
	}
	// X����

	int HY() {
		return (int)(Y * 0.5f);
	}
	// Y����

	bool operator == (const IPOINT& _Ohter) const
	{
		return X == _Ohter.X && Y == _Ohter.Y;
	}
	// �������� XY���� �Է����ִ� XY�� ������..
	// �����ϳ��� �ٸ��ٸ�0

	IPOINT& operator = (const IPOINT& _Ohter)
	{
		X = _Ohter.X;
		Y = _Ohter.Y;

		return *this;
	}
	//XY������

	IPOINT& operator += (const IPOINT& _Ohter)
	{
		X += _Ohter.X;
		Y += _Ohter.Y;

		return *this;
	}
	//XY+1����

};

typedef IPOINT IPOS;
typedef IPOINT ISIZE;