#include <iostream>

using namespace std;
int Adder(int num1 = 1, int num2 = 2, int num3 = 3); // �Ű������� ����Ʈ �� ������ �Լ��� ����κп��� ��ġ���Ѿ��Ѵ�.

int main() {
	cout << Adder() << endl; // 3
	cout << Adder(5) << endl; // 7, 5�� num1�� ���� ����Ʈ ���� num2�� �����
	cout << Adder(3, 5) << endl; // 8, �������� ���ʺ��� ä������ ���� ���� ����Ʈ������ ��µ�
	cout << Adder(3, 5, 7) << endl; // 15

	return 0;
}

int Adder(int num1, int num2, int num3) {
	return num1 + num2 + num3;
}