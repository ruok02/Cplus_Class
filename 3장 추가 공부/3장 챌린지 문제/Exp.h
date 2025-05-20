#ifndef EXP_H
#define EXP_H

class Exp {
	int base; // 베이스
	int exp; // 지수
	int value; // 결과 값
public:
	Exp();
	Exp(int base);
	Exp(int base, int exp);
	int getValue(); // 지수를 정수로 계산하여 리턴
	int getBase(); // 베이스 값 리턴
	int getExp(); // 지수 값 리턴
	bool equals(Exp other); // 이 객체와 객체 b의 값이 같은지 판별하여 리턴
};

#endif
