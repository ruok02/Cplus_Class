#include <iostream>
using namespace std;

#include "Oval.h"

// �⺻ ������: �ʺ�� ���̸� 1�� �ʱ�ȭ
Oval::Oval() {
    width = 1;
    height = 1;
}

// �Ű������� �ִ� ������: �־��� �ʺ�� ���̷� �ʱ�ȭ
Oval::Oval(int width, int height) {
    this->width = width;
    this->height = height;
}

// �Ҹ���: ��ü �Ҹ� �� �޽��� ���
Oval::~Oval() {
    cout << "Oval �Ҹ� : width = " << width << ", height = " << height << endl;
}

// �ʺ� ��ȯ�ϴ� �Լ�
int Oval::getWidth() {
    return width;
}

// ���̸� ��ȯ�ϴ� �Լ�
int Oval::getHeight() {
    return height;
}

// �ʺ�� ���̸� �����ϴ� �Լ�
void Oval::set(int w, int h) {
    width = w;
    height = h;
}

// �ʺ�� ���̸� ����ϴ� �Լ�
void Oval::show() {
    cout << "width = " << width << ", height = " << height << endl;
}
