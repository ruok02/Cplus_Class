#include <iostream>
using namespace std;

int main() {
	cout << "i" << '\t' << "n" << '\t' << "refn" << endl; // main ���
	int i = 1; int n = 2; // ���� �� ����
	int& refn = n; // ���� �� ����
	n = 4; // ������ n�� �� ����
	refn++; // refn ����
	cout << i << '\t' << n << '\t' << refn << endl; 

	refn = i; // �������� i ����(i = 1)
	refn++; // refn ����
	cout << i << '\t' << n << '\t' << refn << endl; // ����� 2

	int* p = &refn; // ������ p�� ���� �������� refn ����
	*p = 20; // ������ p 20 ����
	cout << i << '\t' << n << '\t' << refn << endl;
}