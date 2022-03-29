#pragma once
#include "ConsoleScreen.h"

class CConsoleObject
{
protected:
	bool m_bDeath;

	CConsoleScreen* m_pScreen;

	char m_RenderChr;
	IPOS m_Pos;

public:
	bool IsDeath() {
		return m_bDeath;
	}

	void Death() {
		m_bDeath = true;
	}

	void Live() {
		m_bDeath = false;
	}

	void SetPos(IPOS _Pos) {
		m_Pos = _Pos;
	}


	void SetScreen(CConsoleScreen* _pScreen) {
		m_pScreen = _pScreen;
	}

	void SetRenderChr(char _RenderChr) {
		m_RenderChr = _RenderChr;
	}

public:
	virtual void Update() = 0;
	virtual void Render();

public:
	CConsoleObject();
	virtual ~CConsoleObject() = 0;
};

