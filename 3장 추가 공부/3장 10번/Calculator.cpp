#include <iostream>
using namespace std;

//ADD 클래스
class Add {
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculate();
};

//ADD setValue()함수
void Add::setValue(int x, int y) {
	a = x;
	b = y;
}

//ADD calculate() 연산자
int Add::calculate() {
	return a + b;
}

//Sub 클래스
class Sub {
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculate();
};

//Sub setValue
void Sub::setValue(int x, int y) {
	a = x;
	b = y;
}

//Sub calculate
int Sub::calculate() {
	return a - b;
}

//Mul 클래스
class Mul {
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculate();
};

//Mul SetValue
void Mul::setValue(int x, int y) {
	a = x;
	b = y;
}

//Mul calculate
int Mul::calculate() {
	return a * b;
}

//Div 클래스
class Div {
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculate();
};

//Div setValue
void Div::setValue(int x, int y) {
	a = x;
	b = y;
}

//Div calculate
int Div::calculate() {
	return a / b;
}

//main() 함수
int main(void) {

	Add a; // 클래스 타입의 객체 a 생성
	Sub s; // 클래스 타입의 객체 s 생성
	Mul m; // 클래스 타입의 객체 m 생성
	Div d; // 클래스 타입의 객체 d 생성

	int num1, num2; // 두 개의 정수
	char oper; // 연산자 operation



	while (true) { // main()함수의 입력받은 정수와 연산자의 while-switch 문법 사용
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