// 16.InheritAccess.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class Parent
{
public:
	int PublicInt;
protected:	// ctrl shift u �ҹ��� -> �빮�ڷ� �ٲٱ�
			// ctrl u		�빮�� -> �ҹ��� �ٲٱ�
	int ProtectedInt;
private:
	int PrivateInt;

public:
	void PublicFunc() {};
protected:
	void ProtectedFunc() {};
private:
	void PrivateFunc() {};

};

class Pub_Child : public Parent
{
public:
	void Pub_Ch_Pub() {
		PublicFunc();
		ProtectedFunc();
		/*PrivateFunc();*/
		//private�� ������ ������ ����
	}
protected:
	void Pub_Ch_Pro() {
		PublicFunc();
		ProtectedFunc();
		/*PrivateFunc();*/
		//private�� ������ ������ ����
	}

private:
	void Pub_Ch_Pri() {
		PublicFunc();
		ProtectedFunc();
		/*PrivateFunc();*/
		//private�� ������ ������ ����
	}

};

class Pub_Cid_Cid : public Pub_Child
{
public:
	void Pub_Ch_Pub() {
		PublicFunc();
		ProtectedFunc();
		/*PrivateFunc();*/
		//private�� ������ ������ ����

		Pub_Child::Pub_Ch_Pub();
	}
protected:
	void Pub_Ch_Pro() {
		PublicFunc();
		ProtectedFunc();
		/*PrivateFunc();*/
		//private�� ������ ������ ����
		Pub_Child::Pub_Ch_Pro();
	}

private:
	void Pub_Ch_Pri() {
		PublicFunc();
		ProtectedFunc();
		//PrivateFunc();
		//private�� ������ ������ ����
		//Pub_Child::Pub_Ch_Pri();
		//private�� ������ ������ ����
	}
};



class Pro_Child : protected Parent
{
public:
	void Pro_Ch_Pub() {
		PublicFunc();
		ProtectedFunc();
		/*PrivateFunc();*/
		//private�� ������ ������ ����
	}
protected:
	void Pro_Ch_Pro() {
		PublicFunc();
		ProtectedFunc();
		/*PrivateFunc();*/
		//private�� ������ ������ ����
	}

private:
	void Pro_Ch_Pri() {
		PublicFunc();
		ProtectedFunc();
		/*PrivateFunc();*/
		//private�� ������ ������ ����
	}
};

class Pro_Cid_Cid : protected Pro_Child
{
public:
	void Pub_Ch_Pub() {
		PublicFunc();
		ProtectedFunc();
		/*PrivateFunc();*/
		//private�� ������ ������ ����

		Pro_Child::Pro_Ch_Pub();
	}
protected:
	void Pub_Ch_Pro() {
		PublicFunc();
		ProtectedFunc();
		/*PrivateFunc();*/
		//private�� ������ ������ ����
		Pro_Child::Pro_Ch_Pro();
	}

private:
	void Pub_Ch_Pri() {
		PublicFunc();
		ProtectedFunc();
		//PrivateFunc();
		//private�� ������ ������ ����
		//Pro_Child::Pro_Ch_Pri();
		//private�� ������ ������ ����
	}
};



class Pri_Child : private Parent
{
public:
	void Pri_Ch_Pub() {
		PublicFunc();
		ProtectedFunc();
		/*PrivateFunc();*/
		//private�� ������ ������ ����
	}
protected:
	void Pri_Ch_Pro() {
		PublicFunc();
		ProtectedFunc();
		/*PrivateFunc();*/
		//private�� ������ ������ ����
	}

private:
	void Pri_Ch_Pri() {
		PublicFunc();
		ProtectedFunc();
		/*PrivateFunc();*///private�� ������ ������ ����
	}
};

class Pri_Cid_Cid : private Pri_Child
{
public:
	void Pub_Ch_Pub() {
		//PublicFunc();
		//ProtectedFunc();
		//PrivateFunc();
		//�θ� �ȵ�
		Pri_Child::Pri_Ch_Pub();
	}
protected:
	void Pub_Ch_Pro() {
		//PublicFunc();
		//ProtectedFunc();
		//PrivateFunc();
		//�θ� �ȵ�
		Pri_Child::Pri_Ch_Pro();
	}

private:
	void Pub_Ch_Pri() {
		//PublicFunc();
		//ProtectedFunc();
		//PrivateFunc();
		//�θ� �ȵ�

		//Pro_Child::Pro_Ch_Pri();
		//private�� ������ ������ ����
	}
};
// A1.�θ��� Private�� ������ ������ ��δ� �ڽĿ��� ��밡���ϴ�.
// A2. �׷� �ڿ� �ٴ� ���� �״������� ����ҷ�? �̴�.
// �θ𿡼� ��� ������ � ���� �������� �����ҷ�? �̴�.

// : Public (�θ�)		 ->	(�θ��)->(��ӵɽ�)  Pub-> Pub	Pro -> Pro	Pri -> Pri
// : Protected (�θ�)	 -> (�θ��)->(��ӵɽ�)  Pub-> Pro	Pro -> Pro	Pri -> Pri
// : Private (�θ�)		 -> (�θ��)->(��ӵɽ�)  Pub-> Pri	Pro -> Pri	Pri -> Pri

//int main���� �ѹ�!


//Q1.��ӽÿ� �θ�� �ڽİ��� ����Ʈ���� ���� �̷������?
//Q2.� ������ �����̵ɱ�?









int main()
{
	Pub_Child Pub_C1;
	Pub_C1.PublicFunc();
	Pub_C1.Pub_Ch_Pub();
	//�θ�� �ڽ��� �ۺ����ٵ�.

	Pro_Child Pro_C1;
	//Pro_C1.PublicFunc();
	Pro_C1.Pro_Ch_Pub();
	//�θ���� protected�εǾ� �ȵ�.

	Pri_Child Pri_C1;
	//Pri_C1.PublicFunc();
	Pri_C1.Pri_Ch_Pub();
	//�θ���� Private���� �Ǿ� �ȵ�.
    return 0;
}

