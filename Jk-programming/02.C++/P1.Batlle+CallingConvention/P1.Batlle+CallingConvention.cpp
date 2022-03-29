// P1.Batlle+CallingConvention.cpp : Defines the entry point for the console application.
//

//PP1.1->class를 이용하여 캐릭터 전투 구현하기!! 

#include "stdafx.h"
#include <conio.h>
typedef class UnitBasic
{
private:
	//char Name[3000];
	//쓰고싶었는데 인식 불가래염!
	//그래서 안씀
	int Str;
	int Int;
	int Dex;
	int Con;
	//이거는 불변의 법칙이다!
	//수정하면 죽어!

public:
	//int _Str;
	//int _Int;
	//int _Dex;
	//int _Con;
	//int _Att;
	//int _Hp;
	int __Str;
	int __Int;
	int __Dex;
	int __Con;
	int __Att;
	int __Hp;
	//난이걸 수정가능하다고 생각해!

	UnitBasic(int _Str, int _Int, int _Dex, int _Con, int _Att, int _Hp)
	{
		Str = _Str;
		Int = _Int;
		Dex = _Dex;
		Con = _Con;
		_Att = Str + (Int * 0.7f);
		_Hp = Con + (Int * 0.3f);
		__Str = _Str;
		__Int = _Int;
		__Dex = _Dex;
		__Con = _Con;
		__Att = _Att;
		__Hp = _Hp;
	}

}UB;

class BattleStats
{
private:
public:
	BattleStats(int PYA, int PYH, int MTA, int MTH)
	{
		printf_s("전투를 시작합니다.\n");
		while (0 < PYH)
		{
			printf_s("플레이어가 공격합니다.\n");
			_getch();
			printf_s("플레이어는 %d의 대미지를 주었습니다.\n", PYA);
			printf_s("몬스터는 체력%d에서 %d의 체력을 잃었습니다.\n", MTH, PYA);
			MTH -= PYA;
			printf_s("--------------------------------------------------\n");
			_getch();
			printf_s("몬스터가 공격합니다.\n");
			_getch();
			printf_s("몬스터는 %d의 대미지를 주었습니다.\n", MTA);
			printf_s("플레이어는 체력%d에서 %d의 체력을 잃었습니다.\n", PYH, MTA);
			PYH -= MTA;
			_getch();
			printf_s("--------------------------------------------------\n");
		}
		printf_s("죽었습니다.\n");
		_getch();
	}
};

//class Player
//{
//public:
//private:
//	
//};
//
//class Monster
//{
//public:
//private:
//	
//};

int main()
{

	UB Player = UB(20, 5, 10, 70, 0, 0);
	//printf_s("%d\n%d\n%d\n%d\n%d\n%d\n", Player.__Str, Player.__Int, Player.__Dex, Player.__Con, Player.__Att, Player.__Hp);
	//그냥 확인작업! 수치가 제대로되니?
	UB Monster = UnitBasic(10, 20, 5, 50, 0, 0);
	_getch();
	BattleStats(Player.__Att, Player.__Hp, Monster.__Att, Monster.__Hp);
	return 0;
}
//clear! PP1-1!

//
// PP1-2
// 바이트(구조체) 패딩
// 클래스(구조체)에 바이트를 부여하여 CPU접근에 있어 부하를 줄여주는 방법
// 그럼이것은 intel사에서 ?
// 패딩이란? 충전재
// 이건 정말쉽게 생각할수 있다.
// 우리가 택배를 부친다.
// 그 택배는 컴퓨터다.
// 컴퓨터는 조심해서 운반하지 않으면 손상이 갈수 있다.
// 그래서 뾱뾱이로 감싼다.
// 그리고 그러면? 우리가싸야하는 상자의 부피는?
// 상자 >= 컴퓨터
// ->이것이 바이트 패딩이다.
// 왜? =도 되냐고?
// 생각해봐 우리가 상자에 딱맞게 되어있으면 안에서 1.흔들림? 2.안흔들림?
// 2번이다.
// 그래서 32운영채제 에서는 4byte씩 상자로 구별해서 읽을거얌.
// 64는? 8byte씩 끊어서 읽을거얌.
//
// clear PP1-2!
// +중간에 큰 정수형 자료형에 따라간다(but 4로끈어질때는 넘어감)(좀더 연구가 필요하다)..................................................(1)


