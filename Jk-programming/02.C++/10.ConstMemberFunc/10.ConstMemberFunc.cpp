// 10.ConstMemberFunc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//�Լ������� const !!!!!!!!!!!!

//�̴� ���Լ��� �����Ѵٰ��ؼ�
// ��ü�� ��ȭ���� �ټ�����!

// ������ �ٲٰ� �Ҽ� ����!

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
	//�Լ������� const !!!!!!!!!!!!

	//�̴� ���Լ��� �����Ѵٰ��ؼ�
	// ��ü�� ��ȭ���� �ټ�����!

	// ������ �ٲٰ� �Ҽ� ����!

	int ConstMem() const
	{
		const ConstMember* const MyMem = this;
		//this->d = 100;
		//�̾ȿ���
		return d;
	}
	int UnConMem(int _d)
	{
		ConstMember* const Mymem = this;
		d = _d;
		return d;
		/*return (d = _d);*/
		//�̰����ذ���
	}

	int ConstMem_Cg() const
	{
		//a = 10; //private
		//e = 10; //public
		//���ȵ�~
		// �̰� �����ع����� 
		// ���Լ� �ȿ����� ���Ҽ������.�Ф�
	}

	int ConstMem_PrCg(int _a) const
	{
		out_A = _a++;
		//�� �Ķ���Ϳ� ���� ���� ���Ҽ� �ֳ���?
		//��� �̰ɾ��� ��class���� ����ϴ� ��� ������ ���� ���ϰ� �Ҽ�����!
	}




private:

};

ConstMember::ConstMember()
{
}

ConstMember::~ConstMember()
{
}


//�׷� �̰� �����������ٰ� �����ϸ� ����ɱ�?
//void ConstFunc() const
//{
//
//}
//a type qualifier is not allowed on a nonmember function.
//���� ����(const)�� ��� �Լ��� �ƴ� ��� ������ �ʽ��ϴ�.
// ->�ɹ������� ���� �ִ�!

// ������ �غ��� �� Ŭ���� -> ���α׷� ��ü
// �ױ⿡ ����� ����Ұ�! -> ���α׷� ��ü�� �ɹ����� ����Ұ� ->
// -> ��� �Լ� ��� ���� ���Ұ� -> ���α׷� ���Ұ�
//�� �̰� ������


int main()
{
    return 0;
}

