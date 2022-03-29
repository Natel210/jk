// 11.Destructor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
class MyClass
{
public:
	int a;
	/*MyClass();*/ // 디폴트(정해진) 생성자(Constructor) 함수
	// 어떤구성인지 보여줄거
	MyClass() 
	{
	}
	/*~MyClass();*/ // 디폴트(정해진) 소멸자(distructor) 
	//이건 이런구성
	~MyClass()
	{
	}

	//디폴트 복사 생성자 클래스 (const 클래스&)
	//MyClass (const MyClass& _a):a(a)
	//{}

	//디폴트 대입연산자 클래스& 클래스::operator=(const 클래스&)


	

};

int main()
{
	MyClass MC1;
	MC1.a = 1;
	MyClass MC2(MC1);// 이짓을 가능하게 해주는 것을  // 디폴트 복사 생성자

	MC2 = MC1;
	//? 가능하네?
	// 이것을 디폴트 대입연산자 클래스->다음시간에 오퍼레이터에서 배움
    return 0;
}

