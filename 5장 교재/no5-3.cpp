#include <iostream>
using namespace std;

int main() {
	cout << "i" << '\t' << "n" << '\t' << "refn" << endl; // main 출력
	int i = 1; int n = 2; // 변수 값 선언
	int& refn = n; // 참조 값 선언
	n = 4; // 참조값 n의 값 선언
	refn++; // refn 증가
	cout << i << '\t' << n << '\t' << refn << endl; 

	refn = i; // 참조변수 i 선언(i = 1)
	refn++; // refn 증가
	cout << i << '\t' << n << '\t' << refn << endl; // 결과값 2

	int* p = &refn; // 포인터 p에 대한 참조변수 refn 선언
	*p = 20; // 포인터 p 20 선언
	cout << i << '\t' << n << '\t' << refn << endl;
}