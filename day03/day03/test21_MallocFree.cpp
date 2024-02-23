#include <iostream>
#include <string.h>
#include <cstdlib> // 헤더 .h 대신 앞에 c 넣어서 사용가능

//#define _CRT_SECURE_NO_WARNINGS

using namespace std;

char* MakeStrAdr(int len) {
	//char* str = (char*)malloc(sizeof(char) * len); // C:heap 영역에 메모리 할당, 1*20byte 크기로 메모리할당
	char* str = new char[len]; // new로 할당된 메모리 공간도 변수로 간주
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