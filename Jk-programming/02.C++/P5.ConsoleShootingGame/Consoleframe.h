#pragma once




class Consoleframe
{

private:

protected:
	IPOINT m_ScreenPoint;
	char** m_ScreenPixel;

	bool** ScreenPixel_bool;
public:
	void Init(IPOINT _Point); // 맵생성 (+New)
	void InitDelete(IPOINT _Point); // 종료시 (-New)

	void SetPixel(IPOS _Pos, char _Chr); //픽샐 정보 입력
	char GetPixel(IPOS _Pos);//픽샐 정보 가져오기

	void Consoleframe::Clear();//초기화 한번
	void Show(); //출력

	bool IsOverPos(IPOS _Pos);//한계 설정


public:
	Consoleframe();
	~Consoleframe();
};

