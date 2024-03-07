#include <iostream>
#include <cstring>
using namespace std;

int main() {
	cout << "int size: " << sizeof(int) << endl;
	int* pi = new int;	// new연산자를 통해 heap영역에 int(4byte)크기만큼 할당
						// 할당받은 크기만큼 주소를 리턴시켜줌
	*pi = 10;
	cout << "pi가 가리키는 곳에 저장된 값: " << *pi << endl;

	delete pi;			// 동적할당받은 메모리 공간을 반환한다.

	int* pary = new int[10];	// 메모리할당을 배열의 형태로 할당받음
	for (int i = 0; i < sizeof(pary); i++) {	// sizeof(pary): 포인터 변수 자체의 크기는 8byte
		pary[i] = i + 10;
		printf("pary[%d] = %d\n", i, pary[i]);
	}

	delete[] pary;

	return 0;
}