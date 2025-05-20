#include <iostream> 
using namespace std;

class PrivateAccessError {
private:
	int a;
	void f();
	PrivateAccessError();
public:
	int b;
	PrivateAccessError(int x);
	void g();
	int main() {

	}
};

PrivateAccessError::PrivateAccessError() {
	a = 1; 			// (1)
	b = 1; 			// (2)
}

PrivateAccessError::PrivateAccessError(int x) {
	a = x; 			// (3)
	b = x; 			// (4)
}

void PrivateAccessError::f() {
	a = 5; 			// (5)
	b = 5; 			// (6)
}

void PrivateAccessError::g() {
	a = 6; 			// (7)
	b = 6; 			// (8)
}

int main() {
	//PrivateAccessError objA;
	PrivateAccessError objB(100);
	//objB.a = 10;
	objB.b = 20;
	//objB.f();
	objB.g();
}