#pragma once
class bullet
{
public:
	short b_ix;
	short b_iy;
	bool bulletcost = false;

	void Map(short _x, short _y);//총알의 맵제한
								 //맵에 따른 총알의 제한.
								 //제한이된다면 플래이어 위치에 오게 한다.///수정불가하게

	bullet();
	~bullet();
private:
	short Mapb_ix;
	short Mapb_iy;

};

