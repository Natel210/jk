// 20.Nullptr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//��� : Nullptr�� 0�� ��������, ������ ���ϴ��� �����̾���..
//�׷��� ����� Nullptr�� ������.


class MyClass
{
public:
	int Number;

public:
	// ���ο��� �ƹ��� �ɹ������� ������� �ʾұ� ������ �����մϴ�.
	void Func() {
		printf_s("%d, �ɱ��?", Number);
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
	// 0�̶�� �ǹ̴� �ƹ��͵� ����Ű�� �ʴ´�.
	// �����Ϳ�����
	MyClass* pMyClass = 0;

	// c++ 11���� ����� �����ϴ�.
	// ���� �Ǵ��ϴµ� ������ ���Ҵٴ� ��.
	MyClass* pMyClass2 = nullptr;

	// int Number = 10 + pMyClass;

	// ���� 0�� 

	// 0
	pMyClass->Func();



	return 0;
}
