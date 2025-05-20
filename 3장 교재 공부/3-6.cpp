#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;

	Rectangle();
	Rectangle(int r1, int r2);
	Rectangle(int r);
	bool isSquare(); // bool 연산자
};

Rectangle::Rectangle() { width = 1; height = 1; }
Rectangle::Rectangle(int r1, int r2) { width = r1; height = r2; }
Rectangle::Rectangle(int r) { width = height = r; }

bool Rectangle::isSquare() {
	if (width == height) return true;
	else return false;
}


int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;
}
