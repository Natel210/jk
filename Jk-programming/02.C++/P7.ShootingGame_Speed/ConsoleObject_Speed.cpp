#include "stdafx.h"
#include "ConsoleObject_Speed.h"



CConsoleObject::CConsoleObject() : m_Pos(IPOS::IPZERO), m_pScreen(nullptr), m_bDeath(false)
{
}


CConsoleObject::~CConsoleObject()
{
}

void CConsoleObject::Render() {
	if (nullptr != m_pScreen)
	{
		m_pScreen->SetPixel(m_Pos, m_RenderChr);
	}
}

