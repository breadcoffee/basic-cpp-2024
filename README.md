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
- 객체 지향 프로그래밍
	- 클래스 기반 두가지 객체생성 방법
		- 일반적인 변수의 선언 방식 -> ClassName objName;
		- 동적 할당방식	-> ClassName* ptrObj = new ClassName;
		
	- 정보은닉
		- 구체적인 정보를 노출시키지 않도록 하는 기법
		- 결합도를 약화시켜 코드의 수정, 추가, 교체가 용이하도록 하는 것
		- C++에서 정보 은닉은 private 접근 제어자를 사용하여 구현된다.
		- 클래스 내에서 private으로 선언된 멤버 변수와 멤버 함수는 클래스 외부에서 직접 접근할 수 없고 클래스 내부에서만 사용할 수 있다.
		- Getter & Setter 사용
		
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
		- 생성자 & 소멸자 사용
		
	```C++
	MyClass obj;
	obj.setData(10);
	int value = obj.getData();
	```
		
	- 멤버 이니셜라이저
		- 객체 생성전에 생성과 동시에 초기화가 필요한 경우에 사용한다.
		
		- const 변수와 참조변수의 초기화에 사용
	```C++
	StudentClass(int id, const char *name) : ID(id)
	```
	
## 5일차
- 객체 지향 프로그래밍
	- 생성자
		- 객체 생성시 자동으로 호출되는 멤버함수
		- 모든 클래스는 디폴트 생성자를 가지고 있다.
		- 만약 명시적으로 생성자를 작성하면 디폴트 생성자의 호출은 불가하며 디폴트 생성자가 필요한 경우는 명시적으로 작성한다.
		- 멤버변수들의 초기화를 담당한다.
		
	- 소멸자
		- 객체 소멸시 자동으로 호출되는 멤버함수
		- 반환형이 선언되어 있지 않으며, 실제로 반환하지 않는다.
		- 매개변수는 void형으로 선언되어야 하기 때문에 오버로딩도, 디폴트 값 설정도 불가능하다.
		
	```C++
	~Person() {
		delete[] name;
		cout << "called destructor!" << endl;
	};
	```
	
	- 객체 배열
		- 객체를 저장하고 있는 배열
		
	```C++
	Person parr[3];
	parr[0].ShowPersonInfo()
	```
	
	- 객체 포인터 배열
		- 객체의 주소값들을 저장하고 있는 배열
		- 포인터는 delete 함수를 통해 메모리할당을 해제해줘야함
		
	```C++
	Person* parr[3];	// 객체포인터 배열 선언
	parr[0]->ShowPersonInfo(); // 포인터는 arrow 연산자로 멤버함수를 호출
	delete parr[0];
	```
	
	- this 포인터
		- 객체 자신의 주소 값을 의미한다.
		- 주소값과 자료형이 정해져 있지 않은 포인터이다.
		- this 는 자기자신의 데이터 즉, 자기자신이 된다.
		
	```C++
	SoSimple(int n) {
	this-> num = n;
	}
	```
	
	- 복사 생성자 
		- 객체를 복사할때 자동으로 호출되는 생성자
		- 클래스를 복사할때 생성자를 복사하는 것이 아닌 원본 객체의 참조자를 입력으로 받는다.
	
	```C++
	// 복사 생성자 호출
	AA(const AA& copy) {
		this->a = copy.a;
		this->b = copy.b;
	}
	```
	
