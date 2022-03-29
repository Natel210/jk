#pragma once //C++에서의 헤더 중복방지 명령어

// 바로 클래스로 구현을 한다면
// 동일 이름의 cpp와 h가 생성된다.

// 헤더이름과 cpp의 이름은 서로 달라도 되지만.
// 같은 이름일 때만 ctrl+ k, o로 이동이된다.

class Bullet
{
public:
	Bullet();
	~Bullet();
public:
	static int Number;//Static Member, Class Member
	// 역활은 클래스 당 1개만생김
	// 즉 객체가 여러개 생겨도 스태틱 맴버는 그 객체가 전부다 클래스에 있는 1개만쓴다.
	int costNumber = 0;
	//스태틱 안쓰고함.
public:
	void Bullet::Fire();
};

