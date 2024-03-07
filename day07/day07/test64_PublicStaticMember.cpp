#include <iostream>
using namespace std;

class SoSimple {
public:						// 접근제한이 public
	static int simObjCnt;	// static 멤버변수 선언(클래스 멤버)
public:
	SoSimple() {
		simObjCnt++;
	}
};
int SoSimple::simObjCnt = 0;	// static 멤버변수의 초기화

int main() {
	// SoSimple 객체를 하나도 생성하지 않은 상태인데도 simObjCnt에 접근이 가능하다.
	// static 멤버변수가 객체 내에 존재하지 않는다는 증명이다.
	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;	// 클래스 이름으로 static 멤버에 접근가능
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim2.simObjCnt << "번째 SoSimple 객체" << endl;

	return 0;
}