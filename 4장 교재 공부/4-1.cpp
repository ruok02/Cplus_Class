#include <iostream>
using namespace std;

class Circle {
	int x; // x,y�� ���� ���� ������ ��ü ����
	int y;
public:
	Circle() { x = 1, y = 1; } // �Ű����� ���� ������
	Circle(int r) { x= 2, y = 10; } // �Ű����� �ִ� ������
	//Circle(int a, int b) { x = a, y = b; } // �Ű����� 2���� ������
	double getArea();
};

double Circle::getArea() {
	return x * y; // x*y ( ���� * ����)
}

int main() {
	Circle donut;
	Circle pizza(30);
	

	cout << donut.getArea() << endl;

	Circle* p;
	p = &donut;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;

	p = &pizza;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;

}