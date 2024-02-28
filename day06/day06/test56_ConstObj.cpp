#include <iostream>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) : num(n) {}
	SoSimple& AddNum(int n) {
		num += n;
		return *this;
	}
	void ShowData() const {
		cout << "num: " << num << endl;
	}
};

int main() {
	const SoSimple obj(7);	// 이 객체의 데이터 변경을 허용하지 않는다.
	//obj.AddNum(20);		// const 멤버함수의 호출만 허용
	obj.ShowData();

	return 0;
}