// 08.Const.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void Func(int* _Number)
{
	(*_Number) = 100;
	//�ش� �ּ��� ���� '100'���� �ٲ��.
}




int main()
{
	int Number1 = 1;
	int Number2 = 2;
	int Number3 = 3;
	int Number4 = 4; //��������ü�� �ּҰ������ų�ž�!

	// ����Ű�� ���� ���� �ٲ��� ����.
	const int* pInt1 = &Number1; 

	// �ּҸ� �ٲ��� ����.
	int* const  pInt2 = &Number2; 

	// ����Ű�� ���� �ٲ��� ���� �ּҵ� �ٲ��� ����� �̾߱�.
	const int* const  pInt3 = &Number3; 


	//Func(pInt1); -> ���� �ٲ�������ϱ� ���� �ٲٴ� �Լ� �ȵ�
	Func(pInt2);
	//Func(pInt3); -> ��/�ּҸ� �ٲ�������ϱ� ���� �ٲٴ� �Լ� �ȵ�
	printf_s("Number2's : %d\n", Number2);

	printf_s("\n");
	printf_s("\n");
	printf_s("Number1's : %d\n", Number1);
	printf_s("Number1'�ּ� : %d\n", pInt1);
	//�ּҸ� �Ȱܺ���
	pInt1 = &Number4;
	//pInt2 = &Number4; -> �ּ� ����ȵ�~
	//pInt3 = &Number4; -> ��/�ּ� ����ȵ�~
	printf_s("\n");
	printf_s("Number1's : %d\n", Number1);
	printf_s("Number1'�ּ� : %d\n", pInt1);
	//�����͸� �ٲ��!



	
	return 0;
}

