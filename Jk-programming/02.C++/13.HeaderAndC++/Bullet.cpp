#include "stdafx.h"
#include "Bullet.h"


Bullet::Bullet()
{
}


Bullet::~Bullet()
{
}
int Bullet::Number = 0;

void Bullet::Fire() {
	costNumber += 1;
	cout << "shoot!"<< costNumber << "~~~~ing" << endl;
}