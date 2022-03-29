// 10.ConstMemberFunc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//함수에서의 const !!!!!!!!!!!!

//이는 이함수를 실행한다고해서
// 객체의 변화값을 줄수없다!

// 변수를 바꾸게 할수 없다!

int out_A;
int out_B;

class ConstMember
{
private:
	int a;
	int b;
	int c;
	int d;

public:
	ConstMember();
	~ConstMember();

public:
	int e;
	int f;
	int g;
	int h;

public:
	//함수에서의 const !!!!!!!!!!!!

	//이는 이함수를 실행한다고해서
	// 객체의 변화값을 줄수없다!

	// 변수를 바꾸게 할수 없다!

	int ConstMem() const
	{
		const ConstMember* const MyMem = this;
		//this->d = 100;
		//이안에서
		return d;
	}
	int UnConMem(int _d)
	{
		ConstMember* const Mymem = this;
		d = _d;
		return d;
		/*return (d = _d);*/
		//이걸해준거지
	}

	int ConstMem_Cg() const
	{
		//a = 10; //private
		//e = 10; //public
		//응안됨~
		// 이걸 선언해버리면 
		// 이함수 안에서는 변할수가없어염.ㅠㅠ
	}

	int ConstMem_PrCg(int _a) const
	{
		out_A = _a++;
		//응 파라미터에 넣은 값은 변할수 있내염?
		//결론 이걸쓰면 이class에서 사용하는 모든 인자의 값을 변하게 할수없다!
	}




private:

};

ConstMember::ConstMember()
{
}

ConstMember::~ConstMember()
{
}


//그럼 이걸 전역변수에다가 선언하면 어찌될까?
//void ConstFunc() const
//{
//
//}
//a type qualifier is not allowed on a nonmember function.
//형식 한정(const)는 멤버 함수가 아닐 경우 허용되지 않습니다.
// ->맴버에서만 쓸수 있다!

// 생각을 해봐요 그 클래스 -> 프로그램 전체
// 그기에 상수를 변경불가! -> 프로그램 전체의 맴버변수 변경불가 ->
// -> 어떠한 함수 어떠한 변수 사용불가 -> 프로그램 사용불가
//응 이건 내생각


int main()
{
    return 0;
}

