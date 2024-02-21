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

	cout << "두 개의 숫자를 입력하세요 > ";
	cin >> a >> b;

	cout << "연산자를 입력하세요 > ";
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
		cout << "잘못 입력했습니다" << endl;
	}

	return 0;
}