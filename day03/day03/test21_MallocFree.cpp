#include <iostream>
#include <string.h>
#include <cstdlib> // ��� .h ��� �տ� c �־ ��밡��

//#define _CRT_SECURE_NO_WARNINGS

using namespace std;

char* MakeStrAdr(int len) {
	//char* str = (char*)malloc(sizeof(char) * len); // C:heap ������ �޸� �Ҵ�, 1*20byte ũ��� �޸��Ҵ�
	char* str = new char[len]; // new�� �Ҵ�� �޸� ������ ������ ����
	return str;
}

int main() {
	char* str = MakeStrAdr(20);
	strcpy(str, "I am happy~");
	cout << str << endl;
	//free(str);
	delete[] str;

	return 0;
}