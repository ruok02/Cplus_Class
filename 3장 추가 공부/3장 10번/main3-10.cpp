#include <iostream>
using namespace std;

#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"


int main(void) {

	Add a; // 클래스 타입의 객체 a 생성
	Sub s; // 클래스 타입의 객체 s 생성
	Mul m; // 클래스 타입의 객체 m 생성
	Div d; // 클래스 타입의 객체 d 생성

	int num1, num2; // 두 개의 정수
	char oper; // 연산자 operation



	while (true) { // main()함수의 입력받은 정수와 연산자의 while(switch -case) 문법 사용
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> num1 >> num2 >> oper; // scanf 입력받기
		switch (oper) { // 연산자 
		case '+': // Add일 경우
			a.setValue(num1, num2); // 클래스 타입 객체 a 받기
			cout << a.calculate() << endl; // main 함수의 Add a의 calculate()를 호출
			break;
		case '-': // Sub일 경우
			s.setValue(num1, num2); // 클래스 타입 객체 s 받기
			cout << s.calculate() << endl; // main 함수의 Sub s의 calculate()를 호출
			break;
		case '*': // Mul일 경우
			m.setValue(num1, num2); // 클래스 타입 객체 m 받기
			cout << m.calculate() << endl; // main 함수의 Mul m의 calculate()를 호출
			break;
		case '/': // Div일 경우
			d.setValue(num1, num2); // 클래스 타입 객체 d 받기
			cout << d.calculate() << endl; // main 함수의 Div d의 calculate()를 호출
			break;
		}
	}

	return 0;
}