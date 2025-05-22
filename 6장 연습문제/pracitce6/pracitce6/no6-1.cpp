#include <iostream>
using namespace std;

// 1-2번.
/*int add(int x[], int size, int y[] = NULL) { // a에서 b까지 합하기
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += x[i];
	}
	if (y == NULL)
		return sum;

	else 
		for (int i = 0; i < size; i++) {
			sum += y[i];
		}
	return sum;
}*/

//1-1번
int add(int x[], int size) { 
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += x[i];
	}
	return sum;
}

int add(int x[], int size, int y[]) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += x[i] + y[i];
	}
	return sum;
}

int main() {
	int a[] = { 1, 2, 3, 4, 5 };
	int b[] = { 6, 7, 8, 9, 10 };
	int c = add(a, 5);
	int d = add(a, 5, b);
	cout << c << endl;
	cout << d << endl;
}