// PP1-3
// 함수 호출 규약
// 호출자(Caller)(함수를 쓰는자!) <-상호 약속-> 피호출자(Callee)(함수실행해주는데)
// 함수를 호출할 때 전달되는 인자의 순서나 사용이 끝나고 나서 스택정리.etc

//	호출규약		|		인수 전달						| 스택정리	| 이름규칙
//	_____________________________________________________________________________________
//	__cdecl		|오른쪽 먼저								| 호출원		| _함수명		
//	__stdcall	|오른쪽 먼저								| 함수		| _함수명@인수크기
//	__fastcall	|ECX, EDX에 우선전달(나머지오른쪽)		| 함수		| @함수명@인수크기
//	thiscall	|오른쪽 먼저(this포인터는 ecx레지->전달)	| 함수		| C++ 이름규칙을 따름.
//	__naked		|오른쪽먼저								| 함수		| 없음



// 1. __cdecl 방식
// C/C++ std 호출 규약
// 호출자(Caller)가 스택을 정리
// 이건 피호출자는 그냥 그대로쓸기여
// 내가 대여했으니 그거차제를 관리해주겠다!(함수: 프리랜서여? 필요한때만 부르내)
// 그럼으로 스택을 내가써야지!(즉 정리조차 쓴곳에서 다한다!)
// 쓰는건 

//	cdecl		   <->	stdcall
//__________________|_____________________
//	call name		|	call name
//	정리(호출자1)	|
//	call name		|	call name
//	정리(호출자2)	|
//	call name		|	call name
//	정리(호출자3)	|
//					|
//	int name()		|	int name()			
//						정리(함수)

// 2.__stdcall
// 윈도우즈 API 함수들의 기본 호출규약
// VB에서도 이 호출 규약을 사용한다.
// 인수 전달에 사용된 스택을 정리하는 주체가 "함수!"(호출원X)
// 내가 이걸쓰면 니가 다알아서해!(함수: 내가 다해야하내.. 이거 다 끝날때까지 퇴근못하네, 정직원)
// 난이래쓰면됨
// int[리턴값] __stdcall[호출 규약] Name[이름] (int a, int b)[인자값,파라미터]

// 3.__fastcall
// 쓰는법은 stdcall와 동일
// VB에서는 흉내는 내는것이다?
// 쉽개말해서 그냥 래지라는것을 건들여서 그기다가 edx, ecx
// 래지영역을 건들여서 스택을 쓰지않고 먼저 래지에 복사하여 사용
// 근대 어짜피 컴파일러가 구현하기 위해서 ecx, edx레지스터가 필요함
// 단 ecx, edx가 있는 컴퓨터에만가능(공용성이 떨어짐)

// 4.thiscall
// 클래스의 맴버함수에서만 작용
// ecx로 객체의 포인터(this)가 전달되는 방식
// 하지만 가변 인수는 __cdecl로 작성되야하지! -> 스택의 맨~마지막(가장 1번째)
// 안그러면 꼬일수 있지!
// thiscall을 원형 그대로 쓸수는 없고 그냥 맴버함수면 컴파일러가 알아서해줌
// 위말은 우리가 int thiscall Func() 할! 수! 없! 다!

// 5. __naked
// 사용법 __declspec(naked) 
// 컴파일러가 접두, 접미를 작성하지 않은 호출규약
// 위치가 명확하지 않은 호출임으로 내가 직접 어셈블리에 가서 작성해줘야행
// (->스택->레지)로 전달 안하고도 (->레지)로 가능하다.
// 
// 운영체제 <-디바이스 드라이버-> EXE
// 저사이에 "디바이스 드라이버"를 사용할때 사용된다.
// 속도가 중요한 부분에서

//-> 이건 우리가 하드웨어적인 무었을 샀을때
// 그것에 대한 드라이버 지원! 을 만드는데 사용된다.!
// 고로 필요???NO
// clear PP1-2!

