#include <iostream>
using namespace std;

#include "Exp.h"

Exp::Exp() { // �⺻ ������? -> �Ű����� ����

	base = 1; // �⺻ �� 1
	exp = 1; // �⺻�� 1
	value = pow(1, 1); // pow (base�� �Ǵ� ������ n ���� ���� 1^1)
}

Exp::Exp(int base) { // �Ű����� 1�� (base��)
	this->base = base; // ������ base ����
	exp = 1; // ���� 1 
	value = pow(base, 1); // ��� = base^1 ����
}

Exp::Exp(int base, int exp) { // �Ű����� 2�� (base, exp ����)
	this->base = base; 
	this->exp = exp; 
	value = pow(base, exp); // ��� = base^exp �� ����
}

int Exp::getValue() { // ���� value �� ����
	return value; 
}

int Exp::getBase() { // base �� ����
	return base; 
}

int Exp::getExp() { // exp �� ����
	return exp; 
}

bool Exp::equals(Exp other) { // Exp Ŭ������ ��� �Լ�, �� Exp ��ü�� value ���� �������� �Ǻ��ϴ� bool �Լ�
	if (this->value == other.value) // ��üthis value ���� �Ű����� other ��ü�� value ���� �������� ��
		return true;  // ���� ���� true
	else
		return false; // ���� �ٸ��� false
}
