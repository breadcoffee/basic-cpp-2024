#include "test26_Car.h"
using namespace std;

int main() {
	Car run99;							// class car타입의 객체생성
	run99.InitMembers("run99", 100);	// run99객체의 InitMembers() 메서드 호출
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	return 0;
}