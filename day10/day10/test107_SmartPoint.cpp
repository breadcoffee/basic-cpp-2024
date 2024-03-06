#include <iostream>
using namespace std;

class MyClass {
	int* ptr;
public:
	MyClass(int p) : ptr(new int[100]) {
		cout << "생성자 호출" << endl;
	}
	~MyClass() {
		cout << "소멸자 호출" << endl;
		delete[] ptr;
	}
};

int main() {
	MyClass* m1 = new MyClass(10);	// 소멸자가 호출이 안됨
	unique_ptr<MyClass> m2(new MyClass(20));	// 소멸자까지 호출됨(unique_ptr : 이미 정의된 스마트 포인터)

	return 0;
}