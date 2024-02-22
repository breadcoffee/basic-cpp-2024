#include <iostream>

using namespace std;

int main() {
	int num = 10;	// 지역 변수 선언
	cout << "num : " << num << endl;

	int* pnum = &num;	// 주소로 num변수에 접근
	int& rnum = num;	// 참조로 num변수에 접근

	/*
	int num = 10; // 일반적인 변수선언
	int* ptr = &num1 // 포인터
	int& num2 = num1; // 참조 변수선언, 다른 객체나 값에 대한 별명으로 생각
		
		참조형 변수는 선언과 동시에 초기화되어야 하고,
		null로 초기화하거나 참조를 변경할 수 없으므로,
		포인터보다 안전하게 취급받는다.
	*/

	num = 20;
	cout << endl;
	cout << "num = 20 으로 변경" << endl;
	cout << "num : " << num << endl;
	cout << "*pnum : " << *pnum << endl;
	cout << "rnum : " << rnum << endl;

	*pnum = 30;
	cout << endl;
	cout << "*pnum = 30 으로 변경" << endl;
	cout << "num : " << num << endl;
	cout << "*pnum : " << *pnum << endl;
	cout << "rnum : " << rnum << endl;

	rnum = 40;
	cout << endl;
	cout << "rnum = 40 으로 변경" << endl;
	cout << "num : " << num << endl;
	cout << "*pnum : " << *pnum << endl;
	cout << "rnum : " << rnum << endl;

	cout << endl;
	cout << "주소값" << endl;
	cout << "num : " << &num << endl;
	cout << "pnum : " << &pnum << endl;		// 포인터의 주소값
	cout << "*pnum : " << &*pnum << endl;	// 포인터가 가르키는 주소값
	cout << "rnum : " << &rnum << endl;

	return 0;
}