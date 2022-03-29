#pragma once
class PuzzleBasic
{
private:
	void PuzzleBasic::RandomLogic(int RandomSwap); // 랜덤에 따른 1234가지중 하나 일으키게 // 변경X
	int RandomCommand;//믹실할때 N번쨰 어디로(U,D,L,R)저장 // 변경 X

	int ChackPoint;//최종 확인 체크
protected:
	int PuzzleMap[5][5]; // 맵크기
	void PuzzleBasic::Puzzlemove(int _command); // 퍼즐 움직임
	void Printf(); // 프린트

public:
	PuzzleBasic();
	virtual ~PuzzleBasic() = 0;

	void FinishGame(); // 게임 종료선언
};

