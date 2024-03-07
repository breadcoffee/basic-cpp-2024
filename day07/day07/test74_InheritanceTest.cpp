#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Myclass {
private:
	string name;
	int age;
public:
	Myclass(string myname, int myage) : age(myage) {
		/*name = new char[strlen(myname) + 1];
		strcpy(name, myname);*/
		this->name = myname;
	}
	string getname() {
		return (this->name);
	}
	int getage() {
		return age;
	}
};

class MyInfo : public Myclass {
private:
	char* pNumber;
public:
	MyInfo(string myname, int myage, const char* mypNumber) : Myclass(myname, myage) {
		pNumber = new char[strlen(mypNumber) + 1];
		strcpy(pNumber, mypNumber);
	}
	void printMyInfo() {
		cout << "나의 이름은 " << getname() << " 이고 나이는 " << getage() << "살이며 전화번호는 " << pNumber << "입니다." << endl;
	}
};

int main() {
	MyInfo st1 = { "이주원", 27, "010-1234-1234" };
	st1.printMyInfo();

	return 0;
}