#pragma once




class Consoleframe
{

private:

protected:
	IPOINT m_ScreenPoint;
	char** m_ScreenPixel;

	bool** ScreenPixel_bool;
public:
	void Init(IPOINT _Point); // �ʻ��� (+New)
	void InitDelete(IPOINT _Point); // ����� (-New)

	void SetPixel(IPOS _Pos, char _Chr); //�Ȼ� ���� �Է�
	char GetPixel(IPOS _Pos);//�Ȼ� ���� ��������

	void Consoleframe::Clear();//�ʱ�ȭ �ѹ�
	void Show(); //���

	bool IsOverPos(IPOS _Pos);//�Ѱ� ����


public:
	Consoleframe();
	~Consoleframe();
};

