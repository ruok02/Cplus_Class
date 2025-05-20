#include <iostream>
#include <string>
using namespace std;

/* 단순히 문자 개수만 세고 싶을 때
int main() {
	string str;
	int cnt = 0;

	cout << "문자열 입력>> ";
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a') cnt++;
	}

	cout << "문자 a는 " << cnt << "개 있습니다." << endl;
}*/


//find() 함수로 문자열 찾기 - 해당 문자 어딨는지 찾고 싶을 때

int main() {
    string str;
    int cnt = 0;
    int index = -1;  // -1부터 시작해야 첫 글자도 확인됨

    cout << "문자열 입력>> ";
    getline(cin, str);

    cout << "a의 인덱스: ";
    while (true) {
        index = str.find('a', index + 1);  // 다음 위치부터 검색
        if (index == -1) break;

        cout << index << ' ';  // 인덱스 출력
        cnt++;
    }

    cout << "\n문자 a는 " << cnt << "개 있습니다." << endl;

    return 0;
}
