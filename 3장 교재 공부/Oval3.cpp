#include <iostream>
using namespace std;

#include "Oval2.h"

// ������

Oval::Oval() {
	width = 1;
	height = 1;
}

Oval::Oval(int width, int height) {
	this->width = width;
	this->height = height;
}

Oval::~Oval() {
	cout << "Oval �Ҹ� : width = " << width << ", height = " << height << endl;
}

int Oval::getWidth() {
	return width;
}

int Oval::getHeight() {
	return height;
}

void Oval::set(int w, int h) {
	width = w;
	height = h;
}

void Oval::show() {
	cout << "width = " << width << ", height = " << height << endl;

}

