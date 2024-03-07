#include <iostream>
using namespace std;

class StudentClass {
	const int ID;
	char NAME[20];
	char MAJOR[20];
	int AGE;
	const int BIRTH;

public:
	// 문자열은 주소이기 때문에 포인터 변수에 넣어서 사용한다. - 문자열의 첫번째 문자 주소가 저장된다.
	StudentClass(int id, const char *name, const char *major, int age, int birth) : ID(id), BIRTH(birth) { // 멤버 이니셜라이저
		// 멤버 이니셜라이저는 객체 생성시 초기화되지않는 멤버들을 초기화할 때 사용한다.
		// // 즉. 객체 생성과 상관없이 미리 초기화가 되는 멤버들을 초기화한다.
		//ID = id;
		strcpy(NAME, name); // 문자열 배열을 선언하고 바로 초기화하지 않은 경우는 strcpy()를 통하여 초기화한다.
		strcpy(MAJOR, major);
		AGE = age;
	}
	void ShowResult() const{
		cout << "학번: " << ID << endl;
		cout << "이름: " << NAME << endl;
		cout << "전공: " << MAJOR << endl;
		cout << "나이: " << AGE << endl;
		cout << "생년월일: " << BIRTH << endl;
	}
};

int main() {
	StudentClass st1(001, "이주원", "컴퓨터", 27, 981117); // 객체를 생성하면 생성자를 호출해야한다.
	st1.ShowResult();

	return 0;
}