#include <iostream>
#include <cstdlib>
using namespace std;

class BoundCheckIntArray {
private:
	int* arr;
	int arrlen;
public:
	BoundCheckIntArray(int len) : arrlen(len) {
		cout << "생성자 호출" << endl;
		arr = new int[len];
	}
	int& operator[] (int idx) {
		cout << "연산자 함수 호출" << endl;
		if (idx < 0 || idx >= arrlen) {
			cout << "Array index out of bound exception" << endl;
			BoundCheckIntArray::~BoundCheckIntArray();	// 예외처리 부분에 정상적으로 소멸자를 호출
			exit(1);
		}
		return arr[idx];
	}
	~BoundCheckIntArray() {
		cout << "소멸자 호출" << endl;
		delete[] arr;
	}
};

int main() {
	BoundCheckIntArray arr(5);
	for (int i = 0; i < 5; i++)
		arr[i] = (i + 1) * 11;
	for (int i = 0; i < 6; i++)	// 배열의 크기를 넘어 예외가 호출되면 소멸자가 호출이 되지 않음
		cout << arr[i] << endl;

	return 0;
}