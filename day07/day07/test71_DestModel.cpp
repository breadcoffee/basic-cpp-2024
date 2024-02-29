#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
	char* name;
public:
	Person(const char* myname) {
		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
	}
	~Person() {
		delete[] name;
	}
	void whatYouName() const {
		cout << "My name is " << name << endl;
	}
};

class UnivStudent : public Person {
private:
	char* major;
public:
	UnivStudent(const char* myname, const char* mymajor) : Person(myname) {
		major = new char[strlen(myname) + 1];
		strcpy(major, mymajor);
	}
	~UnivStudent() {
		delete[] major;
	}
	void WhoAreName() const {
		whatYouName();
		cout << "My major is " << major << endl << endl;
	}
};

int main() {
	UnivStudent st1("Lee", "Computer end.");
	st1.WhoAreName();

	UnivStudent st2("Yoon", "Electronic end.");
	st2.WhoAreName();

	return 0;
}