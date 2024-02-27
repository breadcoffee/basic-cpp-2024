#include <iostream>
using namespace std;

class SelfRef {
private:
	int num;
public:
	SelfRef(int n) : num(n) {
		cout << "객체생성" << endl;
	}
	SelfRef& Adder(int n) {
		num += n;		// this 포인터가 가지고 있는 값은 자기자신의 주소값이다.
		return *this;	// *this 는 객체 자기자신의 데이터 즉, 자기자신이 된다.
	}
	SelfRef& ShowTwoNumber() {
		cout << num << endl;
		return *this;
	}
};

int main() {
	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2);	// obj.Adder(2)의 반환값인 5을 저장하는 것이 아닌 obj 객체 자신을 돌려받음

	obj.ShowTwoNumber();
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	// 먼저 ref.Adder(1) 함수가 호출되고 그 리턴값의 .ShowTwoNumber() 가 실행된다.
	// 이것은 두 함수가 객체의 참조값을 반환하기 때문에 구성이 가능한 문장이다.
	return 0;
}