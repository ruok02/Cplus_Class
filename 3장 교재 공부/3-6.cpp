#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;

	Rectangle();
	Rectangle(int r1, int r2);
	Rectangle(int r);
	bool isSquare(); // bool ������
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

	if (rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
	if (rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
	if (rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;
}
