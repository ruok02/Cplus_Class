#include <iostream>
using namespace std;

class Book {
	string name;
	int price;
	int page;
public:
	Book(string name = "", int price = ' ', int page = ' ') {
		this->name = name;
		this->price = price;
		this->page = page;
	}
	Book& operator += (int b);
	Book& operator -= (int b);
	void show() {
		cout << name << " " << price << "�� " << page << "������" << endl;
	};
	
};

Book& Book::operator+=(int b) {
	this->price = this->price + b;
	return *this;
}

Book& Book::operator-=(int b) {
	this->price = this->price - b;
	return *this;
}

int main() {
	Book a("û��", 20000, 300), b("�̷�", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}