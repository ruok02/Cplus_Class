#ifndef OVAL_H
#define OVAL_H

#include <iostream>
using namespace std;

class Oval {
private:
    int width;  // 타원의 너비
    int height; // 타원의 높이

public:
    // 너비와 높이를 1로 초기화하는 매개 변수 없는 생성자
    Oval();

    // 매개 변수가 있는 생성자: 주어진 너비와 높이로 초기화
    Oval(int width, int height);

    // 소멸자: 객체 소멸 시 너비와 높이를 출력
    ~Oval();

    // 타원의 너비를 리턴하는 getWidth() 함수 멤버
    int getWidth();

    // 타원의 높이를 리턴하는 getHeight() 함수 멤버
    int getHeight();

    // 타원의 너비와 높이를 변경하는 set(int w, int h) 함수 멤버
    void set(int w, int h);

    // 타원의 너비와 높이를 화면에 출력하는 show() 함수 멤버
    void show();
};

#endif
