#include <iostream>
using namespace std;

class MyVector {
	int* mem;
	int size;
public:
	MyVector(int val = 0, int n = 100) {
		size = n;
		mem = new int[n];
		for (int i = 0; i < size; i++) {
			mem[i] = val;
		}
	}
	~MyVector() { delete[] mem; }
	void show();
};

void MyVector::show() {
	for (int i = 0; i < size; i++) {
		cout << mem[i] << ' ';
		cout << endl;
	}
}
int main() {
	int x, y;
	x = 10; y = 5;
	MyVector Vector1;
	MyVector Vector2(x, y);
	Vector1.show();
	Vector2.show();
}
