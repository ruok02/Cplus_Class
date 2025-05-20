#include <iostream> 
#include <string>
using namespace std;

// class ����
class Histogram {
	string str; // ���ڿ� ��� ����
public:
	Histogram(string str); // ������, ���ڿ�  �ʱ�ȭ
	void put(string str); // ���ڿ� �߰� �Լ�
	void putc(char ch); // ���� �ϳ� �߰� �Լ�
	void print(); // ���
};

// ������: �ʱ� ���ڿ�
Histogram::Histogram(string str) {
	this->str = str;
}
// ���ڿ� �߰�: �ٹٲٰ� ���ھȿ� �߰� ���ڿ� ���ϱ�
void Histogram::put(string str) {
	// ���� ���ڿ��� ������� �ʰ�,
	// ������ ���ڰ� ���ĺ��̰ų� �����̸� �ٹٲ� �߰�
	// �������� �ٹٲ��̰ų� ������ �� Ư�������� ���� �ٹٲ� ����
	if (!this->str.empty()) {
		char last = this->str.back();
		if (last == '\n') {
			// �ٹٲ��̸� �״�� (�߰� �� �ص� ��)
		}
		else if (isalnum(last) || last == ' ') {
			this->str += "\n";
		}
	}
	this->str += str;
}

// ���� �ϳ� �߰�
void Histogram::putc(char ch) {
	this->str += ch;
}

// ������׷� ��� �Լ�
void Histogram::print() {
	int total = 0; // �� ���ĺ� ��
	int num[26] = { 0, }; // ���ĺ� �� ���� �迭(a~z)
	cout << str << endl << endl; // ����� ��ü ���ڿ� ���

	for (int i = 0; i < str.size(); i++) { 
		if (isalpha(str[i])) { // isalpha �Լ� ���
			total++; // �� ���ĺ� �� ����
			num[tolower(str[i]) - 'a'] += 1; // �ҹ��ڷ� �ٲٰ� �ε��� ���
		}
	}
	cout << "�� ���ĺ� �� " << total << endl << endl;

	// ���ĺ��� ���� ���
	for (int i = 0; i < 26; i++) {
		char c = 'a' + i; // ���ĺ� ���� ����
		cout << c << " (" << num[i] << ")\t: ";
		for (int j = 0; j < num[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}
}


int main(void) {

	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();

	return 0;
}