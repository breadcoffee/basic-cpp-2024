#include <iostream>

using namespace std;

int main() {
	int num = 10;	// ���� ���� ����
	cout << "num : " << num << endl;

	int* pnum = &num;	// �ּҷ� num������ ����
	int& rnum = num;	// ������ num������ ����

	/*
	int num = 10; // �Ϲ����� ��������
	int* ptr = &num1 // ������
	int& num2 = num1; // ���� ��������, �ٸ� ��ü�� ���� ���� �������� ����
		
		������ ������ ����� ���ÿ� �ʱ�ȭ�Ǿ�� �ϰ�,
		null�� �ʱ�ȭ�ϰų� ������ ������ �� �����Ƿ�,
		�����ͺ��� �����ϰ� ��޹޴´�.
	*/

	num = 20;
	cout << endl;
	cout << "num = 20 ���� ����" << endl;
	cout << "num : " << num << endl;
	cout << "*pnum : " << *pnum << endl;
	cout << "rnum : " << rnum << endl;

	*pnum = 30;
	cout << endl;
	cout << "*pnum = 30 ���� ����" << endl;
	cout << "num : " << num << endl;
	cout << "*pnum : " << *pnum << endl;
	cout << "rnum : " << rnum << endl;

	rnum = 40;
	cout << endl;
	cout << "rnum = 40 ���� ����" << endl;
	cout << "num : " << num << endl;
	cout << "*pnum : " << *pnum << endl;
	cout << "rnum : " << rnum << endl;

	cout << endl;
	cout << "�ּҰ�" << endl;
	cout << "num : " << &num << endl;
	cout << "pnum : " << &pnum << endl;		// �������� �ּҰ�
	cout << "*pnum : " << &*pnum << endl;	// �����Ͱ� ����Ű�� �ּҰ�
	cout << "rnum : " << &rnum << endl;

	return 0;
}