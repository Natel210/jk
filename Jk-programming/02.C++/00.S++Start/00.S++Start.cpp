// 00.S++Start.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// C에서 배운 헤더를 그냥사용가능
	//그래서 착각하는게 c++은 c를 포함하고 있다.
	//절대 아니다.
	//c++ == c를 포함한다.->헛소리
	//위원회 부터 다르다.C의 표준위원회와 C++의
	//와 c++은 완전히 다른 언어이다.
	//문법이 호환될뿐.

	//위의 말을 요약하자면
	//명백히 C++과 C는 다른 언어이고
	//Just -> 비슷하게 쓰려고 프로그래밍을 해놓은 것들이 있다!


//자 이것을 보라 <헤더.h>,<헤더>  
//둘다되는것
#include <string>
#include <string.h>

// .h만되는것
#include <conio.h>
//#include <conio>

// 없는것만 되는것
//#include <iostream.h>
#include <iostream>//cout endl을 쓰고싶다.

int macin()
{
	std::cout << "Start" << std::endl;
	//그리고 이것에 대해서 printf_s()처럼 뜯어볼것이다!
    return 0;
}

