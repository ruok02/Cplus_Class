#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; } // �Ű����� ���� ������
	Circle(int r) { radius = r; } // �Ű����� �ִ� ������
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle circles[2][3] = {
		{Circle(1), Circle(2), Circle(3)}, {Circle(4), Circle(5), Circle(6)} };

		/*circles[0][0].setRadius(1);
		circles[0][1].setRadius(2);
		circles[0][2].setRadius(3);
		circles[1][0].setRadius(4);
		circles[1][1].setRadius(5);
		circles[1][2].setRadius(6);*/


		for (int i = 0; i < 2; i++)
			for (int j = 0; j < 3; j++) {
			cout << "Circle [" << i << i << "," << j << "]�� ������ ";
			cout << circles[i][j].getArea() << endl;
		}
	}
