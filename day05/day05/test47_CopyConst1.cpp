#include <iostream>
using namespace std;

class A {
public:
	A() {
		cout << "디폴트 생성자 호출" << endl;
	}
	A(int n) {
		cout << "A(int n) 생성자 호출" << endl;
	}
	A(const A& r) {	// 복사 생성자
		cout << "A(const A& r) 생성자 호출" << endl;
	}
};

int main() {
	A obj1;			// 디폴트 생성자로 객체 생성
	A obj2(10);		// 매개변수가 하나인 생성자 호출
	A obj3(obj2);	// 복사 생성자 호출

	return 0;
}