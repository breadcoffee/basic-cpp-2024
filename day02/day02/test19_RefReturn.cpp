#include <iostream>

using namespace std;

int& RefRetFuncOne(int& ref) { // ��ȯ���� �������� ���
	ref++;
	return ref;
}
int RefRetFuncTwo(int& ref) { // ��ȯ���� ����� ���
	ref++;
	return ref;
}
int& RefRetFuncThree(int ref) { // ��ȯ���� �������� ���
	int num = ref;
	return num;  // ��ȯ���� ��������, ���� �ȳѾ
}

int main() {
	int num1 = 1;
	int& num2 = RefRetFuncOne(num1);

	num1 += 1;
	num2 += 2;

	cout << "num2�� ������ ��� �Լ��� �������� ���"  << endl;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	cout << endl;

	int num3 = 1;
	int num4 = RefRetFuncOne(num3);

	num3 += 1;
	num4 += 100;

	cout << "num4�� �⺻���̰� �Լ��� �������� ���" << endl;
	cout << "num3: " << num3 << endl;
	cout << "num4: " << num4 << endl;
	cout << endl;

	int num5 = 1;
	int num6 = RefRetFuncTwo(num5);
	//int& num6 = RefRetFuncTwo(num5); �⺻�ڷ������� ����� Ref..Two�� ��ȯ���� ������� �������� �Ұ���

	num5 += 1;
	num6 += 100;

	cout << "num6�� �⺻���̰� �Լ��� ������� ���" << endl;
	cout << "num5: " << num5 << endl;
	cout << "num6: " << num6 << endl;
	cout << endl;

	int& ref = RefRetFuncThree(10); // ��ȯ���� ���������� �����Ⱚ�� �������

	cout << "�Լ��� ������������ �Լ��� ���������� ����" << endl;
	cout << "ref: " << ref << endl;
	
	return 0;
}