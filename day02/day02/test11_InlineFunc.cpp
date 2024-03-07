#include <iostream>
// #define SQUARE(x) ((x)*(x)) // 매크로 함수는 정의하는데 한계가 있다.

using namespace std;
template <typename T>

inline T SQUARE(T x) {
	return x * x;
}

//inline int SQUARE(int x) {
//	return x * x;
//}

int main() {
	cout << SQUARE(5) << endl; 
	cout << SQUARE(3.15) << endl; // 9, 인라인 형태로 정의하면 타입 지정이 가능하여 소수점이 사라짐
	// 하지만 C++의 template 함수를 이용하면 자료에 의존적이지 않은 함수도 지정할 수 있다.
	return 0;
}