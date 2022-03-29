#include "stdafx.h"
#include "ConsoleBullet.h"
#include "ConsoleMonster.h"


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
		Death();
	}
}