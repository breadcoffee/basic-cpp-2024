# 심화 프로그래밍 2024
부경대 2024 IoT 개발자 과정 심화 프로그래밍 언어 학습리포지토리

## 1일차
- 개발환경 설치
	- Visual Studio 2022 Community 설치
	- C, C++ 소스코드 실행

- C++ 기본문법	
	- 선택제어문
		- if
		- switch case
	- 반복제어문
		- for
		- while
	- 함수 Overloading

## 2일차
- C++ 심화문법
	- DefaultValue
		- 함수 선언 시 매개변수의 기본값 지정
		- int Adder(int num1 = 1, int num2 = 2)
		
	- Inline 함수
		- inline int SQUARE(int x) {return x * x;}
		- inline 함수 호출 시 그 자리에 인라인 함수 코드 자체가 안으로 들어간다.
		```c+
			#include <iostream>

			inline void PrintHello() {
				cout << "Hello, World" << endl;
			}

			int main() {
				PrintHello();
				PrintHello();
				return 0;
			}
			
			#include <iostream>

			int main() {
				cout << "Hello, World" << endl;
				cout << "Hello, World" << endl;
				return 0;
			}
		```
	- NameSpace
		- 서로 같은 이름의 함수를 정의할 때 구분짓기 위해 사용
	
	- 일반 변수
		- int num = 10;
		- 일반 변수는 값을 저장한다.
	- 포인터 변수
		- int* pnum1;
		- 포인터는 다른 변수를 가르킨다.
	- 참조자 변수
		- int& rnum = num;
		- 참조자는 변수에 대해서만 선언이 가능하다.
		
## 3일차
- C++ 표준함수
	- new
		- heap 영역에 데이터를 저장하는 공간을 생성한다.
	- delete
		- heap 영역에 비어있는 공간을 반환한다.
	
- 클래스
	- enum