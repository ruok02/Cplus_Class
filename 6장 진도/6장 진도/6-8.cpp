#include <iostream>
using namespace std;

class Person {
public:
	int money; // ��� ����
	void addMoney(int money) { // �Ű� ����
		this->money += money; // ��� ���� - �Ű� ����
	}

	static int sharedMoney; // ���� ��� ���� 
	static void addShared(int n) { // �Ű� ���� 
		sharedMoney += n; // ���� ���� ���� sharedMoney�� ����ؼ� this ������ ��� ����?
	}
};

//static ���� ����. ���� ������ ����
int Person::sharedMoney = 10;	// 10���� �ʱ�ȭ

int main() {
	Person han;
	han.money = 100;	// ��� ����
	han.sharedMoney = 200; // ���� ��� ���� ���� ? <- ���� 

	Person lee;
	lee.money = 150;
	lee.addMoney(200); // �Ű�����
	lee.addShared(200); // ���� ��� ���� <- ? 

	cout << han.money << ' ' << lee.money << endl;
	cout << han.sharedMoney << ' ' << lee.sharedMoney << endl;
}