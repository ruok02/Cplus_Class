#include <iostream>
using namespace std;


// �����
class Oval {
private: 
	int width;  // Ÿ���� �ʺ�
	int height; // Ÿ���� ����

public:
	// �ʺ�� ���� ���� �Ű� ������ �޴� ������
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




// ������

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


int main() {
	Oval a, b(3, 4);  // �Ű������� �ִ� ������ ȣ��

	a.set(10, 20);  // a ��ü�� �ʺ�� ���� ����
	a.show();       // a ��ü ���

	cout << b.getWidth() << ", " << b.getHeight() << endl; // b ��ü ���
}

