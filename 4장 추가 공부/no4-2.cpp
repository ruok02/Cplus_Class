#include <iostream>
using namespace std;

int main() {
	// 배열 선언 방법 int* 포인터 변수 이름 = new 포인터 변수 이름[값];
	// 함수명이 아니라 정수형 배열을 사용할 때 에는 int* 함수명 = new 함수명[값] 이였던거네
	// 예시로 적는다면 int* QWE = new int[5]; 
	int* arr = new int[5];
	double average = 0; // 평균값 작성
	
	cout << "정수 5개를 입력하세요";
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		average += arr[i];
	}
	cout << "평균 값: " << average / 5 << endl;
}