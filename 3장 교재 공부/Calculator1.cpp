#include <iostream>
using namespace std;

class Add {
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculator();
};

void Add::setValue(int x, int y) {
	a = x;
	b = y;
}

int Add::calculator() {
	return a + b;
}

class Sub {
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculator();
};

void Sub::setValue(int x, int y) {
	a = x;
	b = y;
}

int Sub::calculator() {
	return a - b;
}

class Mul {
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculator();
};

void Mul::setValue(int x, int y) {
	a = x;
	b = y;
}

int Mul::calculator() {
	return a * b;
}

class Div {
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculator();
};

void Div::setValue(int x, int y) {
	a = x;
	b = y;
}

int Div::calculator() {
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
		cout << "두 정수와 연산자를 입력하세요>> " << endl;
		cin >> num1 >> num2 >> oper;

		if (oper == '+') {
			a.setValue(num1, num2);
			cout << a.calculator() << endl;
		}
		else if (oper == '-') {
			s.setValue(num1, num2);
			cout << s.calculator() << endl;
		}
		else if (oper == '*') {
			m.setValue(num1, num2);
			cout << m.calculator() << endl;
		}
		else if (oper == '/') {
			d.setValue(num1, num2);
			cout << d.calculator() << endl;
		}
	}
	return 0;
}





