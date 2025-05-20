//	#include <iostream>
//using namespace std;
//
//class Exp {
//	int base; // 베이스
//	int exp; // 지수
//	int value; // 결과 값
//public:
//	Exp();
//	Exp(int base);
//	Exp(int base, int exp);
//	int getValue(); // 지수를 정수로 계산하여 리턴
//	int getBase(); // 베이스 값 리턴
//	int getExp(); // 지수 값 리턴
//	bool equals(Exp other); // 이 객체와 객체 b의 값이 같은지 판별하여 리턴
//};
//
//
//Exp::Exp() { // 기본 생성자? -> 매개변수 없음
//
//	base = 1; // 기본 값 1
//	exp = 1; // 기본값 1
//	value = pow(1, 1); // pow (base가 되는 숫자의 n 제곱 구함 1^1)
//}
//
//Exp::Exp(int base) { // 매개변수 1개 (base만)
//	this->base = base; // 포인터 base 설정
//	exp = 1; // 지수 1 
//	value = pow(base, 1); // 결과 = base^1 저장
//}
//
//Exp::Exp(int base, int exp) { // 매개변수 2개 (base, exp 지정)
//	this->base = base;
//	this->exp = exp;
//	value = pow(base, exp); // 결과 = base^exp 값 저장
//}
//
//int Exp::getValue() { // 계산된 value 값 리턴
//	return value;
//}
//
//int Exp::getBase() { // base 값 리턴
//	return base;
//}
//
//int Exp::getExp() { // exp 값 리턴
//	return exp;
//}
//
//bool Exp::equals(Exp other) { // Exp 클래스의 멤버 함수, 두 Exp 객체의 value 값이 동일한지 판별하는 bool 함수
//	if (this->value == other.value) // 객체this value 값과 매개변수 other 객체의 value 값이 동일한지 비교
//		return true;  // 값이 동일 true
//	else
//		return false; // 값이 다르면 false
//}
//
//int main() {
//	Exp a(3, 2); // 3의 2승 = 9. 베이스 3, 지수 2
//	Exp b(9); // 9의 1승 = 9. 베이스 9, 지수 1
//	Exp c; //1의 1승 = 1, 베이스 1, 지수 1
//
//	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
//	cout << "a의 베이스 " << a.getBase() << "," << "지수 " << a.getExp() << endl;
//
//	if (a.equals(b))
//		cout << "same" << endl;
//	else
//		cout << "not same" << endl;
//
//	return 0;
//}

#include <iostream>
using namespace std;

class Exp {
	int base;
	int exp;
	int value;
public:
	
	
	Exp(int base, int exp);
	Exp(int base);
	Exp();
	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp b);
};

Exp::Exp() {
	base = 1;
	exp = 1;
	value = 1;
}

Exp::Exp(int base) {
	this->base = base;
	exp = 1;
	value = pow(base, 1);
}

Exp::Exp(int base, int exp) {
	this -> base = base;
	this -> exp = exp;
	value = pow(base, exp);
}

int Exp::getValue() {
	return value;
}

int Exp::getBase() {
	return base;
}

int Exp::getExp() {
	return exp;
}

bool Exp::equals(Exp b) {
	if (this -> value == b.value)
		return true;
	else
		return false;
}




















int main() {
	Exp a(3, 2); // 3의 2승 = 9. 베이스 3, 지수 2
	Exp b(9); // 9의 1승 = 9. 베이스 9, 지수 1
	Exp c; //1의 1승 = 1, 베이스 1, 지수 1

	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << "a의 베이스 " << a.getBase() << "," << "지수 " << a.getExp() << endl;

	if (a.equals(b))
		cout << "same" << endl;
	else
		cout << "not same" << endl;

	return 0;
}