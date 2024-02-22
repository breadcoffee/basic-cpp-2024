#include <iostream>

using namespace std;

int main() {
	const int num = 10;	// num를 상수화시킨다.
	//num = 100; // num이 상수이므로 변경할 수 없다.

	int num1 = 10;
	int* pnum1;		// 포인터(주소) 변수 pnum1 선언
	pnum1 = &num1;	// 포인터 num1의 주소를 포인터변수 pnum1에 저장한다. & 은 주소연산자

	cout << "num1의 값 : " << num1 << endl;
	cout << "num1의 주소값 : " << &num1 << endl;	
	cout << "pnum1에 저장된 값: " << pnum1 << endl;	// num1의 주소값
	cout << "pnum1의 주소값 : " << &pnum1 << endl;	
	cout << "pnum1이 가리키는 값 : " << *pnum1 << endl;	// pnum에 들어있는 주소값(num1)의 값, *은 포인터 연산자

	return 0;
}