#pragma once
class PuzzleBasic
{
private:
	void PuzzleBasic::RandomLogic(int RandomSwap); // ������ ���� 1234������ �ϳ� ����Ű�� // ����X
	int RandomCommand;//�ͽ��Ҷ� N���� ����(U,D,L,R)���� // ���� X

	int ChackPoint;//���� Ȯ�� üũ
protected:
	int PuzzleMap[5][5]; // ��ũ��
	void PuzzleBasic::Puzzlemove(int _command); // ���� ������
	void Printf(); // ����Ʈ

public:
	PuzzleBasic();
	virtual ~PuzzleBasic() = 0;

	void FinishGame(); // ���� ���ἱ��
};

