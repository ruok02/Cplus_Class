#include <iostream>
using namespace std;
#include <string>

class Book {
    string title; // ���� ������ �ۼ� X ���ڿ� string Ŭ���� ����Ͽ� Ǯ��
    int price; // ����
public:
    Book(string title, int price);
    void set(string title, int price);
    void show() { cout << title << ' ' << price << "��" << endl; }
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
    Book cpp("��ǰC++", 10000);
    Book java = cpp; // ���� ������ ȣ���
    java.set("��ǰ�ڹ�", 12000);
    cpp.show();
    java.show();
}