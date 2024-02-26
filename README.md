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
	- Overloading (함수 중복 정의)
		- 함수명이 같고 변수의 타입이나 개수갇 다른 함수를 허용
	- Overriding (함수 재정의)
		- 함수를 자식 클래스가 재정의할 수 있게 해주는 기능

## 2일차
- C++ 심화문법
	- DefaultValue
		- 함수 선언 시 매개변수의 기본값 지정
		- int Adder(int num1 = 1, int num2 = 2)
		
	- Inline 함수
		- inline int SQUARE(int x) {return x * x;}
		- inline 함수 호출 시 그 자리에 인라인 함수 코드 자체가 안으로 들어간다.

	- NameSpace
		- 서로 같은 이름의 함수를 정의할 때 구분짓기 위해 사용
	
	- 일반 변수
		- int num = 10;
		- 일반 변수는 값을 저장한다.
		- call by value : 값에 의한 전달
		
	- 포인터 변수
		- int* pnum1;
		- 포인터는 다른 변수를 가르킨다.
		- call by address : 주소에 의한 전달
		
	- 참조자 변수
		- int& rnum = num;
		- 참조자는 변수에 대해서만 선언이 가능하다.
		- call by reference : 참조에 의한 전달
		
## 3일차
- C++ 표준함수
	- new
		- heap 영역에 메모리를 할당하고 그 주소를 리턴한다.
	- delete
		- heap 영역에 사용하지 메모리를 반환한다.

- 객체지향 프로그래밍	
	- 클래스
		- 멤버 변수와 멤버 함수로 구성된다.
		- 클래스 내부에는 멤버들의 선언으로 작성된다.
		- 멤버함수의 정의를 외부로 빼낸다.( 스코프 연산자 사용 ::)
		- 일반적으로 멤버변수는 private, 멤버함수는 public으로 설정하여 접근제한을 설정한다.
		- 접근제어 지시자(접근제어 레이블)
			- public : 어디서든 접근허용
			- protected : 상속관계에 놓여있을때, 유도 클래스에서의 접근허용
			- private : 클래느 내(클래스 내에 정의된 함수)에서만 접근허용
	
	- 구조체와 클래스의 차이
		- struct 구조체와는 메모리 영역이 다름, 구조체는 스택 영역, 클래스는 힙 영역이다.
		- 구조체는 속도가 빠르고 클래스는 메모리 절약이 좋음
		- 클래스는 인스턴스를 할당할떄 마다 힙에 메모리를 할당하기에 가비지 컬렉션이 필요하다.
	
	- 파일 분할
		- 헤더파일(선언), 멤버함수(정의), 메인함수 등으로 파일 분리
	
## 4일차
- 클래스 심화
	- 클래스 기반 두가지 객체생성 방법
		- 일반적인 변수의 선언 방식 -> ClassName objName;
		- 동적 할당방식	-> ClassName* ptrObj = new ClassName;
		
	- 정보은닉
		- 구체적인 정보를 노출시키지 않도록 하는 기법
		- 결합도를 약화시켜 코드의 수정, 추가, 교체가 용이하도록 하는 것
		- C++에서 정보 은닉은 private 접근 제어자를 사용하여 구현된다.
		- 클래스 내에서 private으로 선언된 멤버 변수와 멤버 함수는 클래스 외부에서 직접 접근할 수 없고 클래스 내부에서만 사용할 수 있다.
 
		- Getter & Setter
```C++
	class MyClass {
	private:
		int myData; // private 멤버 변수

	public:
		void setData(int data) { // public 멤버 함수
			myData = data;
		}

		int getData() { // public 멤버 함수
			return myData;
		}
	};
```
		
	- 캡슐화
		- 객체의 속성과 행위를 하나로 묶어 추상화와 재사용의 단위가 된다.
		- 객체 요소로의 접근을 제한을 통해 실제 구현 내용 일부를 감추는 것이다.
		- C++에서 캡슐화는 클래스를 사용하여 객체를 생성하고, 객체의 멤버 변수와 멤버 함수를 함께 묶어 캡슐 안에 담는 것을 의미한다. 
		- 외부에서는 캡슐의 내부 구조를 알 수 없고 오직 public으로 선언된 멤버 함수를 통해서만 객체와 상호 작용할 수 있다.
		
		- 생성자 & 소멸자
```C++
	MyClass obj;
	obj.setData(10);
	int value = obj.getData();
```