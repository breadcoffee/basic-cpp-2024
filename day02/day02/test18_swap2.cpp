#include <iostream>

using namespace std;

void swap(int& a, int& b) {	// ���� ������ �Ű� ������ ���
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
} // call-by-reference

int main() {
	int a = 10;
	int b = 20;

	cout << "�ٲٱ� ��" << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	swap(a, b);	// ������ �ּҸ� ����

	cout << "�ٲ� ��" << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	return 0;
}