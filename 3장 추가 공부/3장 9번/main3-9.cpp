#include <iostream>
using namespace std;

#include "Oval.h"

int main() {
    Oval a, b(3, 4);  // �Ű������� �ִ� ������ ȣ��

    a.set(10, 20);  // a ��ü�� �ʺ�� ���� ����
    a.show();       // a ��ü ���

    cout << b.getWidth() << ", " << b.getHeight() << endl; // b ��ü ���
}
