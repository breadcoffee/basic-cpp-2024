#include <iostream>

using namespace std;

int main() {
	const int num = 10;
	//int& ref = num; 상수화된 변수를 참조 불가능하다.
	const int& ref = num; // 이렇게하면 참조자를 통해 수를 변경하는 것이 불가능하기 때문에 성립
	// 즉 위에서 오류가 나는 이유는 참조가 불가능한 것이 아닌 const에서 에러가 난 것
	// 상수화된 변수도 변수이기에 참조 가능하다.

	//int& ref = 30; // 참조자는 상수를 참조 불가능하다.
	const int& ref = 30; // 30이 임시변수로 생성되어 참조가 가능하다.

	return 0;
}