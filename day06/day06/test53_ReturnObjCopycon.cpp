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
	SoSimple& AddNum(int n) {
		num += n;
		return *this;	// 참조 형태인 객체 자기자신을 전달
	}
	void ShowData() {
		cout << "num: " << num << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob) {
	cout << "return 이전" << endl;
	return ob;
}

int main() {
	SoSimple obj(7);
	SimpleFuncObj(obj).AddNum(30).ShowData();	// 복사된 임시 객체의 AddNum()이 사용된 것
	obj.ShowData(); 

	return 0;
}