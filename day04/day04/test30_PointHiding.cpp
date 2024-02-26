#include <iostream>
#include "test30_PointHiding.h"
using namespace std;

bool Point::InitMembers(int xpos, int ypos) {
	if (xpos < 0 || ypos < 0) {
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}

	x = xpos;
	y = ypos;
	return true;
}

int Point::GetX() const { // const 함수,객체 내부변수 값 변경 불가능, const 함수로만 호출가능
	return x;
}

int Point::GetY() const {
	return y;
}

bool Point::SetX(int xpos) {
	if (x > xpos || xpos > 100) {
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	x = xpos;
	return true;
}

bool Point::SetY(int ypos) {
	if (0 > ypos || ypos > 100) {
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	y = ypos;
	return true;
}