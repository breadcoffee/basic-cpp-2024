#include <iostream>

using namespace std;

int main() {
	// �����ڴ� ������ ���ؼ��� ������ �����ϴ�
	
	//int& ref = 20;	(X)
	//int& ref;			(X)
	//int& ref = NULL:	(X)

	// ������ ���� ������ �������� �迭�� �����Ѵ�.

	int arr[3] = { 1, 3, 5 };

	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];

	cout << "�迭 ������" << endl;
	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;

	cout << endl;
	// �����͵� �����̱⶧���� �������� �����̴�.
	int num = 12;
	int* ptr = &num;
	int** dptr = &ptr;

	int& ref = num;
	int* (&pref) = ptr;
	int** (&dpref) = dptr;

	cout << "������ ������" << endl;
	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;

	return 0;
}