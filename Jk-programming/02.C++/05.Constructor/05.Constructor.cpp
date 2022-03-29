// 05.Constructor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
class MyClass
{
public:
	MyClass();
	MyClass(int _a, int _b);
	~MyClass();
	int a;
	int b;

private:

};

MyClass::MyClass()
{
}
//이것과 같은 함수를 생성자(Constructor) 라고한다.
// 1. 리턴값이 없다. (당연하다 이 함수는 그 클래스의 객체(메모리 할당시 만들어지는)를 만들어내는 함수이다.)
// 1-1. 클래스 이름과 함수이름이 완전히 같아야 한다.
// 2. 객체 없이 사용할수가 있다.
MyClass::MyClass(int _a, int _b)
{
	a = _a;
	b = _b;
}

MyClass::~MyClass()
{
}

int main()
{
	// 생성자와 비슷한 문법이 존재한다.
	int Number = int(10);

	MyClass Me;
	MyClass Me1 = MyClass(10, 20);
	MyClass Me2 = { 30, 40 };	// 생성자를 만들어 줘야지 예전 c의 구조체를 초기화 하는 것 같은 문법이 가능해진다.
	printf_s("Me의%d, Me의%d\n", Me.a, Me.b);// 쓰래기 값.
	printf_s("Me1의%d, Me1의%d\n", Me1.a, Me1.b);// 내가 입력해주값.
	printf_s("Me2의%d, Me2의%d\n", Me2.a, Me2.b);// 내가 입력해주값.
    return 0;
}

