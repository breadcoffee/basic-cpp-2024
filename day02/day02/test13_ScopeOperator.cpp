#include <iostream>

using namespace std;

namespace AAA { // namespace �ȿ� namespace�� ������ �� ����
	namespace BBB {
		namespace CCC {
			int num1;
			int num2;
		}
	}
}

int val = 100; // ��������
int gloval = 200; // ��������

int SimpleFunc() {
	int val = 20; // ��������
	val += 3; // �������� val�� �� 3 ����
	::val += 7; // �������� val�� �� 7 ����

	return val;
}

int main() {
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;

	namespace ABC = AAA::BBB::CCC; // AAA::BBB::CCC�� ��Ī�� ABC�� �ٿ��� �� �ִ�.
	cout << "ABC num1�� �� " << ABC::num1 << endl;
	cout << "ABC num2�� �� " << ABC::num2 << endl;
	cout << endl;

	int gloval = 30;

	cout << "���������� val �� " << val << endl;
	cout << "SimpleFunc ���������� val �� " << SimpleFunc() << endl;
	cout << "gloval �� " << gloval << endl; // ���������� ���������� �̸��� ������ �� ���������� �켱��


	return 0;
}