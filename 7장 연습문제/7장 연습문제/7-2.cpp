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
	Book a("명품 C++", 30000, 500), b("명품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl;
	if (a == "명품 C++") cout << "명품 C++입니다." << endl;
	if (a == b) cout << "두 책이 같은 책입니다." << endl;
}