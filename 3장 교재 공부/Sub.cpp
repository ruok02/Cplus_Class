#include "SUB.H"

void Sub::setValue(int x, int y) {
	a = x;
	b = y;
}

int Sub::calculator() {
	return a - b;
}