// 06.OverLoading.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

// ���� �̸��� �Լ��� �ȿ� ������ "���ϰ�" "���� ��"�� Ȯ���ؼ� �ٸ��� �ν��ϴ� ��.
int Func()
{
	return 	printf_s("�ƹ��͵� �ӷ¾���\n");
}
int Func(short _a)
{
	return printf_s("short(%d)�� �Է��߳׿�?\n", _a);
}
int Func(int _a)
{
	return	printf_s("int(%d)�� �Է��߳׿�?\n", _a);
}
int Func(int _a, int _b)
{
	return	printf_s("int(%d)��int(%d)�� �Է��߳׿�?\n", _a, _b);
}

int main()
{
	short a = -1;
	int b = 2;
	int c = 3;
	int(*pf)() = Func;
	int(*pf_short)(short) = Func;
	int(*pf_int)(int) = Func;
	int(*pf_int_int)(int, int) = Func;
	std::cout << "none" << *pf << "   1short" << *pf_short << "   1int" << *pf_int << "   2int" << *pf_int_int << std::endl;
	//test ���� �Լ��� ����ɶ����� ��ġ�� �ٲ��?
	//�ڵ念���� �ִ� �Լ��� �ٲ����ʳ� ����������

	Func();
	std::cout << "none" << *pf << "   1short" << *pf_short << "   1int" << *pf_int << "   2int" << *pf_int_int << std::endl;
	Func(a);
	std::cout << "none" << *pf << "   1short" << *pf_short << "   1int" << *pf_int << "   2int" << *pf_int_int << std::endl;
	Func(b);
	std::cout << "none" << *pf << "   1short" << *pf_short << "   1int" << *pf_int << "   2int" << *pf_int_int << std::endl;
	Func(b, c);
	std::cout << "none" << *pf << "   1short" << *pf_short << "   1int" << *pf_int << "   2int" << *pf_int_int << std::endl;
    return 0;
	
}

