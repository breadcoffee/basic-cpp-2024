#include <iostream>
// #define SQUARE(x) ((x)*(x)) // ��ũ�� �Լ��� �����ϴµ� �Ѱ谡 �ִ�.

using namespace std;
template <typename T>

inline T SQUARE(T x) {
	return x * x;
}

//inline int SQUARE(int x) {
//	return x * x;
//}

int main() {
	cout << SQUARE(5) << endl; 
	cout << SQUARE(3.15) << endl; // 9, �ζ��� ���·� �����ϸ� Ÿ�� ������ �����Ͽ� �Ҽ����� �����
	// ������ C++�� template �Լ��� �̿��ϸ� �ڷῡ ���������� ���� �Լ��� ������ �� �ִ�.
	return 0;
}