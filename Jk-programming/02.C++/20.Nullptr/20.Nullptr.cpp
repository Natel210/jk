// 20.Nullptr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//요약 : Nullptr은 0이 숫자인지, 거짓을 뜻하는지 알턱이없어..
//그래서 무라는 Nullptr을 만들음.


class MyClass
{
public:
	int Number;

public:
	// 내부에서 아무런 맴버변수도 사용하지 않았기 때문에 가능합니다.
	void Func() {
		printf_s("%d, 될까요?", Number);
	}

public:
	MyClass();
	~MyClass();

private:

};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}

#define NULL 0

void Func(int _Number) {
	// printf_s();
}

void Func(char* _Number) {

}

int main()
{
	// 0이라는 의미는 아무것도 가리키지 않는다.
	// 포인터에서는
	MyClass* pMyClass = 0;

	// c++ 11부터 만들어 졌습니다.
	// 형을 판단하는데 문제가 많았다는 것.
	MyClass* pMyClass2 = nullptr;

	// int Number = 10 + pMyClass;

	// 숫자 0과 

	// 0
	pMyClass->Func();



	return 0;
}
