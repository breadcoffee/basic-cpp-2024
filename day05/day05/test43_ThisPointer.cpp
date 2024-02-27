#include <iostream>
#include <cstring>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) {
		this-> num = n;
		cout << "num= " << num << ", ";
		cout << "address= " << this << endl;
	}
	void ShowSimpleData() {	// 멤버함수들을 한번만 생성되고 나머지는 이 함수를 공유
		cout << num << endl;
	}
	SoSimple* GetThisPointer() {
		return this;
	}
};

int main() {
	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer();	// sim1 객체의 주소값 저장

	cout << ptr1 << ", ";
	ptr1->ShowSimpleData();

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();	// sim2 객체의 주소값 저장

	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();

	return 0;
}