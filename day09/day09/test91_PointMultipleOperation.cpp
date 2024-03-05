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

	Point operator*(int times) {	// operator+ 라는 이름의 함수

		Point pos(xpos * times, ypos * times);	// 객체생성
		return pos;
	}
};

int main() {
	Point pos(1, 2);
	Point cpy;

	cpy = pos * 3;
	cpy.ShowPosition();

	cpy = pos * 3 * 2;
	cpy.ShowPosition();

	return 0;
}