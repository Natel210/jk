// 01.NameSpace.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//ǥ�� ���
#include <iostream>
// C��â�⿡�� �ڵ差�� ���� �ʾҰ�
// ���������� �ᵵ ����� �������� ����

// But.�ڵ差�� 1�Ⱑ���Ǵ� ���α׷����� ¥�鼭
// ����!
// �׷��� C++ ��ü������ �߱��Ѵ�!


// �׸��� �ٸ� ���α׷����� #include �ؼ� ����Ϸ��� �ߴ���.
// ���� �����ѰͰ� �ٸ������ �����ѰͰ� �浹�ϳ�?
// �׷�? ���� �̸��̶� "��-���"�� "��-���"���� �ٸ�����.

// ���� "���"�̶� �����ϰ� �;~
// �׶� ���°��� namespace�� ������ �����Ѵ�.
// namespace�� ����Ʈ���� �����ص� �������.

namespace SpaceA
{
	int NumberA = 1;
	void FuncA()
	{
		printf_s("SpaceA�Ҽ� �Լ�\n");
	}
}

namespace SpaceB
{
	int NumberB = 0;
	void FuncB()
	{
		printf_s("SpaceB�Ҽ� �Լ� , B�� 0�̵˴ϴ�.\n");
	}
	namespace SpaceB_1
	{
		int NumberB = 1;
		void FuncB()
		{
			printf_s("SpaceB_1�Ҽ� �Լ� , B�� 1�̵˴ϴ�.\n");
		}
		namespace SpaceB_2
		{
			int NumberB = 2;
			void FuncB()
			{
				printf_s("SpaceB_1�Ҽ� �Լ� , B�� 2�̵˴ϴ�.\n");
			}
		}
	}
}
using namespace SpaceA;
//using namespace �̸� -> �̸��� ���� ���ӽ����̽��� �����ҷ�!

namespace SpaceB_all = SpaceB::SpaceB_1::SpaceB_2;
//����Ҽ��� �ִ�.

int main()
{
	SpaceA::FuncA();
	//	���� Func���ȴ�.
	printf_s("NumberA�� �� %d\n", SpaceA::NumberA);
	SpaceA::NumberA = 10; //���� ��ȭ�� �ٰž�
	printf_s("NumberA�� �� %d\n", SpaceA::NumberA);
	printf_s("NumberA�� �� %d\n", NumberA); //�׸��� SpaceA:: �����ϰپ�!

	printf_s("NumberB�� �� %d\n", SpaceB::NumberB); //B���ִ� �ѹ�B
	printf_s("NumberB�� �� %d\n", SpaceB::SpaceB_1::NumberB);// B_1���ִ� �ѹ�B
	printf_s("NumberB�� �� %d\n", SpaceB::SpaceB_1::SpaceB_2::NumberB);// B_2���ִ� �ѹ�B
	printf_s("NumberB�� �� %d\n", SpaceB_all::NumberB);// B_all���ִ� �ѹ�B -> B_2���ִ� �ѹ�B
	
	SpaceB::SpaceB_1::SpaceB_2::FuncB();
	SpaceB_all::FuncB();
	//�̰�Ȯ���ϸ� ���� ������ �ƴ��� Ȯ�ΰ���!	
	
	return 0;
}

