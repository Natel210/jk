// 19.UpCastingDownCasting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//Virtual배우기 전에 이거랑  클래스의 크기를 배워볼것이다.
//   up . down casting

enum ObjectType
{
	bullet_ty,
	monster_ty,
};
//이건 내가 enum으로 총알과 몬스터를 오브잭트로 쓰겟다.
//그리고 함수는 무조건 코드!

class Object
{
public:
	ObjectType Type;
	//이 오브잭트 클래스에 총알과 몬스터 구조체를 넣겠다.

public:
	int Number;

public:
	void Update() {}

public:
	Object()
	{
	}
	Object(const Object& _Ohter)
		//난 주는 객체로(주소값 고정,&)(새로운 객체를 만들지 않겠다.) 그것에 대한 값은 그대로하겠다.(const)
	{
		int a = 0;
	}

private:

};

class Bullet : public Object
{
public:
	int Speed;
	//class_Object의 public,protected를 퍼블릭으로 가지고 왔고 Speed변수를 넣겠다.

	int GetSpeed() {
		return Speed;
	}//이함수를 통해서 스피드 값을 보고싶다.

	void Fire();

	Bullet() : Speed(888)
		//생성자 함수를 내가 직접 만들고
		//그기에 이니셜라이즈를 통해서 Speed에 int자료형의 888을 넣겠다.
	{

	}
private:

};

class Monster : public Object
{
public:
	int Hp;

	int GetHp() {
		return Hp;
	}//이함수를 통해서 Hp값을 보겟다.

	void Death_1(){}
	void Death_2(){}
	void Death_3(){
		printf_s("함수가 하나더있어염.\n");
	}

public:
	Monster() : Hp(999)
	{

	}
	//생성자 함수를 내가 직접 만들고
	//그기에 이니셜라이즈를 통해서 Hp에 int자료형의 999을 넣겠다.
private:

};
















int main()
{
	Bullet NewBullet;
	Object BulletObject = NewBullet;//값
	Object* p_BulletObject = &NewBullet;//주소
	//이런 문법을 업캐스팅 이라고한다.
	//아래의 클래스를 위에 클래스에 한방에 넣어주기!

	//응용
	Bullet	ArrBullet[10];
	Monster ArrMonster[10];
	//이렇개 선언해주고
	Object* P_ArrObject[20];
	//오브잭트 포인터를 20개 만들고
	//여기다가 bullet이랑 monster를 넣을겨
	for (size_t i = 0; i < 10; i++)
	{
		P_ArrObject[i] = &ArrBullet[i];
		P_ArrObject[i + 10] = &ArrMonster[i];
	}
	//이렇개하면 각각에 10개씩 한방에 들어감.

	//////////////////////////////////////////////
	//다운캐스팅
	Bullet* P_Bullet = (Bullet*)P_ArrObject[11];
	//(Bullet*)을 안쓰면
	//(Object*)는 (Bullet*)에 사용할수 없습니다.
	//그래서 저것을 불랫*로 변환해서 넣을거임
	//그리고 11번쨰는 뭐니? 몬스터 것인데 작동할까?
	printf_s("%d\n", P_Bullet->GetSpeed());
	//몬스터 Hp값으로 실행되네?
	//근대 스피드는 인식하네?
	//생각을해봐 포인터그자체는 주소값만 가져온다.
	//그개 뭔지 몰라.
	//그래서 인식되고 움직이는데 ..... 그걸 bullet이라고 생각하고 실행해버리는것.
	
	Monster* P_Monster = (Monster*)P_ArrObject[0];
	P_Monster->Death_3();
	printf_s("%d\n", P_Monster->GetHp());
	//인식은됨...
	//100%오작동되는것을 식별함.

	
	// 만약에라도 실수로 Monster를 Bullet로 바꾼다면 큰일(오동작하거나 프로그램이 터질수도 있다)이 날것이므로
	// 주의가 필요하다-> 가급적 사용하지말자.



    return 0;
}

