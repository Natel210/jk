// 22.ClassSize.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
class MyClass
{
public:

private:

};

//���� Ŭ����!(�ƹ����۾���)
//�Լ����� ũ�Ⱑ����!

class MyClass_char
{
public:
public:
	char a;
private:

};

//char���ڰ�1���� 1ũ��/////////

class MyClass_static_1
{
public:
public:
	static int a;
private:

};

//////////////////////////////

class MyClass_static_some
{
public:
public:
	static char a;
	static int b;
	static long long c;
private:

};


////////////////////////////////
class MC_son : public MyClass
{
public:

private:

};
//���뿡 ���

class MCSS_son : MyClass_static_some
{
public:

private:

};
//�ټ��� ����ƽ�� ���

class MC_son_2char : MyClass
{
public:
	char a;
	char b;
private:

};
//����뿡 2���� char����
class MCSS_son_2char : MyClass_static_some
{
public:
	char a;
	char b;
private:

};
// �ټ��� ����ƽ�� 2���� char����

//////////////////////////////////////////////////////////

class MotherClass
{
public:
	virtual void Punc(){
		printf_s("�θ��� �Լ�\n");
	}
private:

};
//�θ�Ŭ����
class SonClass : public MotherClass
{
public:
	virtual void Punc() {
		printf_s("�ڽ��� �Լ�\n");
	}
	//�̷��� �������̵��� �ɰ��̴�.
private:

};
//�ڽ�Ŭ����

class Son_SonClass : SonClass
{
public:
	void Punc() {
		printf_s("�ڽ�'s �ڽ� �Լ�\n");
	}

private:
	int a = 0; //���̰Ÿ�ŭ ����!

};

int main()
{

	
	printf_s("%d\n", sizeof(MyClass));
	printf_s("%d\n", sizeof(MyClass_char));
	printf_s("%d\n", sizeof(MyClass_static_1));
	printf_s("%d\n", sizeof(MyClass_static_some));
	//class���� �ƹ��� ���ڰ��� ���ٸ�?
	//char1��, 1���� ����ƽ, ������ ����ƽ
	// 1�̵ȴ�. ���ϱ�?
	printf_s("\n");
	printf_s("%d\n", sizeof(MC_son));
	printf_s("%d\n", sizeof(MCSS_son));
	//���� �ڽĵ鵵 1�̵�....
	printf_s("\n");
	printf_s("%d\n", sizeof(MC_son_2char));
	printf_s("%d\n", sizeof(MCSS_son_2char));
	//?????????????
	//3�̵��پ˾����� 2�����?
	printf_s("\n");
	printf_s("\n");
	Son_SonClass S_2nd;
	S_2nd.Punc();
	//
	printf_s("%d\n", sizeof(MotherClass));
	printf_s("%d\n", sizeof(SonClass));
	printf_s("%d\n", sizeof(Son_SonClass));
	//�θ�� �����̰� Virtual�ÿ� �� intũ�⸸ŭ ũ�Ⱑ �����.

	// �Լ� ���̺��̶�� ���� �Լ� �ּҰ��� �迭�̴�.
	// �׷��� �迭�� ��ä�� ��� ���� �ʿ䰡 �־�?
	// �ᱹ �� ���� �ּҸ� �˰� ������ �ȴ�.
	// �Ӹ��� ��� ������
	// ���ּ��� ũ��� 4����Ʈ

	// ���⼭ ���̿� ���߰��ȴٸ� �߰��ȸ�ŭ�� �����ش�.

    return 0;
}

