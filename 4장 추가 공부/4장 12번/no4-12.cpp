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



// Ŭ���� Circle�� setCircle ������ ����
void Circle::setCircle(string name, int radius) {
	this->name = name;
	this->radius = radius;
}

// ���� 
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
	CircleManager(int size); // �Ű� ���� ������
	~CircleManager();
	void searchByName();
	void searchByArea();
};

// �Ű� ���� �ִ� ������(size)
CircleManager::CircleManager(int size) {
	this->size = size;
	p = new Circle[size];
	string name;
	int radius;

	for (int i = 0; i < size; i++) {
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}





// �Ҹ���(���� �迭 ����)
CircleManager::~CircleManager() {
	delete[] p;
}

 
 

// �̸� ã��
void CircleManager::searchByName() {
	string name;
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> name;
	for (int i = 0; i < size; i++) {
		if (p[i].getName() == name)
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << endl;
	}
}

// ���� ã��
void CircleManager::searchByArea() {
	int area;
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> area;
	cout << area << "���� ū ���� �˻��մϴ�." << endl;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > size) {
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << ", ";
		}
	}
	cout << endl;
}


int main(void) {

 	int size;
	cout << "���� ����>> ";
	cin >> size;
	CircleManager p(size);
	p.searchByName();
	p.searchByArea();

	return 0;
}
