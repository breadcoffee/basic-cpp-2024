#include <iostream>

using namespace std;

int main() {
	int num;

	cout << "숫자 하나를 입력하세요 > ";
	cin >> num;

	if (num == 3) {
		cout << "빙고" << endl;
	}
	else if(num > 3) {
		cout << "숫자가 큽니다" << endl;
	}
	else if (num < 3) {
		cout << "숫자가 작습니다" << endl;
	}
	else {
		cout << "잘못 입력했습니다" << endl;
	}
}