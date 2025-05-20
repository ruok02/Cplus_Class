#ifndef Oval2_H
#define Oval2_H

class Oval {
private:
	int width;
	int height; // 멤버 변수
public:
	Oval(); // 기본 생성자

	Oval(int width, int height); // 매개 변수 있는 생성자

	~Oval();

	int getWidth();
	int getHeight();

	void set(int width, int height);// 변수 멤버
	void show();

};

#endif