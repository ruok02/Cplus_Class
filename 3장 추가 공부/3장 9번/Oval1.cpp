#include <iostream>
using namespace std;


// 선언부
class Oval {
private: 
	int width;  // 타원의 너비
	int height; // 타원의 높이

public:
	// 너비와 높이 값을 매개 변수로 받는 생성자
	Oval();

	// 매개 변수가 있는 생성자: 주어진 너비와 높이로 초기화
	Oval(int width, int height);

	// 소멸자: 객체 소멸 시 너비와 높이를 출력
	~Oval();

	// 타원의 너비를 리턴하는 getWidth() 함수 멤버
	int getWidth();

	// 타원의 높이를 리턴하는 getHeight() 함수 멤버
	int getHeight();

	// 타원의 너비와 높이를 변경하는 set(int w, int h) 함수 멤버
	void set(int w, int h);

	// 타원의 너비와 높이를 화면에 출력하는 show() 함수 멤버
	void show();
};




// 구현부

// 기본 생성자: 너비와 높이를 1로 초기화
Oval::Oval() {
	width = 1;
	height = 1;
}

// 매개변수가 있는 생성자: 주어진 너비와 높이로 초기화
Oval::Oval(int width, int height) {
	this->width = width;
	this->height = height;
}

// 소멸자: 객체 소멸 시 메시지 출력
Oval::~Oval() {
	cout << "Oval 소멸 : width = " << width << ", height = " << height << endl;
}


// 너비를 반환하는 함수
int Oval::getWidth() {
	return width;
}

// 높이를 반환하는 함수
int Oval::getHeight() {
	return height;
}

// 너비와 높이를 설정하는 함수
void Oval::set(int w, int h) {
	width = w;
	height = h;
}

// 너비와 높이를 출력하는 함수
void Oval::show() {
	cout << "width = " << width << ", height = " << height << endl;
}


int main() {
	Oval a, b(3, 4);  // 매개변수가 있는 생성자 호출

	a.set(10, 20);  // a 객체의 너비와 높이 설정
	a.show();       // a 객체 출력

	cout << b.getWidth() << ", " << b.getHeight() << endl; // b 객체 출력
}

