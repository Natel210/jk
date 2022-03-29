// 23.FuncPointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void Func() {
	printf_s("void Func() {\n");
}

void Func(int Number) {
	printf_s("void Func(int Number) {\n");
}

void OtherFunc() {
	printf_s("void OtherFunc() {\n");
}

int main()
{
	int* pNumber;
	// pNumber = 100;

	// pFunc이 이름이다.
	void(*pFunc)();

	pFunc = Func;
	// pFunc = OtherFunc;

	pFunc();

	void(*pOverFunc)(int);

	pOverFunc = Func;

	printf_s("%p\n", pFunc);
	printf_s("%p\n", pOverFunc);

	return 0;
}
