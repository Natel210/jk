#include "stdafx.h"
#include "PuzzleSize.h"

PuzzleSize::PuzzleSize(short _x, short _y) : M_x(_x), M_y(_y)
{

}

PuzzleSize::~PuzzleSize()
{
}




void PuzzleSize::M_Limit(short _x, short _y)
{
	if (-1 > _x)
	{
		++_x;
	}
	else if (M_x < _x)
	{
		--_x;
	}
	else{}

	if (-1 > _y)
	{
		++_y;
	}
	else if (M_y < _y)
	{
		--_y;
	}
	else{}



}
//조작 가능한 맵 한계선