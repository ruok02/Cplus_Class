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
	bool operator==(int b);
	bool operator==(string b);
	bool operator==(Book b);
};

bool Book::operator==(int b) {
	if (this->price == b) return true;
	else return false;
}

bool Book::operator==(string b) {
	if (this->name == b) return true;
	else return false;
}

bool Book::operator==(Book b) {
	//if (this->name == b.name && this->price == b.price && this->page == b.page) return true;
	if (*this == b) return true;

	else return false;
}



int main() {
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000) cout << "���� 30000��" << endl;
	if (a == "��ǰ C++") cout << "��ǰ C++�Դϴ�." << endl;
	if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl;
}