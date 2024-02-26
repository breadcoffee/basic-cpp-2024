#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_
#include "test30_PointHiding.h"

class Rectangle {
private: // private로 선언된 필드에 접근하기 위해선 getter와 setter가 필요하다.
	Point upLeft;
	Point lowRight;

public:
	bool InitMembers(const Point& ul, const Point& lr);
	void ShowRecInfo() const;
};
#endif