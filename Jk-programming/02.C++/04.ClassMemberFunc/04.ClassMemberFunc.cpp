// 04.ClassMemberFunc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
// �Լ� ȣ��Ծ��� Calling Convertion�� ����Ǿ�����.

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
		//���⼱ this��?
		// this��� ���� ��ü�� ������ٸ�
		// ���ڽ��� ������
		// �׸��ϱ� ������ �������� ->���°�!
	}
	void print_A(/*���⿡�� ����������? -> */ /*��ü�̸�* this*/)
	{
		//this = &(�ּҰ�)��ü�̸�
		//this call�� ����
		printf_s("%d\n", this->a);
	}
	void Address()
	{
		// MyClass* ��ü�̸� = this;
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
	MyClass Me;//Me��� �̸��� ��ü ����
	Me.Address();//���� Me�� a ���� ���� ���� Address
	Me.print_A();// ���� Me�� a ���� ���� ���� A�� �� => 0
	///////////////////////////////////////////////////////
	Me.change_A(1);//A�� �ٲܷ� 1��
	Me.Address();//���� Me�� a ���� ���� �Ŀ� Address
	Me.print_A();// ���� Me�� a ���� ���� �Ŀ� A�� �� => 1


	//�� Address���� �����ϰ�
	// A�� �ٲ�
	// �ٴ� A�� �����̺�?
	// �ٴ� Ŭ�������� '�ۺ� �Լ�'�� ���������� Me�� A�� �ٲ�� ���ο� �Ϳ� ���ؼ��� �� �Լ��� ������ �ʱⰪ���� ����
	MyClass Me1;//Me1��� �̸��� ��ü ����
	Me1.Address();//���� Me1�� a ���� ���� ���� Address									=> Me�� Me1�� �ּҰ��� �޶�� => �ٸ���
	Me1.print_A();// ���� Me1�� a ���� ���� ���� A�� �� => 0														=>�ʱⰪ���� ��

    return 0;
}

