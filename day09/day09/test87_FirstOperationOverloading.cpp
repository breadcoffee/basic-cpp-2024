#include <iostream>
using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
	void ShowPosition() const {
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	Point operator+(const Point& ref) {	// operator+ 라는 이름의 함수
		// 사칙연산에 관한 자료형들이 Point 안에는 존재하지 않아 새로 만들어야함
		Point pos(xpos + ref.xpos, ypos + ref.ypos);	// 객체생성
		return pos;
	}
};

int main() {
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1.operator+(pos2);
	Point pos4 = pos1 + pos2;

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
	pos4.ShowPosition();

	return 0;
}