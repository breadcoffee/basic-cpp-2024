#include <iostream>
using namespace std;

int simObjCnt = 0;	// 전역변수 선언
int cmxObjCnt = 0;	// 전역변수는 접근에 대한 제한이 없기 때문에 위험

class SoSimple {
public:
	SoSimple() {
		simObjCnt++;
		cout << simObjCnt << "번째 SoSimple 객체" << endl;
	}
};

class SoComplex {
public:
	SoComplex() {
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
	SoComplex(SoComplex& copy) {
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
};

int main() {
	SoSimple sim1;
	SoSimple sim2;

	SoComplex com1;
	SoComplex com2 = com1;
	SoComplex();			// 임시객체 생성

	return 0;
}