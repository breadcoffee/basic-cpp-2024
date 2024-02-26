#include <iostream>
using namespace std;

class SimpleClass {
private:
	int num1;
	int num2;
public:
	SimpleClass() {	// 디폴트 생성자
		num1 = 0;
		num2 = 0;
	}
	SimpleClass(int n) { // 입력을 한개 가지는 생성자
		num1 = n;
		num2 = 0;
	}
	SimpleClass(int n1, int n2) { // 입력을 두개를 가지는 생성자
		num1 = n1;
		num2 = n2;
	}
	//SimpleClass(int n1 = 0, int n2 = 0) {
	//	num1 = n1;
	//	num2 = n2;
	//}
	void ShowData() const {
		cout << num1 << ' ' << num2 << endl;
	}
};

int main() {
	SimpleClass sc1;
	sc1.ShowData();

	SimpleClass sc2(100);
	sc2.ShowData();

	SimpleClass sc3(100, 200);
	sc3.ShowData();
	return 0;
}