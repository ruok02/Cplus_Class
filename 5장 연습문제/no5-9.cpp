#include <iostream>
using namespace std;
class Accmulator {
    int value;
public:
    Accmulator(int value); // �Ű� ���� value�� ��� value�� �ʱ�ȭ�Ѵ�.
    Accmulator& add(int n); // value�� n�� ���� ���� �����Ѵ�.
    int get(); // ������ �� value ���� ���⿡ return value ����ص� ��
};

Accmulator::Accmulator(int value) {
    this->value = value;
}

Accmulator& Accmulator::add(int n) {
    value += n;
    return *this;
}

int Accmulator::get() {
    return value;
}

int main() {
    Accmulator acc(10);
    acc.add(5).add(6).add(7); // acc�� value ����� 28�� �ȴ�.
    cout << acc.get();// 28 ���
}