#include <iostream>
using namespace std;

#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"


int main(void) {

	Add a; // Ŭ���� Ÿ���� ��ü a ����
	Sub s; // Ŭ���� Ÿ���� ��ü s ����
	Mul m; // Ŭ���� Ÿ���� ��ü m ����
	Div d; // Ŭ���� Ÿ���� ��ü d ����

	int num1, num2; // �� ���� ����
	char oper; // ������ operation



	while (true) { // main()�Լ��� �Է¹��� ������ �������� while(switch -case) ���� ���
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