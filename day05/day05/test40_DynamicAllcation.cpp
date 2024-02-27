#include <iostream>
#include <cstring>
using namespace std;

int main() {
	cout << "int size: " << sizeof(int) << endl;
	int* pi = new int;	// new�����ڸ� ���� heap������ int(4byte)ũ�⸸ŭ �Ҵ�
						// �Ҵ���� ũ�⸸ŭ �ּҸ� ���Ͻ�����
	*pi = 10;
	cout << "pi�� ����Ű�� ���� ����� ��: " << *pi << endl;

	delete pi;			// �����Ҵ���� �޸� ������ ��ȯ�Ѵ�.

	int* pary = new int[10];	// �޸��Ҵ��� �迭�� ���·� �Ҵ����
	for (int i = 0; i < sizeof(pary); i++) {	// sizeof(pary): ������ ���� ��ü�� ũ��� 8byte
		pary[i] = i + 10;
		printf("pary[%d] = %d\n", i, pary[i]);
	}

	delete[] pary;

	return 0;
}