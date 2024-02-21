#include <iostream>

int gloval = 100; // 글로벌 변수

void func() {
	int a;
	a = 100;
	gloval = 200;

	std::cout << "함수 호출 값: " << (a + gloval) << std::endl;
}

int main() {
	int num = 10; // 지역 변수
	std::cout << "Hello World!" << std::endl; // std::endl 는 줄바꿈

	int val1, val2;
	int result = 0;
	
	/*
	std::cout << "첫번째 숫자입력: ";
	std::cin >> val1;

	std::cout << "두번째 숫자입력: ";
	std::cin >> val2;

	int result = num + val1 + val2;
	std::cout << "덧셈결과: " << result << std::endl;
	*/

	std::cout << "두개의 숫자입력: ";
	std::cin >> val1 >> val2;	// 두 입력을 한번에 받기도 가능

	if (val1 < val2) {
		for (int i = val1 + 1; i < val2; i++) // for(초기식; 조건식; 증감식)
			result += i;
	}
	std::cout << "덧셈결과: " << result << std::endl;
	func();
	return 0;
}

// 지역변수 = 로컬변수 : 선언되어진 범위 안에서만 사용이 가능(static 영역에 저장)

/*
	제어문
	1. 선택제어문
		if, switch
	2. 반복제어문
		for, while
*/