#include <iostream>
using namespace std;

class SelfRef {
private:
	int num;
public:
	SelfRef(int n) : num(n) {
		cout << "��ü����" << endl;
	}
	SelfRef& Adder(int n) {
		num += n;		// this �����Ͱ� ������ �ִ� ���� �ڱ��ڽ��� �ּҰ��̴�.
		return *this;	// *this �� ��ü �ڱ��ڽ��� ������ ��, �ڱ��ڽ��� �ȴ�.
	}
	SelfRef& ShowTwoNumber() {
		cout << num << endl;
		return *this;
	}
};

int main() {
	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2);	// obj.Adder(2)�� ��ȯ���� 5�� �����ϴ� ���� �ƴ� obj ��ü �ڽ��� ��������

	obj.ShowTwoNumber();
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	// ���� ref.Adder(1) �Լ��� ȣ��ǰ� �� ���ϰ��� .ShowTwoNumber() �� ����ȴ�.
	// �̰��� �� �Լ��� ��ü�� �������� ��ȯ�ϱ� ������ ������ ������ �����̴�.
	return 0;
}