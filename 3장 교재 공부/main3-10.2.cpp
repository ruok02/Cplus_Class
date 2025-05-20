#include <iostream>
using namespace std;

#include "Add.h"
#include "SUB.h"
#include "Mul.h"
#include "Div.h"


int main() {

	Add a;
	Sub s;
	Mul m;
	Div d;

	int num1, num2;
	char oper;

	while (true) {
		cout << "두 정수와 연산자를 입력하세요>> ";
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