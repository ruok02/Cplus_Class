#include <iostream>
#include <string>
using namespace std;

class Person {
	string name; // ��� ����
	string tel; // ��� ����
public:
	Person();
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel); // n�� t�� ����ϴ� ���� -> �Ű� ����
};


//// ������ ���� (Ŭ���� �ܺο��� ����)
Person::Person() {
	name = "";
	tel = "";
}

void Person::set(string name, string tel) {
	this->name = name;
	this->tel = tel;
}

int main() {
	Person* pArray = new Person[3];
	string name, tel;

	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "��� " << i + 1 << ">> ";
		cin >> name >> tel;
		pArray[i].set(name, tel);
		
	}

	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; i++) {
		cout << pArray[i].getName() << ' ';
	}
	cout << endl;

	cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>> ";
	string searchName;
	cin >> searchName;

	for (int i = 0; i < 3; i++) {
		if (searchName == pArray[i].getName()) {
			cout << "��ȭ��ȣ�� " << pArray[i].getTel() << endl;
		}
	}
	delete[] pArray;
}




//
//// �޼��� ���� (Ŭ���� �ܺο��� ����)
//void Person::set(string name, string tel) {
//	this-> name = name;  // ���� ������ ���� ���(this->������ ��� �����ѵ� ��� ������ �Ű� ������ �ϴ� �򰥸��ϱ� ���)
//	this-> tel = tel;
//}
//
//int main() {
//	Person* pArray = new Person[3]; //
//	string name, tel;
//
//	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ��� " << endl;	
//	for (int i = 0; i < 3; i++) {
//		cout << "��� " << i + 1<< ">> "; // �ε��� i 0���� �����ϹǷ� +1�� ���
//		cin >> name >> tel; // �̸��� ��ȭ��ȣ �Է¹ޱ�
//		pArray[i].set(name, tel); // set() �Լ��� ��ü �� ����
//	}
//
//	cout << "��� ����� �̸��� ";
//	for (int i = 0; i < 3; i++) {
//		cout << pArray[i].getName() << ' '; // getName()���� �̸� ���
//		}
//	cout << endl;
//	
//	// ��ȭ��ȣ �˻�
//	cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>> ";
//	string searchName; // �˻��� ���� �� �ǹ� ��Ȯ
//	cin >> searchName;
//
//	for (int i = 0; i < 3; i++) {
//		if (searchName == pArray[i].getName()) { // == ������ ���
//			cout << "��ȭ��ȣ�� " << pArray[i].getTel() << endl;
//			break;
//		}
//	}
//
//	delete[] pArray; // ���� �Ҵ� ����
//}
