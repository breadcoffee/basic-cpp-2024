#include <iostream>
using namespace std;

void cal(int _n1, int _n2) {
	if (!_n2) throw _n2;
	cout << "n1 + n2 = " << _n1 + _n2 << endl;
	cout << "n1 - n2 = " << _n1 - _n2 << endl;
	cout << "n1 * n2 = " << _n1 * _n2 << endl;
	cout << "n1 / n2 = " << _n1 / _n2 << endl;
}

int main() {
	int n1, n2;
	cout << "�� ���� ���ڸ� �Է��Ͻÿ� : ";
	cin >> n1 >> n2;
	
	try {
		cal(n1, n2);
	}
	catch (int exception) {
		cout << "0���� ���� �� �����ϴ�." << endl;
	}

	return 0;
}