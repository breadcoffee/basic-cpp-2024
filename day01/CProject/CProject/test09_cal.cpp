#include <iostream>

using namespace std;

void add(float a, float b) {
	cout << (a + b) << endl;
}

void sub(float a, float b) {
	cout << (a - b) << endl;
}

void div(float a, float b) {
	cout << (a / b) << endl;
}

void mul(float a, float b) {
	cout << (a * b) << endl;
}

int main() {
	float a, b;
	char op;

	cout << "�� ���� ���ڸ� �Է��ϼ��� > ";
	cin >> a >> b;

	cout << "�����ڸ� �Է��ϼ��� > ";
	cin >> op;

	switch (op) {
	case '+':
		add(a, b);
		break;
	case '-':
		sub(a, b);
		break;
	case '/':
		div(a, b);
		break;
	case '*':
		mul(a, b);
		break;
	default:
		cout << "�߸� �Է��߽��ϴ�" << endl;
	}

	return 0;
}