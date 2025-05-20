#include <iostream>
using namespace std;
#include <string>

class Book {
    string title; // 복사 생성자 작성 X 문자열 string 클래스 사용하여 풀기
    int price; // 가격
public:
    Book(string title, int price);
    void set(string title, int price);
    void show() { cout << title << ' ' << price << "원" << endl; }
};

Book::Book(string title, int price) {
    this->title = title;
    this->price = price;
}

void Book::set(string title, int price) {
    this->title = title;
    this->price = price;
}

int main() {
    Book cpp("명품C++", 10000);
    Book java = cpp; // 복사 생성자 호출됨
    java.set("명품자바", 12000);
    cpp.show();
    java.show();
}