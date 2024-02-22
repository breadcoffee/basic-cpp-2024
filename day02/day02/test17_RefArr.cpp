#include <iostream>

using namespace std;

int main() {
	// 참조자는 변수에 대해서만 선언이 가능하다
	
	//int& ref = 20;	(X)
	//int& ref;			(X)
	//int& ref = NULL:	(X)

	// 위에서 말한 변수의 범위에는 배열도 포함한다.

	int arr[3] = { 1, 3, 5 };

	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];

	cout << "배열 참조자" << endl;
	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;

	cout << endl;
	// 포인터도 변수이기때문에 참조자의 선언이다.
	int num = 12;
	int* ptr = &num;
	int** dptr = &ptr;

	int& ref = num;
	int* (&pref) = ptr;
	int** (&dpref) = dptr;

	cout << "포인터 참조자" << endl;
	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;

	return 0;
}