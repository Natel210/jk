// 14.StructAndClass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// c++ Ŭ������ c����ü ���̴�
// c++ ����ü <-> c����ü  �� ����

// Struct�� ����Ʈ �������� �����ڰ� public:�̴�.
// ���� C���� C++�� �Ѿ�� ���α׷��ӵ��� ���� ����ϴ� ����
struct MyStruct
{
// public:
	// c++ ����ü
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
//Ŭ������ typedef����


int main()
{
	MS MyST;
	MC MyCL;
	MyST.Func(); 
	//����
	//MyCL.Func();
	//�Ұ���
    return 0;
}

