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

	Person* p; // Person �迭 ������
	int size; // Person �迭�� ũ��. ���� ������ ��
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
		cout << name << "������ ������ ���� " << size << "�� �Դϴ�." << endl;
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
	Family* simpson = new Family("Simpson", 3); // 3������ ������ Simspon ����
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;

}