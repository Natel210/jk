// 01.NameSpace.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//표준 헤더
#include <iostream>
// C초창기에는 코드량이 많지 않았고
// 절차지항을 써도 사람이 뇌사하지 않음

// But.코드량이 1기가가되는 프로그램들을 짜면서
// 뇌사!
// 그래서 C++ 객체지향을 추구한다!


// 그리고 다른 프로그램에서 #include 해서 사용하려고 했더니.
// 내가 선언한것과 다른사람이 선언한것과 충돌하네?
// 그럼? 같은 이름이라도 "정-재균"과 "김-재균"과는 다르듯이.

// 같은 "재균"이라도 구별하고 싶어영~
// 그때 쓰는것이 namespace로 영역을 생성한다.
// namespace는 떨어트려서 선언해도 상관없다.

namespace SpaceA
{
	int NumberA = 1;
	void FuncA()
	{
		printf_s("SpaceA소속 함수\n");
	}
}

namespace SpaceB
{
	int NumberB = 0;
	void FuncB()
	{
		printf_s("SpaceB소속 함수 , B가 0이됩니다.\n");
	}
	namespace SpaceB_1
	{
		int NumberB = 1;
		void FuncB()
		{
			printf_s("SpaceB_1소속 함수 , B가 1이됩니다.\n");
		}
		namespace SpaceB_2
		{
			int NumberB = 2;
			void FuncB()
			{
				printf_s("SpaceB_1소속 함수 , B가 2이됩니다.\n");
			}
		}
	}
}
using namespace SpaceA;
//using namespace 이름 -> 이름에 대한 네임스페이스를 생략할래!

namespace SpaceB_all = SpaceB::SpaceB_1::SpaceB_2;
//축약할수도 있다.

int main()
{
	SpaceA::FuncA();
	//	물론 Func도된다.
	printf_s("NumberA의 값 %d\n", SpaceA::NumberA);
	SpaceA::NumberA = 10; //내가 변화를 줄거야
	printf_s("NumberA의 값 %d\n", SpaceA::NumberA);
	printf_s("NumberA의 값 %d\n", NumberA); //그리고난 SpaceA:: 생략하겟어!

	printf_s("NumberB의 값 %d\n", SpaceB::NumberB); //B에있는 넘버B
	printf_s("NumberB의 값 %d\n", SpaceB::SpaceB_1::NumberB);// B_1에있는 넘버B
	printf_s("NumberB의 값 %d\n", SpaceB::SpaceB_1::SpaceB_2::NumberB);// B_2에있는 넘버B
	printf_s("NumberB의 값 %d\n", SpaceB_all::NumberB);// B_all에있는 넘버B -> B_2에있는 넘버B
	
	SpaceB::SpaceB_1::SpaceB_2::FuncB();
	SpaceB_all::FuncB();
	//이걸확인하면 같은 곳인지 아닌지 확인가능!	
	
	return 0;
}

