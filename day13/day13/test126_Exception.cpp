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
	cout << "두 개의 숫자를 입력하시오 : ";
	cin >> n1 >> n2;
	
	try {
		cal(n1, n2);
	}
	catch (int exception) {
		cout << "0으로 나눌 수 없습니다." << endl;
	}

	return 0;
}