// 07.Refernce.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void Func(int* _Number)
{
	(*_Number) = 100;
	//해당 주소의 값을 '100'으로 바꿔라.
}

void FuncRef(int& _Number) 
{
	_Number = 200;
	//해당 주소의 값을 '200'으로 바꿔라.
}

int main()
{
	int Number = 0;
	printf_s("Number%d\n", Number);
	int& RNumber = Number; //레퍼런스(값 + 포인터)
	int* PNumber = &Number; //리턴값*(포인터) 이름 = &(주소값)파라미터
	printf_s("&RNumber %d\n", &RNumber);//주소값만
	printf_s("%d\n", RNumber);//값만
	printf_s("%d\n", PNumber);//주소값을 저기다 저장한걸 출력
	printf_s("\n");

	Func(PNumber);
	printf_s("%d\n", PNumber);//주소값을 저기다 저장한걸 출력
	printf_s("%d\n", Number);//주소값을 저기다 저장한걸 출력
	printf_s("%d\n", RNumber);//RNumber값은? 변했니?
	printf_s("\n");

	FuncRef(RNumber);
	printf_s("&RNumber %d\n", &RNumber);//주소값만
	printf_s("%d\n", RNumber);//값만
	printf_s("%d\n", Number);//Number값은 변했니?

	//이걸보면 포인터를 사용하지 않는 포인터!

	// 자신의 자료형의 변수를 메모리가 만들어질때 무조건 받아야 한다.
	// int& rNumber;
	// 레퍼런스는 한번 초기화시 다른 변수의 주소값을 받고
	// 그 주소값을 절대로 변경할수 없는 문법이다.


    return 0;
}

