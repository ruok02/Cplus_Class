#include <iostream>
using namespace std;

class Person {
	int id;
	double weight;	// 2-2번일 경우 double weight = 20.5 선언
	string name;
public:
	// 2-1번
	Person() {
		id = 1;
		name = "grace";
		weight = 20.5;
	};
	Person(int id, string name) {
		this->id = id;
		this->name = name;
		weight = 20.5;
	};
	Person(int id, string name, double weight) {
		this->id = id;
		this->name = name;
		this->weight = weight;
	};
	// 2-2번
	/*Person(int id = 1, string name = "grace", double weight = 20.5)
	{
		this->id = id;
		this->weight = weight;
		this->name = name;
	};

	Person(int id, string name , double weight) {
		this->id = id;
		this->weight = weight;
		this->name = name;
	}*/
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};



int main() {
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
}