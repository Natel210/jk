#pragma once
class bullet
{
public:
	short b_ix;
	short b_iy;
	bool bulletcost = false;

	void Map(short _x, short _y);//�Ѿ��� ������
								 //�ʿ� ���� �Ѿ��� ����.
								 //�����̵ȴٸ� �÷��̾� ��ġ�� ���� �Ѵ�.///�����Ұ��ϰ�

	bullet();
	~bullet();
private:
	short Mapb_ix;
	short Mapb_iy;

};

