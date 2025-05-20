#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
public:
	Person(string name) { this->name = name; }
	Person() { }; // 매개 변수 없는 생성자
	string getName() { return name; }
	void setName(string name) { this->name = name; } // void setName() this 포인터 name 받기
};


class Family {
	Person* p; // Person 배열 포인터
	int size; // Person 배열의 크기. 가족 구성원 수
	string name; // 매개변수 name
public:
	Family() {};
	Family(string name, int size) {
		p = new Person[size]; // size 개의 배열 생성
		this->name = name;
		this->size = size;
	}

	void setName(int num, string name) {
		p[num].setName(name);
	}


	void show() {
		cout << name << "가족은 다음과 같이 " << size << "명 입니다." << endl;
		for (int i = 0; i < size; i++) {
			cout << p[i].getName() << '\t';
		}
		cout << endl;
	}
	~Family() {
		delete[]p;
	}


};

int main() {
	Family* simpson = new Family("Simpson", 3); // 3명으로 구성된 Simspon 가족
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;

}
