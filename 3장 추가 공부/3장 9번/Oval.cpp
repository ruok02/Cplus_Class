#include <iostream>
using namespace std;

#include "Oval.h"

// 기본 생성자: 너비와 높이를 1로 초기화
Oval::Oval() {
    width = 1;
    height = 1;
}

// 매개변수가 있는 생성자: 주어진 너비와 높이로 초기화
Oval::Oval(int width, int height) {
    this->width = width;
    this->height = height;
}

// 소멸자: 객체 소멸 시 메시지 출력
Oval::~Oval() {
    cout << "Oval 소멸 : width = " << width << ", height = " << height << endl;
}

// 너비를 반환하는 함수
int Oval::getWidth() {
    return width;
}

// 높이를 반환하는 함수
int Oval::getHeight() {
    return height;
}

// 너비와 높이를 설정하는 함수
void Oval::set(int w, int h) {
    width = w;
    height = h;
}

// 너비와 높이를 출력하는 함수
void Oval::show() {
    cout << "width = " << width << ", height = " << height << endl;
}
