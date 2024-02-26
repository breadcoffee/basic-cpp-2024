#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_
#include "test30_PointHiding.h"

class Rectangle {
private: // private�� ����� �ʵ忡 �����ϱ� ���ؼ� getter�� setter�� �ʿ��ϴ�.
	Point upLeft;
	Point lowRight;

public:
	bool InitMembers(const Point& ul, const Point& lr);
	void ShowRecInfo() const;
};
#endif