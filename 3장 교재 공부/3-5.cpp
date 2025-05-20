#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int c);
	Point(int a, int b);
	
	void show() { cout << "(" << x << ", " << y << ")" << endl; }
};

Point::Point()  {x = 0; y = 0; }
Point::Point(int c) { x = c; y = c; }
Point::Point(int a, int b) {x = a; y = b; }


int main() {
	Point origin;
	Point sin(4);
	Point target(10, 20);
	
	origin.show();
	sin.show();
	target.show();

}