#ifndef __POINT_H_
#define __POINT_H_

class Point {
private: // private로 선언된 필드에 접근하기 위해선 getter와 setter가 필요하다.
	int x;
	int y;

public:
	bool InitMembers(int xpos, int ypos);
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};
#endif