// 04.ClassMemberFunc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
// 함수 호출규약은 Calling Convertion에 설명되어있음.

class MyClass
{
private:
	int a = 0;
	int b;
	int c;
	int d;

public:
	void change_A(int _a)
	{
		this->a = _a;
		//여기선 this란?
		// this라는 것은 객체가 생성됬다면
		// 내자신의 포인터
		// 그리니깐 포인터 문법으로 ->들어가는것!
	}
	void print_A(/*여기에는 뭐가있을까? -> */ /*객체이름* this*/)
	{
		//this = &(주소값)객체이름
		//this call의 개념
		printf_s("%d\n", this->a);
	}
	void Address()
	{
		// MyClass* 객체이름 = this;
		printf_s("%d\n", this);
	}
public:
	MyClass();
	~MyClass();


};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}


int main()
{
	MyClass Me;//Me라는 이름의 객체 생성
	Me.Address();//내가 Me의 a 값을 변경 전에 Address
	Me.print_A();// 내가 Me의 a 값을 변경 전에 A의 값 => 0
	///////////////////////////////////////////////////////
	Me.change_A(1);//A를 바꿀래 1로
	Me.Address();//내가 Me의 a 값을 변경 후에 Address
	Me.print_A();// 내가 Me의 a 값을 변경 후에 A의 값 => 1


	//자 Address값은 동일하고
	// A만 바뀜
	// 근대 A는 프라이빗?
	// 근대 클래스내에 '퍼블릭 함수'로 변경했으니 Me의 A만 바뀌고 새로운 것에 대해서는 저 함수를 쓰기전 초기값으로 나옴
	MyClass Me1;//Me1라는 이름의 객체 생성
	Me1.Address();//내가 Me1의 a 값을 변경 전에 Address									=> Me와 Me1의 주소값이 달라요 => 다른놈
	Me1.print_A();// 내가 Me1의 a 값을 변경 전에 A의 값 => 0														=>초기값으로 됨

    return 0;
}

