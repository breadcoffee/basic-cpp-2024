#include <iostream>

using namespace std;

int& RefRetFuncOne(int& ref) { // 반환형이 참조형인 경우
	ref++;
	return ref;
}
int RefRetFuncTwo(int& ref) { // 반환형이 상수인 경우
	ref++;
	return ref;
}
int& RefRetFuncThree(int ref) { // 반환형이 참조형인 경우
	int num = ref;
	return num;  // 반환값이 지역변수, 값이 안넘어감
}

int main() {
	int num1 = 1;
	int& num2 = RefRetFuncOne(num1);

	num1 += 1;
	num2 += 2;

	cout << "num2가 참조인 경우 함수가 참조형인 경우"  << endl;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	cout << endl;

	int num3 = 1;
	int num4 = RefRetFuncOne(num3);

	num3 += 1;
	num4 += 100;

	cout << "num4가 기본형이고 함수가 참조형인 경우" << endl;
	cout << "num3: " << num3 << endl;
	cout << "num4: " << num4 << endl;
	cout << endl;

	int num5 = 1;
	int num6 = RefRetFuncTwo(num5);
	//int& num6 = RefRetFuncTwo(num5); 기본자료형으로 선언된 Ref..Two는 반환값이 상수여서 참조형이 불가능

	num5 += 1;
	num6 += 100;

	cout << "num6가 기본형이고 함수가 상수형인 경우" << endl;
	cout << "num5: " << num5 << endl;
	cout << "num6: " << num6 << endl;
	cout << endl;

	int& ref = RefRetFuncThree(10); // 반환값이 지역변수로 쓰레기값이 들어있음

	cout << "함수가 참조형이지만 함수의 지역변수를 받음" << endl;
	cout << "ref: " << ref << endl;
	
	return 0;
}