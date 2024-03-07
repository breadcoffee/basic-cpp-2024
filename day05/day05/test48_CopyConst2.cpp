#include <iostream>
using namespace std;

class AA {
	int a;
	int b;
public:
	AA(int a, int b) {
		this->a = a;
		this->b = b;
	}
	void AAInfo() {
		cout << a << " " << b << endl;
	}
};

int main() {
	AA obj1(10, 20);
	obj1.AAInfo();
	
	// 컴파일러가 복사생성자를 자동으로 만들어서 제공

	AA obj2(obj1);
	obj2.AAInfo();

	return 0;
}