#pragma once
class bullet
{
public:
	short b_ix;
	short b_iy;
	short Mapb_ix;
	short Mapb_iy;
	bool bulletcost = false;

	void bulletMove(short p_ix, short p_iy);//총알의 움직임
	void bullet::bulletUnfire(short p_ix, short p_iy);//평상시의 움직임
	void Map(short _x, short _y);//총알의 맵제한



	bullet();
	bullet::bullet(short _x, short _y);
	~bullet();
private:
	short Pixp_ix;
	short Pixp_iy;
	void bullet::Limit(short p_ix, short p_iy);//맵에 따른 총알의 제한.
											   //제한이된다면 플래이어 위치에 오게 한다.///수정불가하게
	void bulletRander();//총알의 모션// 수정불가하게
};

