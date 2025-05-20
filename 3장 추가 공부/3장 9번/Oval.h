#ifndef OVAL_H
#define OVAL_H

#include <iostream>
using namespace std;

class Oval {
private:
    int width;  // Ÿ���� �ʺ�
    int height; // Ÿ���� ����

public:
    // �ʺ�� ���̸� 1�� �ʱ�ȭ�ϴ� �Ű� ���� ���� ������
    Oval();

    // �Ű� ������ �ִ� ������: �־��� �ʺ�� ���̷� �ʱ�ȭ
    Oval(int width, int height);

    // �Ҹ���: ��ü �Ҹ� �� �ʺ�� ���̸� ���
    ~Oval();

    // Ÿ���� �ʺ� �����ϴ� getWidth() �Լ� ���
    int getWidth();

    // Ÿ���� ���̸� �����ϴ� getHeight() �Լ� ���
    int getHeight();

    // Ÿ���� �ʺ�� ���̸� �����ϴ� set(int w, int h) �Լ� ���
    void set(int w, int h);

    // Ÿ���� �ʺ�� ���̸� ȭ�鿡 ����ϴ� show() �Լ� ���
    void show();
};

#endif
