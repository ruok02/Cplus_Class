#include <iostream>
using namespace std;

//ADD Ŭ����
class Add {
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculate();
};

//ADD setValue()�Լ�
void Add::setValue(int x, int y) {
	a = x;
	b = y;
}

//ADD calculate() ������
int Add::calculate() {
	return a + b;
}

//Sub Ŭ����
class Sub {
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculate();
};

//Sub setValue
void Sub::setValue(int x, int y) {
	a = x;
	b = y;
}

//Sub calculate
int Sub::calculate() {
	return a - b;
}

//Mul Ŭ����
class Mul {
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculate();
};

//Mul SetValue
void Mul::setValue(int x, int y) {
	a = x;
	b = y;
}

//Mul calculate
int Mul::calculate() {
	return a * b;
}

//Div Ŭ����
class Div {
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculate();
};

//Div setValue
void Div::setValue(int x, int y) {
	a = x;
	b = y;
}

//Div calculate
int Div::calculate() {
	return a / b;
}

//main() �Լ�
int main(void) {

	Add a; // Ŭ���� Ÿ���� ��ü a ����
	Sub s; // Ŭ���� Ÿ���� ��ü s ����
	Mul m; // Ŭ���� Ÿ���� ��ü m ����
	Div d; // Ŭ���� Ÿ���� ��ü d ����

	int num1, num2; // �� ���� ����
	char oper; // ������ operation



	while (true) { // main()�Լ��� �Է¹��� ������ �������� while-switch ���� ���
		cout << "�� ������ �����ڸ� �Է��ϼ���>>";
		cin >> num1 >> num2 >> oper; // scanf �Է¹ޱ�
		switch (oper) { // ������ 
		case '+': // Add�� ���
			a.setValue(num1, num2); // Ŭ���� Ÿ�� ��ü a �ޱ�
			cout << a.calculate() << endl; // main �Լ��� Add a�� calculate()�� ȣ��
			break;
		case '-': // Sub�� ���
			s.setValue(num1, num2); // Ŭ���� Ÿ�� ��ü s �ޱ�
			cout << s.calculate() << endl; // main �Լ��� Sub s�� calculate()�� ȣ��
			break;
		case '*': // Mul�� ���
			m.setValue(num1, num2); // Ŭ���� Ÿ�� ��ü m �ޱ�
			cout << m.calculate() << endl; // main �Լ��� Mul m�� calculate()�� ȣ��
			break;
		case '/': // Div�� ���
			d.setValue(num1, num2); // Ŭ���� Ÿ�� ��ü d �ޱ�
			cout << d.calculate() << endl; // main �Լ��� Div d�� calculate()�� ȣ��
			break;
		}
	}

	return 0;
}