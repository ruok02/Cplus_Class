#include <iostream>
#include <cstring>
using namespace std;

int main() {
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n";
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�. \n";

	int count, total = 0; // ���ĺ� count, ���� �⺻�� ����
	char buf[10000]; // �ؽ�Ʈ�� �ִ� ���� ����
	
	cin.getline(buf, 10000, ';');

	for (int i = 0; i <= strlen(buf); i++) {
		if (isalpha(buf[i]) != 0) {
			buf[i] = tolower(buf[i]);
			total++;
		}
	}
	cout << "�� ���ĺ� �� " << total << "\n\n";

	for (char c = 'a'; c <= 'z'; c++) {
		count = 0;
		for (int j = 0; j <= strlen(buf); j++) {
			if (buf[j] == c) {
				count++;
			}
		}
		cout << c << " (" << count << ")\t: ";
			for (int k = 0; k < count; k++) {
				cout << "*";
			}
		cout << endl;
	}
}