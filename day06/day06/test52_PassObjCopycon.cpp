#include <iostream>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) : num(n) {}
	SoSimple(const SoSimple& copy) : num(copy.num) {
		cout << "Called SoSimple(const SoSimple& copy" << endl;
	}
	void ShowData() {	// 멤버함수 - > 객체를 생성해야만 사용가능
		cout << "num: " << num << endl;
	}
};

void SimpleFuncObj(SoSimple ob) {	// SoSimple 클래스를 매개변수로 받아 
	ob.ShowData();					// 그 안에 있는 복사 생성자와 멤버함수를 실행하게됨
}

int main() {
	SoSimple obj(7);
	cout << "함수 호출 전" << endl;
	SimpleFuncObj(obj);
	cout << "함수 호출 후" << endl;

	return 0;
}