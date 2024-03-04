#include <iostream>
using namespace std;

class First {
public:
	virtual void MyFunc() { cout << "FirstFunc" << endl; }
};

class Second : public First {
public:
	virtual void MyFunc() { cout << "SecondFunc" << endl; }
};

class Third : public Second {
public:
	virtual void MyFunc() { cout << "ThirdFunc" << endl; }
};

int main() {
	Third* tptr = new Third();	// 동적 바인딩 : 프로그램이 실행 도중에 호출해야할 멤버변수가 정해진다.
	Second* sptr = tptr;
	First* fptr = sptr;

	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc();

	delete tptr;

	return 0;
}