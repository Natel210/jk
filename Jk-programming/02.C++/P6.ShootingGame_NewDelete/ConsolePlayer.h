#pragma once
#include "ConsoleObject.h"

class CBullet;
class CConsolePlayer : public CConsoleObject
{
public:
	int Count;
	CBullet* m_ArrBullet;

	bool PlayerGameOver = false;


public:
	void SetBullet(CBullet* _ArrBullet)
	{
		m_ArrBullet = _ArrBullet;
	}

public:
	virtual void Update();

public:
	CConsolePlayer();
	~CConsolePlayer();
};
