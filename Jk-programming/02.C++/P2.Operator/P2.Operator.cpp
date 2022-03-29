// P2.Operator.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include<iostream>
class TEXT
{
private:

	int M_int;


public:
	int GetValue() const
	{
		return M_int;
	}

	void SetValue(const int _int)
	{
		M_int = _int;
	}
public:
	TEXT& operator= (const TEXT& _Other)
	{
		this->M_int = _Other.M_int;

		return *this;
	}//생성자를 생성하지 않기위해 &를 쓴다. 기준값음 있음으로
	TEXT operator+ (const TEXT& _Other)
	{
		return this->M_int + _Other.M_int;

	}//생성자를 생성해야한다.
	 //&을 하면 원래의 값을 담는 데이터는 어따가 둘래?
	TEXT operator- (const TEXT& _Other)
	{
		return this->M_int - _Other.M_int;
	}
	TEXT operator* (const TEXT& _Other)
	{
		return this->M_int * _Other.M_int;
	}
	TEXT operator/ (const TEXT& _Other)
	{
		return this->M_int / _Other.M_int;
	}
	TEXT operator% (const TEXT& _Other)
	{
		return this->M_int % _Other.M_int;
	}
	//기본 산술은 잘되네
	TEXT operator+= (const TEXT& _Other)
	{
		return this->M_int + _Other.M_int;
	}
	TEXT operator-= (const TEXT& _Other)
	{
		return this->M_int - _Other.M_int;
	}
	TEXT operator*= (const TEXT& _Other)
	{
		return this->M_int * _Other.M_int;
	}
	TEXT operator/= (const TEXT& _Other)
	{
		return this->M_int / _Other.M_int;
	}
	TEXT operator%= (const TEXT& _Other)
	{
		return this->M_int % _Other.M_int;
	}
	//산술 복합 할당 연산자도 됨

	//전위 후위 연산자
	TEXT operator++ ()
	{
		return this->M_int + 1;
	}
	TEXT operator-- ()
	{
		return this->M_int - 1;
	}
	TEXT operator++ (int _Other)
	{
		//TEXT DT = this->M_int;//먼저 담고
		//(this->M_int)++;//후에 연산해주고
		//return DT.M_int;// 담은걸주고
		(this->M_int)++;
		return _Other;
	}
	TEXT operator-- (int _Other)
	{
		(this->M_int)--;
		return _Other;
	}


	// 비교 / 관계 연산자
	TEXT operator== (const TEXT& _Other)
	{
		return (this->M_int == _Other.M_int);
	}
	TEXT operator!= (const TEXT& _Other)
	{
		return (this->M_int != _Other.M_int);
	}
	TEXT operator> (const TEXT& _Other)
	{
		return (this->M_int > _Other.M_int);
	}
	TEXT operator< (const TEXT& _Other)
	{
		return (this->M_int < _Other.M_int);
	}
	TEXT operator>= (const TEXT& _Other)
	{
		return (this->M_int >= _Other.M_int);
	}
	TEXT operator<= (const TEXT& _Other)
	{
		return (this->M_int <= _Other.M_int);
	}
	//클리어

	//논리 연산자
	TEXT operator! ()
	{
		return !(this->M_int);
	}
	// 이거는 생각을 조금해봐 니가 주체가 머가필요한지!
	// 필요도없어!
	TEXT operator&& (const TEXT& _Other)
	{
		return (this->M_int && _Other.M_int);
	}
	TEXT operator|| (const TEXT& _Other)
	{
		return (this->M_int || _Other.M_int);
	}

	//비트 단위 연산자
	TEXT operator~ ()
	{
		return ~(this->M_int);
	}
	TEXT operator& (const TEXT& _Other)
	{
		return (this->M_int & _Other.M_int);
	}
	TEXT operator| (const TEXT& _Other)
	{
		return (this->M_int | _Other.M_int);
	}
	TEXT operator^ (const TEXT& _Other)
	{
		return (this->M_int ^ _Other.M_int);
	}
	TEXT operator<< (const TEXT& _Other)
	{
		return (this->M_int << _Other.M_int);
	}
	TEXT operator >> (const TEXT& _Other)
	{
		return (this->M_int >> _Other.M_int);
	}
	//복합
	TEXT operator&= (const TEXT& _Other)
	{
		return (this->M_int & _Other.M_int);
	}
	TEXT operator|= (const TEXT& _Other)
	{
		return (this->M_int | _Other.M_int);
	}
	TEXT operator^= (const TEXT& _Other)
	{
		return (this->M_int ^ _Other.M_int);
	}
	TEXT operator<<= (const TEXT& _Other)
	{
		return (this->M_int << _Other.M_int);
	}
	TEXT operator>>= (const TEXT& _Other)
	{
		return (this->M_int >> _Other.M_int);
	}

public:
	TEXT(const int _int)
	{
		M_int = _int;
	}

};

int main()
{

	int a = 6;
	int b = 1;

	TEXT Num1 = TEXT(6);
	TEXT Num2 = TEXT(1);

	printf_s("%d\n", a);
	printf_s("%d\n", b);

	printf_s("%d\n", Num1.GetValue());
	printf_s("%d\n", Num2.GetValue());

	//연산전 값 산출


	Num2 = Num1++;
	b = a++;

	printf_s("%d\n", a);
	printf_s("%d\n", Num1.GetValue());


	//연산후 값 산출


	return 0;
}

