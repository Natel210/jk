#pragma once
class bullet
{
public:
	short b_ix;
	short b_iy;
	short Mapb_ix;
	short Mapb_iy;
	bool bulletcost = false;

	void bulletMove(short p_ix, short p_iy);//�Ѿ��� ������
	void bullet::bulletUnfire(short p_ix, short p_iy);//������ ������
	void Map(short _x, short _y);//�Ѿ��� ������



	bullet();
	bullet::bullet(short _x, short _y);
	~bullet();
private:
	short Pixp_ix;
	short Pixp_iy;
	void bullet::Limit(short p_ix, short p_iy);//�ʿ� ���� �Ѿ��� ����.
											   //�����̵ȴٸ� �÷��̾� ��ġ�� ���� �Ѵ�.///�����Ұ��ϰ�
	void bulletRander();//�Ѿ��� ���// �����Ұ��ϰ�
};

