#include <iostream>

using namespace std;

void swap(int *a, int *b) {	// 주소를 받을 수 있는 포인터 변수로 선언
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
} // call-by-adderes

int main() {
	int a = 10;
	int b = 20;

	cout << "바꾸기 전" << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	
	swap(&a, &b);	// 변수의 주소를 전달

	cout << "바뀐 후" << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	return 0;
}