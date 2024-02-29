#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage) {
		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
		age = myage;
		cout << "New Obj" << endl;
	}
	Person(const Person& copy) : age(copy.age) {
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
		cout << "Copy Obj" << endl;
	}
	void PersonInfo() const {
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~Person() {
		delete[] name;
		cout << "Destroy Obj" << endl;
	}
};

int main() {
	Person p("ȫ�浿", 30);
	p.PersonInfo();
	cout << endl;

	Person copyp(p);
	copyp.PersonInfo();
	cout << endl;

	return 0;
}