#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	cout << "두 개의 숫자를 입력하시오 : ";
	cin >> num1 >> num2;

	cout << "num1 + num2 = " << num1 + num2 << endl;
	cout << "num1 - num2 = " << num1 - num2 << endl;
	cout << "num1 * num2 = " << num1 * num2 << endl;
	try {
		if (!num2) throw num2;
		cout << "num1 / num2 = " << num1 / num2 << endl;
	}
	catch (int exception) {
		cout << "0으로 나눌 수 없습니다." << endl;
	}

	return 0;
}