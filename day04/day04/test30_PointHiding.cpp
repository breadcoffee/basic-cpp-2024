#include <iostream>
#include "test30_PointHiding.h"
using namespace std;

bool Point::InitMembers(int xpos, int ypos) {
	if (xpos < 0 || ypos < 0) {
		cout << "��� ������ �� ����" << endl;
		return false;
	}

	x = xpos;
	y = ypos;
	return true;
}

int Point::GetX() const { // const �Լ�,��ü ���κ��� �� ���� �Ұ���, const �Լ��θ� ȣ�Ⱑ��
	return x;
}

int Point::GetY() const {
	return y;
}

bool Point::SetX(int xpos) {
	if (x > xpos || xpos > 100) {
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	x = xpos;
	return true;
}

bool Point::SetY(int ypos) {
	if (0 > ypos || ypos > 100) {
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	y = ypos;
	return true;
}