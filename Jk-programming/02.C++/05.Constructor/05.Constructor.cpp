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
//�̰Ͱ� ���� �Լ��� ������(Constructor) ����Ѵ�.
// 1. ���ϰ��� ����. (�翬�ϴ� �� �Լ��� �� Ŭ������ ��ü(�޸� �Ҵ�� ���������)�� ������ �Լ��̴�.)
// 1-1. Ŭ���� �̸��� �Լ��̸��� ������ ���ƾ� �Ѵ�.
// 2. ��ü ���� ����Ҽ��� �ִ�.
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
	// �����ڿ� ����� ������ �����Ѵ�.
	int Number = int(10);

	MyClass Me;
	MyClass Me1 = MyClass(10, 20);
	MyClass Me2 = { 30, 40 };	// �����ڸ� ����� ����� ���� c�� ����ü�� �ʱ�ȭ �ϴ� �� ���� ������ ����������.
	printf_s("Me��%d, Me��%d\n", Me.a, Me.b);// ������ ��.
	printf_s("Me1��%d, Me1��%d\n", Me1.a, Me1.b);// ���� �Է����ְ�.
	printf_s("Me2��%d, Me2��%d\n", Me2.a, Me2.b);// ���� �Է����ְ�.
    return 0;
}

