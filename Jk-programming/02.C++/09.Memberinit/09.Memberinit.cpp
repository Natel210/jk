// 09.Memberinit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class Test
{
public:
	Test() {};
	//Test();//����Ʈ ������ -> 
	//~Test();// ����Ʈ �Ҹ��� ->
	//�� �ΰ����� ������ �ڵ����� ����� ���ϴ�.
public:
/*	const */int Number;
//(1)���� const int�������� �̴ϼ� �������� ��������Ѵ�.
public:
	Test(const Test& _Other) : Number(_Other.Number)
	// ����: Number(_Other.Number)
	// �ɹ� �̴ϼ� ������ 
	{
		//������ ���ÿ� �̴ϼ� �������� ���� �־��ش�!
		//�ʱ�ȭ��� �� �� �ִ�.
	};



private:

};


class Test_1
{
public:

	Test_1() {};

	//const int Number;
	//�̰žȵ�!
	int Number;
	Test_1(const Test_1& _Other)
	{
		Number = _Other.Number;
		//�� �����Ǿ��ִ�?
		//no!
		//�̰� �ʱ�����̶�� ���� �ִ�.
	};


private:

};



int main()
{
	Test MTest1 = Test();
	Test_1 MTest2 = Test_1();
	MTest1.Number = 300;
	//(1)(const int�ϰ��) ����� �ܽ�Ʈ������ �ʱⰪ�� �����ȴ�..
	//���� �ַ��� ���.
	MTest2.Number = 200;

	Test MMTest1 = Test(MTest1);
	Test_1 MMTest2 = Test_1(MTest2);
    return 0;
}

//const�� ��������� �߰� ������ü�� �Ұ����ϰ�
//���۷��� ������ ������ ������ �����̺Ұ����ϴ�.

//�̰� �ѹ濡 �ذ��ϴ°��� �̴ϼȶ���¡
//!!!!!!!

