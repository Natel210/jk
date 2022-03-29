// 16.InheritAccess.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class Parent
{
public:
	int PublicInt;
protected:	// ctrl shift u 소문자 -> 대문자로 바꾸기
			// ctrl u		대문자 -> 소문자 바꾸기
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
		//private를 제외한 나머지 가능
	}
protected:
	void Pub_Ch_Pro() {
		PublicFunc();
		ProtectedFunc();
		/*PrivateFunc();*/
		//private를 제외한 나머지 가능
	}

private:
	void Pub_Ch_Pri() {
		PublicFunc();
		ProtectedFunc();
		/*PrivateFunc();*/
		//private를 제외한 나머지 가능
	}

};

class Pub_Cid_Cid : public Pub_Child
{
public:
	void Pub_Ch_Pub() {
		PublicFunc();
		ProtectedFunc();
		/*PrivateFunc();*/
		//private를 제외한 나머지 가능

		Pub_Child::Pub_Ch_Pub();
	}
protected:
	void Pub_Ch_Pro() {
		PublicFunc();
		ProtectedFunc();
		/*PrivateFunc();*/
		//private를 제외한 나머지 가능
		Pub_Child::Pub_Ch_Pro();
	}

private:
	void Pub_Ch_Pri() {
		PublicFunc();
		ProtectedFunc();
		//PrivateFunc();
		//private를 제외한 나머지 가능
		//Pub_Child::Pub_Ch_Pri();
		//private를 제외한 나머지 가능
	}
};



class Pro_Child : protected Parent
{
public:
	void Pro_Ch_Pub() {
		PublicFunc();
		ProtectedFunc();
		/*PrivateFunc();*/
		//private를 제외한 나머지 가능
	}
protected:
	void Pro_Ch_Pro() {
		PublicFunc();
		ProtectedFunc();
		/*PrivateFunc();*/
		//private를 제외한 나머지 가능
	}

private:
	void Pro_Ch_Pri() {
		PublicFunc();
		ProtectedFunc();
		/*PrivateFunc();*/
		//private를 제외한 나머지 가능
	}
};

class Pro_Cid_Cid : protected Pro_Child
{
public:
	void Pub_Ch_Pub() {
		PublicFunc();
		ProtectedFunc();
		/*PrivateFunc();*/
		//private를 제외한 나머지 가능

		Pro_Child::Pro_Ch_Pub();
	}
protected:
	void Pub_Ch_Pro() {
		PublicFunc();
		ProtectedFunc();
		/*PrivateFunc();*/
		//private를 제외한 나머지 가능
		Pro_Child::Pro_Ch_Pro();
	}

private:
	void Pub_Ch_Pri() {
		PublicFunc();
		ProtectedFunc();
		//PrivateFunc();
		//private를 제외한 나머지 가능
		//Pro_Child::Pro_Ch_Pri();
		//private를 제외한 나머지 가능
	}
};



class Pri_Child : private Parent
{
public:
	void Pri_Ch_Pub() {
		PublicFunc();
		ProtectedFunc();
		/*PrivateFunc();*/
		//private를 제외한 나머지 가능
	}
protected:
	void Pri_Ch_Pro() {
		PublicFunc();
		ProtectedFunc();
		/*PrivateFunc();*/
		//private를 제외한 나머지 가능
	}

private:
	void Pri_Ch_Pri() {
		PublicFunc();
		ProtectedFunc();
		/*PrivateFunc();*///private를 제외한 나머지 가능
	}
};

class Pri_Cid_Cid : private Pri_Child
{
public:
	void Pub_Ch_Pub() {
		//PublicFunc();
		//ProtectedFunc();
		//PrivateFunc();
		//부모 안됨
		Pri_Child::Pri_Ch_Pub();
	}
protected:
	void Pub_Ch_Pro() {
		//PublicFunc();
		//ProtectedFunc();
		//PrivateFunc();
		//부모 안됨
		Pri_Child::Pri_Ch_Pro();
	}

private:
	void Pub_Ch_Pri() {
		//PublicFunc();
		//ProtectedFunc();
		//PrivateFunc();
		//부모 안됨

		//Pro_Child::Pro_Ch_Pri();
		//private를 제외한 나머지 가능
	}
};
// A1.부모의 Private를 제외한 나머지 모두는 자식에서 사용가능하다.
// A2. 그럼 뒤에 붙는 것은 그다음에서 어떻게할래? 이다.
// 부모에서 상속 받을때 어떤 공개 수준으로 지정할래? 이다.

// : Public (부모)		 ->	(부모것)->(상속될시)  Pub-> Pub	Pro -> Pro	Pri -> Pri
// : Protected (부모)	 -> (부모것)->(상속될시)  Pub-> Pro	Pro -> Pro	Pri -> Pri
// : Private (부모)		 -> (부모것)->(상속될시)  Pub-> Pri	Pro -> Pri	Pri -> Pri

//int main으로 한번!


//Q1.상속시에 부모와 자식간의 디폴트들은 어케 이루어질까?
//Q2.어떤 식으로 구성이될까?









int main()
{
	Pub_Child Pub_C1;
	Pub_C1.PublicFunc();
	Pub_C1.Pub_Ch_Pub();
	//부모와 자식의 퍼블릭은다됨.

	Pro_Child Pro_C1;
	//Pro_C1.PublicFunc();
	Pro_C1.Pro_Ch_Pub();
	//부모것이 protected로되어 안됨.

	Pri_Child Pri_C1;
	//Pri_C1.PublicFunc();
	Pri_C1.Pri_Ch_Pub();
	//부모것이 Private으로 되어 안됨.
    return 0;
}

