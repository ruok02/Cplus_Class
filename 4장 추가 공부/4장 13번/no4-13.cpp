#include <iostream> 
#include <string>
using namespace std;

// class 생성
class Histogram {
	string str; // 문자열 멤버 변수
public:
	Histogram(string str); // 생성자, 문자열  초기화
	void put(string str); // 문자열 추가 함수
	void putc(char ch); // 문자 하나 추가 함수
	void print(); // 출력
};

// 생성자: 초기 문자열
Histogram::Histogram(string str) {
	this->str = str;
}
// 문자열 추가: 줄바꾸고 문자안에 추가 문자열 더하기
void Histogram::put(string str) {
	// 이전 문자열이 비어있지 않고,
	// 마지막 문자가 알파벳이거나 공백이면 줄바꿈 추가
	// 마지막이 줄바꿈이거나 구두점 등 특수문자일 경우는 줄바꿈 생략
	if (!this->str.empty()) {
		char last = this->str.back();
		if (last == '\n') {
			// 줄바꿈이면 그대로 (추가 안 해도 됨)
		}
		else if (isalnum(last) || last == ' ') {
			this->str += "\n";
		}
	}
	this->str += str;
}

// 문자 하나 추가
void Histogram::putc(char ch) {
	this->str += ch;
}

// 히스토그램 출력 함수
void Histogram::print() {
	int total = 0; // 총 알파벳 수
	int num[26] = { 0, }; // 알파벳 빈도 저장 배열(a~z)
	cout << str << endl << endl; // 저장된 전체 문자열 출력

	for (int i = 0; i < str.size(); i++) { 
		if (isalpha(str[i])) { // isalpha 함수 사용
			total++; // 총 알파벳 수 증가
			num[tolower(str[i]) - 'a'] += 1; // 소문자로 바꾸고 인덱스 계산
		}
	}
	cout << "총 알파벳 수 " << total << endl << endl;

	// 알파벳별 숫자 출력
	for (int i = 0; i < 26; i++) {
		char c = 'a' + i; // 알파벳 문자 생성
		cout << c << " (" << num[i] << ")\t: ";
		for (int j = 0; j < num[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}
}


int main(void) {

	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();

	return 0;
}