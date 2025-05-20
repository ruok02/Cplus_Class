#include <iostream>
using namespace std;

class Add {
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calcualte();
};

void Add::setValue(int x, int y) {
	a = x;
	b = y;
}

int Add::calcualte() {
	return a + b;
}


class Sub {
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calcualte();
};

void Sub::setValue(int x, int y) {
	a = x;
	b = y;
}

int Sub::calcualte() {
	return a - b;
}


class Mul {
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculate();
};

void Mul::setValue(int x, int y) {
	a = x;
	b = y;
}

int Mul::calculate() {
	return a * b;
}


class Div {
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculate();
};

void Div::setValue(int x, int y) {
	a = x;
	b = y;
}

int Div::calculate() {
	return a / b;
}

int main() {

	Add a;
	Sub s;
	Mul m;
	Div d;

	int num1, num2;
	char oper;

	while (true) {
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> num1 >> num2 >> oper;
		switch (oper) {
		case'+':
			a.setValue(num1, num2);
			cout << a.calcualte() << endl;
			break;
		case'-':
			s.setValue(num1, num2);
			cout << s.calcualte() << endl;
			break;
		case'*':
			m.setValue(num1, num2);
			cout << m.calculate() << endl;
			break;
		case'/':
			d.setValue(num1, num2);
			cout << d.calculate() << endl;
			break;

		}
	}
	return 0;
}