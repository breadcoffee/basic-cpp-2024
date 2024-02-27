#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
	char* name;
	int age;
public:
	Person(char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person() {
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;
	}
	void SetPersonInfo(char* myname, int myage) {
		name = myname;
		age = myage;
	}
	void ShowPersonInfo() const {
		cout << "이름: " << name << ", ";
		cout << "나이: " << age << endl;
	}
	~Person() {
		delete[] name;
		cout << "called destructor!" << endl;
	}
};

int main() {
	Person* parr[3];		// 객체포인터배열
	//Person parr[3];		// 객체배열
	char namestr[100];	// 문자배열
	//char* strptr;		// char타입의 포인터변수
	int age;
	//int len;

	for (int i = 0; i < 3; i++) {
		cout << "이름: ";
		cin >> namestr;
		cout << "나이: ";
		cin >> age;
		//len = (strlen(namestr) + 1);
		//strptr = new char[len];
		//strcpy(strptr, namestr);
		//parr[i].SetPersonInfo(strptr, age);
		parr[i] = new Person(namestr, age);
	}
	/*parr[0].ShowPersonInfo();
	parr[1].ShowPersonInfo();
	parr[2].ShowPersonInfo();*/
	parr[0]->ShowPersonInfo();		// 포인터로 멤버함수에 접근할 때 Arrow 연산자를 사용(->)
	parr[1]->ShowPersonInfo();
	parr[2]->ShowPersonInfo();

	delete parr[0];
	delete parr[1];
	delete parr[2];

	return 0;
}