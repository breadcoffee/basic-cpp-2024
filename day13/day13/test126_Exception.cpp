#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	cout << "�� ���� ���ڸ� �Է��Ͻÿ� : ";
	cin >> num1 >> num2;

	cout << "num1 + num2 = " << num1 + num2 << endl;
	cout << "num1 - num2 = " << num1 - num2 << endl;
	cout << "num1 * num2 = " << num1 * num2 << endl;
	try {
		if (!num2) throw num2;
		cout << "num1 / num2 = " << num1 / num2 << endl;
	}
	catch (int exception) {
		cout << "0���� ���� �� �����ϴ�." << endl;
	}

	return 0;
}