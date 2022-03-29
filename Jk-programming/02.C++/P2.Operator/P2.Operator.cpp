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
	}//�����ڸ� �������� �ʱ����� &�� ����. ���ذ��� ��������
	TEXT operator+ (const TEXT& _Other)
	{
		return this->M_int + _Other.M_int;

	}//�����ڸ� �����ؾ��Ѵ�.
	 //&�� �ϸ� ������ ���� ��� �����ʹ� ����� �ѷ�?
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
	//�⺻ ����� �ߵǳ�
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
	//��� ���� �Ҵ� �����ڵ� ��

	//���� ���� ������
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
		//TEXT DT = this->M_int;//���� ���
		//(this->M_int)++;//�Ŀ� �������ְ�
		//return DT.M_int;// �������ְ�
		(this->M_int)++;
		return _Other;
	}
	TEXT operator-- (int _Other)
	{
		(this->M_int)--;
		return _Other;
	}


	// �� / ���� ������
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
	//Ŭ����

	//�� ������
	TEXT operator! ()
	{
		return !(this->M_int);
	}
	// �̰Ŵ� ������ �����غ� �ϰ� ��ü�� �Ӱ��ʿ�����!
	// �ʿ䵵����!
	TEXT operator&& (const TEXT& _Other)
	{
		return (this->M_int && _Other.M_int);
	}
	TEXT operator|| (const TEXT& _Other)
	{
		return (this->M_int || _Other.M_int);
	}

	//��Ʈ ���� ������
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
	//����
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

	//������ �� ����


	Num2 = Num1++;
	b = a++;

	printf_s("%d\n", a);
	printf_s("%d\n", Num1.GetValue());


	//������ �� ����


	return 0;
}

