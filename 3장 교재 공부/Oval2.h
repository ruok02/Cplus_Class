#ifndef Oval2_H
#define Oval2_H

class Oval {
private:
	int width;
	int height; // ��� ����
public:
	Oval(); // �⺻ ������

	Oval(int width, int height); // �Ű� ���� �ִ� ������

	~Oval();

	int getWidth();
	int getHeight();

	void set(int width, int height);// ���� ���
	void show();

};

#endif