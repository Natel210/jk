#pragma once
#include "bullet.h"
class player
{
private:
	short Map_ix;
	short Map_iy;
	short p_ix;
	short p_iy;

public:
	bullet Playerbullets[20];
	void command();
	void render();
	void p_map(short _x, short _y);
	void player::bulletmovent();



public:
	player(short _x, short _y);
	~player();
};
