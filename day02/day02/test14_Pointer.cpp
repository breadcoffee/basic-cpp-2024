#include <iostream>

using namespace std;

int main() {
	const int num = 10;	// num�� ���ȭ��Ų��.
	//num = 100; // num�� ����̹Ƿ� ������ �� ����.

	int num1 = 10;
	int* pnum1;		// ������(�ּ�) ���� pnum1 ����
	pnum1 = &num1;	// ������ num1�� �ּҸ� �����ͺ��� pnum1�� �����Ѵ�. & �� �ּҿ�����

	cout << "num1�� �� : " << num1 << endl;
	cout << "num1�� �ּҰ� : " << &num1 << endl;	
	cout << "pnum1�� ����� ��: " << pnum1 << endl;	// num1�� �ּҰ�
	cout << "pnum1�� �ּҰ� : " << &pnum1 << endl;	
	cout << "pnum1�� ����Ű�� �� : " << *pnum1 << endl;	// pnum�� ����ִ� �ּҰ�(num1)�� ��, *�� ������ ������

	return 0;
}