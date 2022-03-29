#include "stdafx.h"
#include "PlayerMove.h"


PlayerMove::PlayerMove()
{
}


PlayerMove::~PlayerMove()
{
}

int Movecount = 0;
void PlayerMove::Move()
{
	Movecount += 1;
	cout << "Move Player" << Movecount << "th" << endl;
}