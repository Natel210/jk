// 03.ClassMenberVar.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
class My_Class
{
public:// 공개할거임![자기클래스(O),상속받는 클래스(O),외부(O)]
	My_Class();
	~My_Class();

private:// 완전 비공개임! 나만쓸거임 [자기클래스(O),상속받는 클래스(X),외부(X)]

};

My_Class::My_Class()
{
}
//이건뭘까?

My_Class::~My_Class()
{
}
//이건? 

//클래스를 불러왓을때 이런식으로 뜬다 

/////////////////////////////차이점///////////////////////
enum MyEnum
{
	//학점으로 생각해보자
	A,
	B,
	C,
	D,
	E,
	F

	//enum에서는 함수 안됨X
//	void EnumFunc()
//{
//
//}

};

struct MyStruct
{
	int a;
	int b;
	void StructFunc()
	{

	}
};
//int a, int b, void StructFunc()는 직접쓴거

// Class와 Struct의 차이점을 Public / Private
// Class는 기본이 Private
// Struct는 기본이 Public
// 끝.. 나머지는 다됨.		-.-;;

class MyClass
{
	int a;
	int b;
	void ClassFunc()
	{

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
//int a, int b, void ClassFunc()는 직접쓴거

int main()
{
	MyClass Myctrl; // 객체 생성
	// 이생성된것은?  // 스택에 사용된다.
    return 0;
}

