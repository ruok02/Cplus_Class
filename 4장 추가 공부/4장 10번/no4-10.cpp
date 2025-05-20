#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
public:
	Person() {};
	Person(string name) { this->name = name; }
	string getName() { return name; }
	void setName(string name) { this->name = name; }
	
};


class Family {

	Person* p; // Person 배열 포인터
	int size; // Person 배열의 크기. 가족 구성원 수
	string name;
public:
	Family(string name, int size) {
		p = new Person[size];
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
		delete[] p;
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