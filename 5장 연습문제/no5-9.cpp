#include <iostream>
using namespace std;
class Accmulator {
    int value;
public:
    Accmulator(int value); // 매개 변수 value로 멤버 value를 초기화한다.
    Accmulator& add(int n); // value에 n을 더해 값을 누적한다.
    int get(); // 누적된 값 value 리턴 여기에 return value 사용해도 됨
};

Accmulator::Accmulator(int value) {
    this->value = value;
}

Accmulator& Accmulator::add(int n) {
    value += n;
    return *this;
}

int Accmulator::get() {
    return value;
}

int main() {
    Accmulator acc(10);
    acc.add(5).add(6).add(7); // acc의 value 멤버가 28이 된다.
    cout << acc.get();// 28 출력
}