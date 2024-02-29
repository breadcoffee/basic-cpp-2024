#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class SoBase {
private:
	int baseNum;
public:
	SoBase(int n) : baseNum(n) {
		cout << "SoBase(int n) : " << baseNum << endl;
	}
	~SoBase() {
		cout << "~SoBase() : " << baseNum << endl;
	}
};

class SoDerived : public SoBase {
private:
	int derivNum;
public:
	SoDerived(int n) : SoBase(n), derivNum(n) {
		cout << "SoDerived(int n)" << derivNum << endl;
	}
	~SoDerived() {
		cout << "~SoDerived() : " << derivNum << endl;
	}
};

int main() {

	SoDerived dr1(15);
	SoDerived dr2(27);

	return 0;
}