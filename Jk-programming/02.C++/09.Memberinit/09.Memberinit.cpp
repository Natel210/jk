// 09.Memberinit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class Test
{
public:
	Test() {};
	//Test();//디폴트 생성자 -> 
	//~Test();// 디폴트 소멸자 ->
	//이 두가지는 무조건 자동으로 만들어 집니다.
public:
/*	const */int Number;
//(1)내가 const int했을때는 이니셜 라이저로 정해줘야한다.
public:
	Test(const Test& _Other) : Number(_Other.Number)
	// 생성: Number(_Other.Number)
	// 맴버 이니셜 라이저 
	{
		//생성과 동시에 이니셜 라이저의 값을 넣어준다!
		//초기화라고 할 수 있다.
	};



private:

};


class Test_1
{
public:

	Test_1() {};

	//const int Number;
	//이거안됨!
	int Number;
	Test_1(const Test_1& _Other)
	{
		Number = _Other.Number;
		//가 생략되어있다?
		//no!
		//이건 초기대입이라고 볼수 있다.
	};


private:

};



int main()
{
	Test MTest1 = Test();
	Test_1 MTest2 = Test_1();
	MTest1.Number = 300;
	//(1)(const int일경우) 상수가 콘스트임으로 초기값은 유지된다..
	//따라서 애러로 뜬다.
	MTest2.Number = 200;

	Test MMTest1 = Test(MTest1);
	Test_1 MMTest2 = Test_1(MTest2);
    return 0;
}

//const는 상수임으로 추가 대입자체가 불가능하고
//레퍼런스 변수는 원본이 없으면 대입이불가능하다.

//이걸 한방에 해결하는것이 이니셜라이징
//!!!!!!!

