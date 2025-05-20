#include <iostream>
using namespace std;

#include "Exp.h"

Exp::Exp() { // 기본 생성자? -> 매개변수 없음

	base = 1; // 기본 값 1
	exp = 1; // 기본값 1
	value = pow(1, 1); // pow (base가 되는 숫자의 n 제곱 구함 1^1)
}

Exp::Exp(int base) { // 매개변수 1개 (base만)
	this->base = base; // 포인터 base 설정
	exp = 1; // 지수 1 
	value = pow(base, 1); // 결과 = base^1 저장
}

Exp::Exp(int base, int exp) { // 매개변수 2개 (base, exp 지정)
	this->base = base; 
	this->exp = exp; 
	value = pow(base, exp); // 결과 = base^exp 값 저장
}

int Exp::getValue() { // 계산된 value 값 리턴
	return value; 
}

int Exp::getBase() { // base 값 리턴
	return base; 
}

int Exp::getExp() { // exp 값 리턴
	return exp; 
}

bool Exp::equals(Exp other) { // Exp 클래스의 멤버 함수, 두 Exp 객체의 value 값이 동일한지 판별하는 bool 함수
	if (this->value == other.value) // 객체this value 값과 매개변수 other 객체의 value 값이 동일한지 비교
		return true;  // 값이 동일 true
	else
		return false; // 값이 다르면 false
}