## 6일차
- 객체지향 프로그래밍
	- 디폴트 복사 생성자
		- 복사 생성자를 정의하지 않으면, 멤버 대 멤버의 복사를 진행하는 디폴트 복사 생성자가 자동으로 삽입된다.
		- 멤버 대 멤버를 단순 복사로 얕은 복사를 수행한다.
	
	- 얕은 복사
		- 실제 데이터가 아닌 단지 메모리의 주소만을 복사하여 데이터를 만든다.
		- 얕은 복사는 복사한 여러 객체가 하나의 주소를 참조하고 있어 한 객체만 메모리를 반환하여도 문제가 발생한다.
	
	- 깊은 복사
		- 리소스 자체를 복사(새롭게 메모리를 할당)하여 새롭게 멤버 변수에 입력한다.
		- 얕은 복사에 비해 작업 시간과 리소스의 소모가 발생한다.
	
	```C++
	// 깊은 복사를 위한 복사 생성자
	Person(const Person& copy) : age(copy.age) { 
	name = new char[strlen(copy.name) + 1];
	strcpy(name, copy.name);
	}
	```
	
	- 복사 생성자의 호출시기
		- case 1: 기존에 생성된 객체를 이용해서 새로운 객체를 초기화하는 경우
		- case 2: Call-by-value 방식의 함수호출 과정에서 객체를 인자로 전달하는 경우
		- case 3: 객체를 반환하되, 참조형으로 반환하지 않는 경우
	
	```C++
	// case1
	int num1 = num2;

	// case2
	func(num);
	
	// case3
	return num1;
	```
	- 임시 객체
		- 실행 도중에 잠깐만 사용되는 객체로, 소스 코드에도 없는 힙 이외의 공간에 생성되는 것이 임시객체이다.
		- 임시 객체는 이름이 존재하지 않는다.
		- 임시객체는 다음 행으로 넘어가면 바로 소멸되어 버린다.
		- 참조자에 참조되는 임시객체는 바로 소멸되지 않는다.
		
	- friend 선언
		- friend 선언은 private 멤버의 접근을 허용하는 선언이다.
		- A 클래스가 B 클래스를 상대로 friend 선언을 하면 B 클래스는 A 클래스의 private멤버에 접근이 가능하다.
		- 단, A 클래스도 B 클래스의 private멤버에 접근하려면, B 클래스가 A 클래스를 대상으로 friend 선언을 해주어야한다.
		- friend 선언은 정보은닉을 무너뜨리는 문법이기에 조심해서 사용해야한다.
		
	```C++
	class Boy {
	private:
		int height;
		friend class Girl;		// Girl 클래스에 대한 friend 선언
	public:
		Boy(int len) : height(len) {}
		void ShowYourFriendInfo(Girl& frn);
	};
	```
	
	- static
		- 전역변수에 선언된 static
			- 선언된 파일 내에서만 참조를 허용하겠다는 의미
		- 함수 내에 선언된 static의 의미
			- 한번만 초기화되고 지역변수와 달리 함수를 빠져나가도 소멸되지 않는다.

## 7일차
- 객체지향 프로그래밍
	- static 기능(test62 ~ 65)
		- 선언 시 메모리 공간에 딱 하나만 생성되어 객체들이 공유하는 구조가 된다.
		- static 변수는 객체 안에 있는 것이 아닌 외부에 존재한다.
		- 다만 객체에게 멤버변수처럼 접근할 수 있는 권한을 주었다.
		
	- mutable(test66)
		- const 함수 내에서의 값의 변경을 예외적으로 허용한다.
		
	```C++
	class SoSimple {
	private:
		int num1;
		mutable int num2;
	public:
		SoSimple(int n1, int n2) : num1(n1), num2(n2) {}
		void ShowSimpleData() const {
			cout << num1 << ", " << num2 << endl;
		}
		void CopyToNum2() const {
			num2 = num1;
		}
	};
	```
	
	- 상속(test67 ~ 74)
		- 기존에 정의해 놓은 클래스의 재활용을 목적으로 만들어진 문법적 요소이다.
		- 접근제한자를 사용하여 상속하여 사용할 수 있는 범위를 제한할 수 있다.
		- 자신이 상속한 생성자를 호출하는 형태로 클래스의 멤버를 초기화 할 수 있다.
	
	```C++
	class 클래스_이름 : 접근제한자 부모_클래스명{
	//.. 내용 ..//
	}
	///// 실제 코드 /////
	class UnivStudent : public Person {
	private:
		string major;
	public:
			/// 내용 ///
	```