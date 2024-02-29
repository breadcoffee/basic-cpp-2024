#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person {
private:
	int age;
	char name[50];
public:
	Person(const char* myname, int myage) {
		age = myage;
		strcpy(name, myname);
	}
	void whatYouName() const {
		cout << "My name is " << name << endl;
	}
	void HowOldAreYou() const {
		cout << "I'm " << age << " years old" << endl;
	}
};

class UnivStudent : public Person {
private:
	string major;
public:
	UnivStudent(const char* myname, int myage, string mymajor) : Person(myname, myage) {
		this->major = major;
	}
	void WhoYourName() const {
		whatYouName();
		HowOldAreYou();
		cout << "My major is " << major << endl << endl;
	}
};

int main() {
	UnivStudent ustd1("Lee", 22, "Computer end.");
	ustd1.WhoYourName();

	UnivStudent ustd2("Yoon", 21, "Electronic end.");
	ustd2.WhoYourName();

	return 0;
}