#pragma once
class PuzzleSize
{
protected:
	const short M_x;
	const short M_y;

public:
	PuzzleSize(short _x, short _y);
	~PuzzleSize();
	void M_Limit(short _x, short _y);//�����̴� �Ѱ輱
	int PuzzleNumber;
};

