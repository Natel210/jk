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
		cout << "�θ� ������" << endl;
	}

	~Parent()
	{
		cout << "�θ� �Ҹ���" << endl;
	}
};

class Child : public Parent
{
public:
	int Number;													//�ڽİ� �θ� ���� Number�� ������ ��� �Ǻ��ұ�?

public:
	Child() : Number(200)
	{
		//cout << &Parent::Number << endl;
		int * p = &Number;										//�̳ѹ��� �θ��� ���ϱ�? �ڽ��ǰ��ϱ�?
		cout << (int)p << endl;
		cout << (int)&(Child::Number) << "�ڽ� ������" << endl;  //�ڽ��� ������ �����ش�.
	}
	//��? �ڽİɷ� �ٷεǳ�
	//�׷� �հ� ������������̴�.
	// Virtual���� �����̴�.
	~Child()
	{
		Parent::Number = 100;
		cout << "�ڽ� �Ҹ���" << endl;
	}
};


int main()
{
	// Parent NewParent = Parent();
	Child NewParent = Child();

	return 0;
}