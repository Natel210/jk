// 19.UpCastingDownCasting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//Virtual���� ���� �̰Ŷ�  Ŭ������ ũ�⸦ ��������̴�.
//   up . down casting

enum ObjectType
{
	bullet_ty,
	monster_ty,
};
//�̰� ���� enum���� �Ѿ˰� ���͸� ������Ʈ�� ���ٴ�.
//�׸��� �Լ��� ������ �ڵ�!

class Object
{
public:
	ObjectType Type;
	//�� ������Ʈ Ŭ������ �Ѿ˰� ���� ����ü�� �ְڴ�.

public:
	int Number;

public:
	void Update() {}

public:
	Object()
	{
	}
	Object(const Object& _Ohter)
		//�� �ִ� ��ü��(�ּҰ� ����,&)(���ο� ��ü�� ������ �ʰڴ�.) �װͿ� ���� ���� �״���ϰڴ�.(const)
	{
		int a = 0;
	}

private:

};

class Bullet : public Object
{
public:
	int Speed;
	//class_Object�� public,protected�� �ۺ����� ������ �԰� Speed������ �ְڴ�.

	int GetSpeed() {
		return Speed;
	}//���Լ��� ���ؼ� ���ǵ� ���� ����ʹ�.

	void Fire();

	Bullet() : Speed(888)
		//������ �Լ��� ���� ���� �����
		//�ױ⿡ �̴ϼȶ���� ���ؼ� Speed�� int�ڷ����� 888�� �ְڴ�.
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
	}//���Լ��� ���ؼ� Hp���� ���ٴ�.

	void Death_1(){}
	void Death_2(){}
	void Death_3(){
		printf_s("�Լ��� �ϳ����־.\n");
	}

public:
	Monster() : Hp(999)
	{

	}
	//������ �Լ��� ���� ���� �����
	//�ױ⿡ �̴ϼȶ���� ���ؼ� Hp�� int�ڷ����� 999�� �ְڴ�.
private:

};
















int main()
{
	Bullet NewBullet;
	Object BulletObject = NewBullet;//��
	Object* p_BulletObject = &NewBullet;//�ּ�
	//�̷� ������ ��ĳ���� �̶���Ѵ�.
	//�Ʒ��� Ŭ������ ���� Ŭ������ �ѹ濡 �־��ֱ�!

	//����
	Bullet	ArrBullet[10];
	Monster ArrMonster[10];
	//�̷��� �������ְ�
	Object* P_ArrObject[20];
	//������Ʈ �����͸� 20�� �����
	//����ٰ� bullet�̶� monster�� ������
	for (size_t i = 0; i < 10; i++)
	{
		P_ArrObject[i] = &ArrBullet[i];
		P_ArrObject[i + 10] = &ArrMonster[i];
	}
	//�̷����ϸ� ������ 10���� �ѹ濡 ��.

	//////////////////////////////////////////////
	//�ٿ�ĳ����
	Bullet* P_Bullet = (Bullet*)P_ArrObject[11];
	//(Bullet*)�� �Ⱦ���
	//(Object*)�� (Bullet*)�� ����Ҽ� �����ϴ�.
	//�׷��� ������ �ҷ�*�� ��ȯ�ؼ� ��������
	//�׸��� 11������ ����? ���� ���ε� �۵��ұ�?
	printf_s("%d\n", P_Bullet->GetSpeed());
	//���� Hp������ ����ǳ�?
	//�ٴ� ���ǵ�� �ν��ϳ�?
	//�������غ� �����ͱ���ü�� �ּҰ��� �����´�.
	//�װ� ���� ����.
	//�׷��� �νĵǰ� �����̴µ� ..... �װ� bullet�̶�� �����ϰ� �����ع����°�.
	
	Monster* P_Monster = (Monster*)P_ArrObject[0];
	P_Monster->Death_3();
	printf_s("%d\n", P_Monster->GetHp());
	//�ν�����...
	//100%���۵��Ǵ°��� �ĺ���.

	
	// ���࿡�� �Ǽ��� Monster�� Bullet�� �ٲ۴ٸ� ū��(�������ϰų� ���α׷��� �������� �ִ�)�� �����̹Ƿ�
	// ���ǰ� �ʿ��ϴ�-> ������ �����������.



    return 0;
}

