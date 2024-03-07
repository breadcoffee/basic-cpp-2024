#include <iostream>

using namespace std;

namespace AAA { // namespace 안에 namespace를 선언할 수 있음
	namespace BBB {
		namespace CCC {
			int num1;
			int num2;
		}
	}
}

int val = 100; // 전역변수
int gloval = 200; // 전역변수

int SimpleFunc() {
	int val = 20; // 지역변수
	val += 3; // 지역변수 val의 값 3 증가
	::val += 7; // 전역변수 val의 값 7 증가

	return val;
}

int main() {
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;

	namespace ABC = AAA::BBB::CCC; // AAA::BBB::CCC의 별칭을 ABC로 붙여줄 수 있다.
	cout << "ABC num1의 값 " << ABC::num1 << endl;
	cout << "ABC num2의 값 " << ABC::num2 << endl;
	cout << endl;

	int gloval = 30;

	cout << "전역변수의 val 값 " << val << endl;
	cout << "SimpleFunc 지역변수의 val 값 " << SimpleFunc() << endl;
	cout << "gloval 값 " << gloval << endl; // 지역변수와 전역변수의 이름이 동일할 시 지역변수가 우선됨


	return 0;
}