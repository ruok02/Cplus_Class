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
	bool operator!();
};

bool Book::operator !() {
	if (this->price == 0) return true;
	else return false;
}


int main() {
	Book book("∫≠∑ËΩ√¿Â", 0, 50);
	if (!book) cout << "∞¯¬•¥Ÿ" << endl;
}