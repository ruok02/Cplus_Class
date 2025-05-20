#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[600];  // 텍스트의 최대 가능 개수
    int hist[26] = { 0 }; // 알파벳 히스토그램 초기화

    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n";
    cin.getline(text, 600);  // ';'를 제거하고 기본적으로 '\n'으로 종료

    int len = strlen(text);  // 문자열 길이 계산
    for (int i = 0; i < len; i++) {
        if (isalpha(text[i])) { // 알파벳만 처리
            char temp = tolower(text[i]); // 소문자로 변환
            hist[temp - 'a']++; // 'a'의 ASCII 값에 맞춰 인덱스에 증가 temp에서 h[0] = 1, h[1]= ... 이면 h['a'] - (뒤에 빼는 값) 하면 ASCII 값으로 0 ..."
        }
    }

    int sum = 0;
    for (int i = 0; i < 26; i++) {
        sum += hist[i]; // 총 알파벳 개수 계산
    }

    cout << "총 알파벳 수: " << sum << endl << endl;

    for (int i = 0; i < 26; i++) {
        if (hist[i] > 0) { // 빈도수가 0 이상인 알파벳만 출력 (이이걸 안넣었었음)
            cout << char('a' + i) << "(" << hist[i] << ")  : ";
            for (int j = 0; j < hist[i]; j++) {
                cout << '*'; // '*'은 알파벳 빈도만큼 출력
            }
            cout << endl; // 각 알파벳 히스토그램 끝에 줄바꿈
        }
    
}


