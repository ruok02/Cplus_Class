#include <iostream>
using namespace std;

class Circle {
	int x; // x,y의 가로 세로 정수형 객체 생성
	int y;
public:
	Circle() { x = 1, y = 1; } // 매개변수 없는 생성자
	Circle(int r) { x= 2, y = 10; } // 매개변수 있는 생성자
	//Circle(int a, int b) { x = a, y = b; } // 매개변수 2개인 생성자
	double getArea();
};

double Circle::getArea() {
	return x * y; // x*y ( 가로 * 세로)
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