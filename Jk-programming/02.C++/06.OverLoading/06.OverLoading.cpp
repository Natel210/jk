// 06.OverLoading.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

// 같은 이름의 함수라도 안에 인자의 "리턴값" "인자 수"를 확인해서 다르게 인식하는 것.
int Func()
{
	return 	printf_s("아무것도 임력안함\n");
}
int Func(short _a)
{
	return printf_s("short(%d)를 입력했네염?\n", _a);
}
int Func(int _a)
{
	return	printf_s("int(%d)를 입력했네염?\n", _a);
}
int Func(int _a, int _b)
{
	return	printf_s("int(%d)와int(%d)를 입력했네염?\n", _a, _b);
}

int main()
{
	short a = -1;
	int b = 2;
	int c = 3;
	int(*pf)() = Func;
	int(*pf_short)(short) = Func;
	int(*pf_int)(int) = Func;
	int(*pf_int_int)(int, int) = Func;
	std::cout << "none" << *pf << "   1short" << *pf_short << "   1int" << *pf_int << "   2int" << *pf_int_int << std::endl;
	//test 과연 함수가 선언될때마다 위치가 바뀔까?
	//코드영역에 있는 함수는 바뀌지않넹 ㅋㅋㅋㅋㅋ

	Func();
	std::cout << "none" << *pf << "   1short" << *pf_short << "   1int" << *pf_int << "   2int" << *pf_int_int << std::endl;
	Func(a);
	std::cout << "none" << *pf << "   1short" << *pf_short << "   1int" << *pf_int << "   2int" << *pf_int_int << std::endl;
	Func(b);
	std::cout << "none" << *pf << "   1short" << *pf_short << "   1int" << *pf_int << "   2int" << *pf_int_int << std::endl;
	Func(b, c);
	std::cout << "none" << *pf << "   1short" << *pf_short << "   1int" << *pf_int << "   2int" << *pf_int_int << std::endl;
    return 0;
	
}

