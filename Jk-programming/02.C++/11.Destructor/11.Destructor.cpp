// 11.Destructor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
class MyClass
{
public:
	int a;
	/*MyClass();*/ // ����Ʈ(������) ������(Constructor) �Լ�
	// ��������� �����ٰ�
	MyClass() 
	{
	}
	/*~MyClass();*/ // ����Ʈ(������) �Ҹ���(distructor) 
	//�̰� �̷�����
	~MyClass()
	{
	}

	//����Ʈ ���� ������ Ŭ���� (const Ŭ����&)
	//MyClass (const MyClass& _a):a(a)
	//{}

	//����Ʈ ���Կ����� Ŭ����& Ŭ����::operator=(const Ŭ����&)


	

};

int main()
{
	MyClass MC1;
	MC1.a = 1;
	MyClass MC2(MC1);// ������ �����ϰ� ���ִ� ����  // ����Ʈ ���� ������

	MC2 = MC1;
	//? �����ϳ�?
	// �̰��� ����Ʈ ���Կ����� Ŭ����->�����ð��� ���۷����Ϳ��� ���
    return 0;
}

