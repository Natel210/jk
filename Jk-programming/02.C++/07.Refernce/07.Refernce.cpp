// 07.Refernce.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void Func(int* _Number)
{
	(*_Number) = 100;
	//�ش� �ּ��� ���� '100'���� �ٲ��.
}

void FuncRef(int& _Number) 
{
	_Number = 200;
	//�ش� �ּ��� ���� '200'���� �ٲ��.
}

int main()
{
	int Number = 0;
	printf_s("Number%d\n", Number);
	int& RNumber = Number; //���۷���(�� + ������)
	int* PNumber = &Number; //���ϰ�*(������) �̸� = &(�ּҰ�)�Ķ����
	printf_s("&RNumber %d\n", &RNumber);//�ּҰ���
	printf_s("%d\n", RNumber);//����
	printf_s("%d\n", PNumber);//�ּҰ��� ����� �����Ѱ� ���
	printf_s("\n");

	Func(PNumber);
	printf_s("%d\n", PNumber);//�ּҰ��� ����� �����Ѱ� ���
	printf_s("%d\n", Number);//�ּҰ��� ����� �����Ѱ� ���
	printf_s("%d\n", RNumber);//RNumber����? ���ߴ�?
	printf_s("\n");

	FuncRef(RNumber);
	printf_s("&RNumber %d\n", &RNumber);//�ּҰ���
	printf_s("%d\n", RNumber);//����
	printf_s("%d\n", Number);//Number���� ���ߴ�?

	//�̰ɺ��� �����͸� ������� �ʴ� ������!

	// �ڽ��� �ڷ����� ������ �޸𸮰� ��������� ������ �޾ƾ� �Ѵ�.
	// int& rNumber;
	// ���۷����� �ѹ� �ʱ�ȭ�� �ٸ� ������ �ּҰ��� �ް�
	// �� �ּҰ��� ����� �����Ҽ� ���� �����̴�.


    return 0;
}

