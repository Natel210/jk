// 03.ClassMenberVar.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
class My_Class
{
public:// �����Ұ���![�ڱ�Ŭ����(O),��ӹ޴� Ŭ����(O),�ܺ�(O)]
	My_Class();
	~My_Class();

private:// ���� �������! ���������� [�ڱ�Ŭ����(O),��ӹ޴� Ŭ����(X),�ܺ�(X)]

};

My_Class::My_Class()
{
}
//�̰ǹ���?

My_Class::~My_Class()
{
}
//�̰�? 

//Ŭ������ �ҷ������� �̷������� ��� 

/////////////////////////////������///////////////////////
enum MyEnum
{
	//�������� �����غ���
	A,
	B,
	C,
	D,
	E,
	F

	//enum������ �Լ� �ȵ�X
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
//int a, int b, void StructFunc()�� ��������

// Class�� Struct�� �������� Public / Private
// Class�� �⺻�� Private
// Struct�� �⺻�� Public
// ��.. �������� �ٵ�.		-.-;;

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
//int a, int b, void ClassFunc()�� ��������

int main()
{
	MyClass Myctrl; // ��ü ����
	// �̻����Ȱ���?  // ���ÿ� ���ȴ�.
    return 0;
}

