#include "test26_Car.h"
using namespace std;

int main() {
	Car run99;							// class carŸ���� ��ü����
	run99.InitMembers("run99", 100);	// run99��ü�� InitMembers() �޼��� ȣ��
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	return 0;
}