// 08.Const.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void Func(int* _Number)
{
	(*_Number) = 100;
	//해당 주소의 값을 '100'으로 바꿔라.
}




int main()
{
	int Number1 = 1;
	int Number2 = 2;
	int Number3 = 3;
	int Number4 = 4; //포인터자체를 주소값변경시킬거야!

	// 가리키는 곳의 값을 바꾸지 마라.
	const int* pInt1 = &Number1; 

	// 주소를 바꾸지 마라.
	int* const  pInt2 = &Number2; 

	// 가리키는 곳도 바꾸지 말고 주소도 바꾸지 말라는 이야기.
	const int* const  pInt3 = &Number3; 


	//Func(pInt1); -> 값을 바꾸지말라니깐 값을 바꾸는 함수 안됨
	Func(pInt2);
	//Func(pInt3); -> 값/주소를 바꾸지말라니깐 값을 바꾸는 함수 안됨
	printf_s("Number2's : %d\n", Number2);

	printf_s("\n");
	printf_s("\n");
	printf_s("Number1's : %d\n", Number1);
	printf_s("Number1'주소 : %d\n", pInt1);
	//주소를 옴겨보자
	pInt1 = &Number4;
	//pInt2 = &Number4; -> 주소 변경안되~
	//pInt3 = &Number4; -> 값/주소 변경안되~
	printf_s("\n");
	printf_s("Number1's : %d\n", Number1);
	printf_s("Number1'주소 : %d\n", pInt1);
	//포인터만 바뀐것!



	
	return 0;
}

