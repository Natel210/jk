#include "stdafx.h"
#include "Bullet_Speed.h"
#include "ConsoleMonster_Speed.h"


CBullet::CBullet()
{
	SetRenderChr('I');
}


CBullet::~CBullet()
{
}

void CBullet::Update() 
{
	m_Pos += IPOINT::IPUP;

	CConsoleMonster* pMonster = CConsoleMonster::GetMonster(m_Pos);

	if (nullptr != pMonster)
	{
		pMonster->Death();
		pMonster->MonsterCount -= 1;
		Death();
	}
}