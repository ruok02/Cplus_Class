#ifndef EXP_H
#define EXP_H

class Exp {
	int base; // ���̽�
	int exp; // ����
	int value; // ��� ��
public:
	Exp();
	Exp(int base);
	Exp(int base, int exp);
	int getValue(); // ������ ������ ����Ͽ� ����
	int getBase(); // ���̽� �� ����
	int getExp(); // ���� �� ����
	bool equals(Exp other); // �� ��ü�� ��ü b�� ���� ������ �Ǻ��Ͽ� ����
};

#endif
