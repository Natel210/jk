// 22.ClassSize.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
class MyClass
{
public:

private:

};

//깡통 클래스!(아무조작안함)
//함수에는 크기가없다!

class MyClass_char
{
public:
public:
	char a;
private:

};

//char인자값1개도 1크기/////////

class MyClass_static_1
{
public:
public:
	static int a;
private:

};

//////////////////////////////

class MyClass_static_some
{
public:
public:
	static char a;
	static int b;
	static long long c;
private:

};


////////////////////////////////
class MC_son : public MyClass
{
public:

private:

};
//깡통에 상속

class MCSS_son : MyClass_static_some
{
public:

private:

};
//다수의 스태틱의 상속

class MC_son_2char : MyClass
{
public:
	char a;
	char b;
private:

};
//빈깡통에 2개의 char선언
class MCSS_son_2char : MyClass_static_some
{
public:
	char a;
	char b;
private:

};
// 다수의 스태틱에 2개의 char선언

//////////////////////////////////////////////////////////

class MotherClass
{
public:
	virtual void Punc(){
		printf_s("부모의 함수\n");
	}
private:

};
//부모클래스
class SonClass : public MotherClass
{
public:
	virtual void Punc() {
		printf_s("자식의 함수\n");
	}
	//이러면 오버라이딩이 될것이다.
private:

};
//자식클래스

class Son_SonClass : SonClass
{
public:
	void Punc() {
		printf_s("자식's 자식 함수\n");
	}

private:
	int a = 0; //딱이거만큼 증가!

};

int main()
{

	
	printf_s("%d\n", sizeof(MyClass));
	printf_s("%d\n", sizeof(MyClass_char));
	printf_s("%d\n", sizeof(MyClass_static_1));
	printf_s("%d\n", sizeof(MyClass_static_some));
	//class내에 아무런 인자값이 없다면?
	//char1개, 1개의 스태틱, 다중의 스태틱
	// 1이된다. 왜일까?
	printf_s("\n");
	printf_s("%d\n", sizeof(MC_son));
	printf_s("%d\n", sizeof(MCSS_son));
	//그의 자식들도 1이됨....
	printf_s("\n");
	printf_s("%d\n", sizeof(MC_son_2char));
	printf_s("%d\n", sizeof(MCSS_son_2char));
	//?????????????
	//3이될줄알었더니 2가됬네?
	printf_s("\n");
	printf_s("\n");
	Son_SonClass S_2nd;
	S_2nd.Punc();
	//
	printf_s("%d\n", sizeof(MotherClass));
	printf_s("%d\n", sizeof(SonClass));
	printf_s("%d\n", sizeof(Son_SonClass));
	//부모고 나발이고 Virtual시에 딱 int크기만큼 크기가 생긴다.

	// 함수 테이블이라는 것은 함수 주소값의 배열이다.
	// 그런데 배열을 통채로 들고 있을 필요가 있어?
	// 결국 맨 앞의 주소만 알고 있으면 된다.
	// 머리만 들고 있으면
	// 그주소의 크기는 4바이트

	// 여기서 사이에 더추가된다면 추가된만큼을 더해준다.

    return 0;
}

