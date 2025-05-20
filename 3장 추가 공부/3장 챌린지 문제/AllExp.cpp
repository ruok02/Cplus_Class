//	#include <iostream>
//using namespace std;
//
//class Exp {
//	int base; // ���̽�
//	int exp; // ����
//	int value; // ��� ��
//public:
//	Exp();
//	Exp(int base);
//	Exp(int base, int exp);
//	int getValue(); // ������ ������ ����Ͽ� ����
//	int getBase(); // ���̽� �� ����
//	int getExp(); // ���� �� ����
//	bool equals(Exp other); // �� ��ü�� ��ü b�� ���� ������ �Ǻ��Ͽ� ����
//};
//
//
//Exp::Exp() { // �⺻ ������? -> �Ű����� ����
//
//	base = 1; // �⺻ �� 1
//	exp = 1; // �⺻�� 1
//	value = pow(1, 1); // pow (base�� �Ǵ� ������ n ���� ���� 1^1)
//}
//
//Exp::Exp(int base) { // �Ű����� 1�� (base��)
//	this->base = base; // ������ base ����
//	exp = 1; // ���� 1 
//	value = pow(base, 1); // ��� = base^1 ����
//}
//
//Exp::Exp(int base, int exp) { // �Ű����� 2�� (base, exp ����)
//	this->base = base;
//	this->exp = exp;
//	value = pow(base, exp); // ��� = base^exp �� ����
//}
//
//int Exp::getValue() { // ���� value �� ����
//	return value;
//}
//
//int Exp::getBase() { // base �� ����
//	return base;
//}
//
//int Exp::getExp() { // exp �� ����
//	return exp;
//}
//
//bool Exp::equals(Exp other) { // Exp Ŭ������ ��� �Լ�, �� Exp ��ü�� value ���� �������� �Ǻ��ϴ� bool �Լ�
//	if (this->value == other.value) // ��üthis value ���� �Ű����� other ��ü�� value ���� �������� ��
//		return true;  // ���� ���� true
//	else
//		return false; // ���� �ٸ��� false
//}
//
//int main() {
//	Exp a(3, 2); // 3�� 2�� = 9. ���̽� 3, ���� 2
//	Exp b(9); // 9�� 1�� = 9. ���̽� 9, ���� 1
//	Exp c; //1�� 1�� = 1, ���̽� 1, ���� 1
//
//	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
//	cout << "a�� ���̽� " << a.getBase() << "," << "���� " << a.getExp() << endl;
//
//	if (a.equals(b))
//		cout << "same" << endl;
//	else
//		cout << "not same" << endl;
//
//	return 0;
//}

#include <iostream>
using namespace std;

class Exp {
	int base;
	int exp;
	int value;
public:
	
	
	Exp(int base, int exp);
	Exp(int base);
	Exp();
	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp b);
};

Exp::Exp() {
	base = 1;
	exp = 1;
	value = 1;
}

Exp::Exp(int base) {
	this->base = base;
	exp = 1;
	value = pow(base, 1);
}

Exp::Exp(int base, int exp) {
	this -> base = base;
	this -> exp = exp;
	value = pow(base, exp);
}

int Exp::getValue() {
	return value;
}

int Exp::getBase() {
	return base;
}

int Exp::getExp() {
	return exp;
}

bool Exp::equals(Exp b) {
	if (this -> value == b.value)
		return true;
	else
		return false;
}




















int main() {
	Exp a(3, 2); // 3�� 2�� = 9. ���̽� 3, ���� 2
	Exp b(9); // 9�� 1�� = 9. ���̽� 9, ���� 1
	Exp c; //1�� 1�� = 1, ���̽� 1, ���� 1

	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << "a�� ���̽� " << a.getBase() << "," << "���� " << a.getExp() << endl;

	if (a.equals(b))
		cout << "same" << endl;
	else
		cout << "not same" << endl;

	return 0;
}