#include <iostream>
using namespace std;

int main() {
	// �迭 ���� ��� int* ������ ���� �̸� = new ������ ���� �̸�[��];
	// �Լ����� �ƴ϶� ������ �迭�� ����� �� ���� int* �Լ��� = new �Լ���[��] �̿����ų�
	// ���÷� ���´ٸ� int* QWE = new int[5]; 
	int* arr = new int[5];
	double average = 0; // ��հ� �ۼ�
	
	cout << "���� 5���� �Է��ϼ���";
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		average += arr[i];
	}
	cout << "��� ��: " << average / 5 << endl;
}