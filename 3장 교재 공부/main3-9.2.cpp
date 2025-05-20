#include <iostream>
using namespace std;

#include "Oval2.h"

int main() {
	Oval a, b(3, 4);  // 매개변수가 있는 생성자 호출

	a.set(10, 20);  // a 객체의 너비와 높이 설정
	a.show();       // a 객체 출력

	cout << b.getWidth() << ", " << b.getHeight() << endl; // b 객체 출력
}
