#include <iostream>
using namespace std;

class Number {
private:
	int num;
public:
	Number(int n = 0) : num(n) {
		cout << "Number(int n=0)" << endl;
	}
	Number& operator=(const Number& ref) {
		cout << "operator=()" << endl;
		num = ref.num;
		return *this;
	}
	void ShowNumber() { cout << num << endl; }
};

int main() {
	Number num;		// 대입연산 실행과정
	num = 30;		// 1. num=Number(30) 임시객체 생성 
					// 2. num.operator=(Number(30)) 임시객체를 대상으로 하는 대입 연산자의 호출
	num.ShowNumber();

	return 0;
}