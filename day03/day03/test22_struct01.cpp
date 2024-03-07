#include <iostream>

using namespace std;
/*
	C 타입의 구조체 : 멤버로 멤버 변수만 가진다.
*/

typedef struct human1{ // human 구조체(사용자 정의 자료형)
	char name1[20]; // 속성; 멤버변수(name, age, job)
	int age1;
	char job1[20];
}Human1;		// 앞으로 human 구조체를 Human으로 사용하겠다

void showHuman1(Human1 h) {
	printf("name: %s age: %d job: %s\n", h.name1, h.age1, h.job1);
}

/*
	C++ 타입의 구조체 : 구조체 멤버로 멤버 변수와 멤버 함수를 가진다.
*/

typedef struct human2 { // human 구조체(사용자 정의 자료형)
	char name2[20]; // 속성; 멤버변수(name, age, job)
	int age2;
	char job2[20];

	void showHuman2() {
		printf("name: %s age: %d job: %s\n", name2, age2, job2);
	}
}Human2;		// 앞으로 human 구조체를 Human으로 사용하겠다


int main() {
	// C 구조체
	human1 h1 = { "홍길동", 50, "의적" };
	showHuman1(h1);

	// C++ 구조체
	human2 h2 = { "홍길동", 50, "의적" };
	h2.showHuman2(); // 구조체 안에 있는 함수 사용

	return 0;
}