// 14.StructAndClass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// c++ 클래스와 c구조체 차이는
// c++ 구조체 <-> c구조체  의 차이

// Struct는 디폴트 접근제한 지정자가 public:이다.
// 옛날 C에서 C++로 넘어온 프로그래머들이 많이 사용하는 문법
struct MyStruct
{
// public:
	// c++ 구조체
	void Func() {
		printf_s("Struct's default public\n");
		printf_s("Struct and Class  DF's just 1 !\n");
	}

};

typedef struct MyStruct MS;



class MyClass
{
	void Func() {
		printf_s("Class's default private\n");
		printf_s("Struct and Class  DF's just 1 !\n");
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

typedef class MyClass MC;
//클래스도 typedef가능


int main()
{
	MS MyST;
	MC MyCL;
	MyST.Func(); 
	//가능
	//MyCL.Func();
	//불가능
    return 0;
}

