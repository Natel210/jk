// 15.Inherit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//���
class MotderClass
{
public:

//////////////////////////////
public:		//�ڽ�O �ڽ�O �ܺ�O
protected:	//�ڽ�O �ڽ�O �ܺ�X
private:	//�ڽ�O �ڽ�X �ܺ�X
//3�ܰ��� ���� �������ִ�.
			//�ڽ�O �ڽ�X �ܺ�O
			//�̷������δ� �Ұ���
			//��3������ ����
public:
	int Pub_M = 0;
	void Pub_F_M() {
		printf_s("�θ��� public �Լ�\n");
	}
protected:
	int Pro_M = 1;
	void Pro_F_M() {
		printf_s("�θ��� protected �Լ�\n");
	}
private:
	int Pri_M = 2;
	void Pri_F_M() {
		printf_s("�θ��� private �Լ�\n");
	}
};



class PublicSon : public MotderClass
{
public:

	void Print()
	{
		printf_s("publicson�� ����\n");
		//printf_s("Pub_M %d\n", Pub_M);
		//printf_s("Pro_M %d\n", Pro_M);
		//printf_s("Pri_M %d\n", Pri_M);
		//private���Ұ�
	}

private:

};

class PublicSon_1 : public MotderClass{};


int main()
{
	MotderClass M_CL = MotderClass();
	PublicSon P_S0 = PublicSon();
	PublicSon_1 P_S1 = PublicSon_1();

	M_CL.Pub_F_M();
	M_CL.Pub_M;//�ۺ��Ȱ͸�����
	printf_s("\n");

	P_S0.Pub_F_M();
	P_S0.Pub_M;
	P_S0.Print();//�θ𿡰� ��ӹ�����
	printf_s("\n");

	P_S1.Pub_F_M();
	P_S1.Pub_M;




    return 0;
}

