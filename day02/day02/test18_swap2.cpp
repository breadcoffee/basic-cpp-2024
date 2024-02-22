#include <iostream>

using namespace std;

void swap(int& a, int& b) {	// 참조 변수를 매개 변수로 사용
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
} // call-by-reference

int main() {
	int a = 10;
	int b = 20;

	cout << "바꾸기 전" << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	swap(a, b);	// 변수의 주소를 전달

	cout << "바뀐 후" << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	return 0;
}