#include <iostream>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) : num(n) {
		cout << "New Object: " << this << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num) {
		cout << "New Copy Obj: " << this << endl;
	}
	~SoSimple() {
		cout << "Destroy obj: " << this << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob) {
	cout << "Parm ADR: " << &ob << endl;
	return ob;								// ob甫 馆券窍聪 烙矫按眉啊 积己凳
}

int main() {
	SoSimple obj(7);
	SimpleFuncObj(obj);
	
	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);
	cout << "Return Obj " << &tempRef << endl;

	return 0;
}
/* 免仿
New Object: 0000004EE473FA44	:	25青 按眉 obj 积己
New Copy Obj: 0000004EE473FB44	:	按眉 ob1 积己
Parm ADR: 0000004EE473FB44		:	按眉 ob1 林家
New Copy Obj: 0000004EE473FB84	:	烙矫按眉1 积己
Destroy obj: 0000004EE473FB44	:	按眉 ob1 家戈
Destroy obj: 0000004EE473FB84	:	烙矫按眉1 家戈

New Copy Obj: 0000004EE473FBA4	:	按眉 ob2 积己
Parm ADR: 0000004EE473FBA4		:	按眉 ob2 林家
New Copy Obj: 0000004EE473FA64	:	烙矫按眉2 积己
Destroy obj: 0000004EE473FBA4	:	按眉 ob2 家戈
Return Obj 0000004EE473FA64		:	烙矫按眉2 林家
Destroy obj: 0000004EE473FA64	:	烙矫按眉2 家戈
Destroy obj: 0000004EE473FA44	:	25青 按眉 obj 家戈
*/