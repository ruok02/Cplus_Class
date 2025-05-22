#include <iostream>
using namespace std;

class Person {
public:
	int money; // 멤버 변수
	void addMoney(int money) { // 매개 변수
		this->money += money; // 멤버 변수 - 매개 변수
	}

	static int sharedMoney; // 정적 멤버 변수 
	static void addShared(int n) { // 매개 변수 
		sharedMoney += n; // 위의 정적 변수 sharedMoney로 사용해서 this 포인터 사용 안함?
	}
};

//static 변수 생성. 전역 공간에 생성
int Person::sharedMoney = 10;	// 10으로 초기화

int main() {
	Person han;
	han.money = 100;	// 멤버 변수
	han.sharedMoney = 200; // 정적 멤버 변수 접근 ? <- 정적 

	Person lee;
	lee.money = 150;
	lee.addMoney(200); // 매개변수
	lee.addShared(200); // 정적 멤버 변수 <- ? 

	cout << han.money << ' ' << lee.money << endl;
	cout << han.sharedMoney << ' ' << lee.sharedMoney << endl;
}