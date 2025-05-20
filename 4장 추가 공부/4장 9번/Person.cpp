#include <iostream>
#include <string>
using namespace std;

class Person {
	string name; // 멤버 변수
	string tel; // 멤버 변수
public:
	Person();
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel); // n과 t로 사용하는 이유 -> 매개 변수
};


//// 생성자 구현 (클래스 외부에서 정의)
Person::Person() {
	name = "";
	tel = "";
}

void Person::set(string name, string tel) {
	this->name = name;
	this->tel = tel;
}

int main() {
	Person* pArray = new Person[3];
	string name, tel;

	cout << "이름과 전화 번호를 입력해 주세요" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "사람 " << i + 1 << ">> ";
		cin >> name >> tel;
		pArray[i].set(name, tel);
		
	}

	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; i++) {
		cout << pArray[i].getName() << ' ';
	}
	cout << endl;

	cout << "전화번호 검색합니다. 이름을 입력하세요>> ";
	string searchName;
	cin >> searchName;

	for (int i = 0; i < 3; i++) {
		if (searchName == pArray[i].getName()) {
			cout << "전화번호는 " << pArray[i].getTel() << endl;
		}
	}
	delete[] pArray;
}




//
//// 메서드 구현 (클래스 외부에서 정의)
//void Person::set(string name, string tel) {
//	this-> name = name;  // 변수 구분을 위해 사용(this->포인터 사용 가능한데 멤버 변수와 매개 변수가 일단 헷갈리니깐 사용)
//	this-> tel = tel;
//}
//
//int main() {
//	Person* pArray = new Person[3]; //
//	string name, tel;
//
//	cout << "이름과 전화 번호를 입력해 주세요 " << endl;	
//	for (int i = 0; i < 3; i++) {
//		cout << "사람 " << i + 1<< ">> "; // 인덱스 i 0부터 시작하므로 +1로 출력
//		cin >> name >> tel; // 이름과 전화번호 입력받기
//		pArray[i].set(name, tel); // set() 함수로 객체 값 저장
//	}
//
//	cout << "모든 사람의 이름은 ";
//	for (int i = 0; i < 3; i++) {
//		cout << pArray[i].getName() << ' '; // getName()으로 이름 출력
//		}
//	cout << endl;
//	
//	// 전화번호 검색
//	cout << "전화번호 검색합니다. 이름을 입력하세요>> ";
//	string searchName; // 검색용 변수 → 의미 명확
//	cin >> searchName;
//
//	for (int i = 0; i < 3; i++) {
//		if (searchName == pArray[i].getName()) { // == 연산자 사용
//			cout << "전화번호는 " << pArray[i].getTel() << endl;
//			break;
//		}
//	}
//
//	delete[] pArray; // 동적 할당 삭제
//}
