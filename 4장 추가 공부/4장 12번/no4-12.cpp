#include <iostream>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};



// 클래스 Circle의 setCircle 포인터 생성
void Circle::setCircle(string name, int radius) {
	this->name = name;
	this->radius = radius;
}

// 면적 
double Circle::getArea() {
	return 3.14 * radius * radius;
}

// get
string Circle::getName() {
	return name;
}






class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size); // 매개 변수 생성자
	~CircleManager();
	void searchByName();
	void searchByArea();
};

// 매개 변수 있는 생성자(size)
CircleManager::CircleManager(int size) {
	this->size = size;
	p = new Circle[size];
	string name;
	int radius;

	for (int i = 0; i < size; i++) {
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}





// 소멸자(동적 배열 삭제)
CircleManager::~CircleManager() {
	delete[] p;
}

 
 

// 이름 찾기
void CircleManager::searchByName() {
	string name;
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> name;
	for (int i = 0; i < size; i++) {
		if (p[i].getName() == name)
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << endl;
	}
}

// 면적 찾기
void CircleManager::searchByArea() {
	int area;
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> area;
	cout << area << "보다 큰 원을 검색합니다." << endl;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > size) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
		}
	}
	cout << endl;
}


int main(void) {

 	int size;
	cout << "원의 개수>> ";
	cin >> size;
	CircleManager p(size);
	p.searchByName();
	p.searchByArea();

	return 0;
}
