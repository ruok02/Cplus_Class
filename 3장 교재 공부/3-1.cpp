#include <iostream>
using namespace std;

class Circle { // 클래스 Circle 선언부
public:
	int radius; // 면적 선언
	double getArea(); // 소수점 선언
};

double Circle::getArea() { // 클래스 Circle 구현부
	return 3.14 * radius * radius;
}

int main() {
	Circle donut; // 객체 dounut 생성
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}