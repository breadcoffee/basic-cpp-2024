#include <iostream>
using namespace std;

class Human {
private:
	char name[20];
	int age;

public:
	Human(const char* pname, int aage) {
		cout << "생성자 호출" << endl;
		strcpy(name, pname);	// strcpy() 시 원본의 데이터가 변환될 가능성이 있어서 const를 사용
		age = aage;
	}
	void HumanInfo(){
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Human(){
		cout << "소멸자 호출" << endl;
	}
};

int main() {
	Human h[3]= { Human("홍길동", 50), Human("철수", 48), Human("영희", 39) }; // 객체배열

	for (int i = 0; i < 3; i++) {
		h[i].HumanInfo();
	}

	Human* h1 = new Human("가나다", 50);	// 객체포인터로 멤버 접근
	Human h2("라마바", 23);					// 객체로 멤버 접근
	
	h1->HumanInfo();
	h2.HumanInfo();

	delete h1;	// 포인터는 메모리가 자동으로 소멸되지 않음

	return 0;
}