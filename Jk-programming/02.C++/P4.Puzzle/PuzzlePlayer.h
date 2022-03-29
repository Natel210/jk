#pragma once
#include "PuzzleBasic.h"
class PuzzlePlayer : public PuzzleBasic
{
public:
	PuzzlePlayer();
	~PuzzlePlayer();

	void MovingPlayer();

	void AutoSave(PuzzlePlayer* _Player);
	void AutoLoad(PuzzlePlayer* _Player);
	void StartPrint();
};

