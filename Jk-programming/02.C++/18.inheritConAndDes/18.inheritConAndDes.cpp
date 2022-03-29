// 18.inheritConAndDes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Parent
{
public:
	int Number;

public:
	Parent() : Number(10)
	{
		int * p = &Number;
		cout << (int)p << endl;
		cout << "부모 생성자" << endl;
	}

	~Parent()
	{
		cout << "부모 소멸자" << endl;
	}
};

class Child : public Parent
{
public:
	int Number;													//자식과 부모가 같은 Number가 있을떄 어떻게 판별할까?

public:
	Child() : Number(200)
	{
		//cout << &Parent::Number << endl;
		int * p = &Number;										//이넘버가 부모의 것일까? 자식의것일까?
		cout << (int)p << endl;
		cout << (int)&(Child::Number) << "자식 생성자" << endl;  //자식의 것으로 보내준다.
	}
	//어? 자식걸로 바로되네
	//그럼 먼가 만들어졌을것이다.
	// Virtual에서 배울것이다.
	~Child()
	{
		Parent::Number = 100;
		cout << "자식 소멸자" << endl;
	}
};


int main()
{
	// Parent NewParent = Parent();
	Child NewParent = Child();

	return 0;
}