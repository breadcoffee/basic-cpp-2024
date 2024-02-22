#include <iostream>

using namespace std;
int Adder(int num1 = 1, int num2 = 2, int num3 = 3); // 매개변수의 디폴트 값 지정은 함수의 선언부분에만 위치시켜야한다.

int main() {
	cout << Adder() << endl; // 3
	cout << Adder(5) << endl; // 7, 5는 num1에 들어가고 디폴트 값은 num2가 적용됨
	cout << Adder(3, 5) << endl; // 8, 지정값은 왼쪽부터 채워지고 남은 값은 디폴트값으로 출력됨
	cout << Adder(3, 5, 7) << endl; // 15

	return 0;
}

int Adder(int num1, int num2, int num3) {
	return num1 + num2 + num3;
}