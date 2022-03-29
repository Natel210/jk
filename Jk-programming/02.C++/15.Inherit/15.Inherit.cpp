// 15.Inherit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//상속
class MotderClass
{
public:

//////////////////////////////
public:		//자신O 자식O 외부O
protected:	//자신O 자식O 외부X
private:	//자신O 자식X 외부X
//3단계의 공개 수준이있다.
			//자신O 자식X 외부O
			//이런식으로는 불가능
			//위3가지만 가능
public:
	int Pub_M = 0;
	void Pub_F_M() {
		printf_s("부모의 public 함수\n");
	}
protected:
	int Pro_M = 1;
	void Pro_F_M() {
		printf_s("부모의 protected 함수\n");
	}
private:
	int Pri_M = 2;
	void Pri_F_M() {
		printf_s("부모의 private 함수\n");
	}
};



class PublicSon : public MotderClass
{
public:

	void Print()
	{
		printf_s("publicson의 영역\n");
		//printf_s("Pub_M %d\n", Pub_M);
		//printf_s("Pro_M %d\n", Pro_M);
		//printf_s("Pri_M %d\n", Pri_M);
		//private사용불가
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
	M_CL.Pub_M;//퍼블릭된것만가능
	printf_s("\n");

	P_S0.Pub_F_M();
	P_S0.Pub_M;
	P_S0.Print();//부모에게 상속받은것
	printf_s("\n");

	P_S1.Pub_F_M();
	P_S1.Pub_M;




    return 0;
}

