#pragma once //C++������ ��� �ߺ����� ��ɾ�

// �ٷ� Ŭ������ ������ �Ѵٸ�
// ���� �̸��� cpp�� h�� �����ȴ�.

// ����̸��� cpp�� �̸��� ���� �޶� ������.
// ���� �̸��� ���� ctrl+ k, o�� �̵��̵ȴ�.

class Bullet
{
public:
	Bullet();
	~Bullet();
public:
	static int Number;//Static Member, Class Member
	// ��Ȱ�� Ŭ���� �� 1��������
	// �� ��ü�� ������ ���ܵ� ����ƽ �ɹ��� �� ��ü�� ���δ� Ŭ������ �ִ� 1��������.
	int costNumber = 0;
	//����ƽ �Ⱦ�����.
public:
	void Bullet::Fire();
};

