#include <iostream>
#include <string>
using namespace std;

/* �ܼ��� ���� ������ ���� ���� ��
int main() {
	string str;
	int cnt = 0;

	cout << "���ڿ� �Է�>> ";
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a') cnt++;
	}

	cout << "���� a�� " << cnt << "�� �ֽ��ϴ�." << endl;
}*/


//find() �Լ��� ���ڿ� ã�� - �ش� ���� ������� ã�� ���� ��

int main() {
    string str;
    int cnt = 0;
    int index = -1;  // -1���� �����ؾ� ù ���ڵ� Ȯ�ε�

    cout << "���ڿ� �Է�>> ";
    getline(cin, str);

    cout << "a�� �ε���: ";
    while (true) {
        index = str.find('a', index + 1);  // ���� ��ġ���� �˻�
        if (index == -1) break;

        cout << index << ' ';  // �ε��� ���
        cnt++;
    }

    cout << "\n���� a�� " << cnt << "�� �ֽ��ϴ�." << endl;

    return 0;
}
