#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[600];  // �ؽ�Ʈ�� �ִ� ���� ����
    int hist[26] = { 0 }; // ���ĺ� ������׷� �ʱ�ȭ

    cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n";
    cin.getline(text, 600);  // ';'�� �����ϰ� �⺻������ '\n'���� ����

    int len = strlen(text);  // ���ڿ� ���� ���
    for (int i = 0; i < len; i++) {
        if (isalpha(text[i])) { // ���ĺ��� ó��
            char temp = tolower(text[i]); // �ҹ��ڷ� ��ȯ
            hist[temp - 'a']++; // 'a'�� ASCII ���� ���� �ε����� ���� temp���� h[0] = 1, h[1]= ... �̸� h['a'] - (�ڿ� ���� ��) �ϸ� ASCII ������ 0 ..."
        }
    }

    int sum = 0;
    for (int i = 0; i < 26; i++) {
        sum += hist[i]; // �� ���ĺ� ���� ���
    }

    cout << "�� ���ĺ� ��: " << sum << endl << endl;

    for (int i = 0; i < 26; i++) {
        if (hist[i] > 0) { // �󵵼��� 0 �̻��� ���ĺ��� ��� (���̰� �ȳ־�����)
            cout << char('a' + i) << "(" << hist[i] << ")  : ";
            for (int j = 0; j < hist[i]; j++) {
                cout << '*'; // '*'�� ���ĺ� �󵵸�ŭ ���
            }
            cout << endl; // �� ���ĺ� ������׷� ���� �ٹٲ�
        }
    
}


