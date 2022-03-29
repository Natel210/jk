#pragma once
#include "ConsoleObject.h"
class CBullet : public CConsoleObject
{
public:
	virtual void Update();

public:
	CBullet();
	~CBullet();
};

