#include <iostream>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) : num(n) {
		cout << "New Object: " << this << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num) {
		cout << "New Copy Obj: " << this << endl;
	}
	~SoSimple() {
		cout << "Destroy obj: " << this << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob) {
	cout << "Parm ADR: " << &ob << endl;
	return ob;								// ob�� ��ȯ�ϴ� �ӽð�ü�� ������
}

int main() {
	SoSimple obj(7);
	SimpleFuncObj(obj);
	
	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);
	cout << "Return Obj " << &tempRef << endl;

	return 0;
}
/* ���
New Object: 0000004EE473FA44	:	25�� ��ü obj ����
New Copy Obj: 0000004EE473FB44	:	��ü ob1 ����
Parm ADR: 0000004EE473FB44		:	��ü ob1 �ּ�
New Copy Obj: 0000004EE473FB84	:	�ӽð�ü1 ����
Destroy obj: 0000004EE473FB44	:	��ü ob1 �Ҹ�
Destroy obj: 0000004EE473FB84	:	�ӽð�ü1 �Ҹ�

New Copy Obj: 0000004EE473FBA4	:	��ü ob2 ����
Parm ADR: 0000004EE473FBA4		:	��ü ob2 �ּ�
New Copy Obj: 0000004EE473FA64	:	�ӽð�ü2 ����
Destroy obj: 0000004EE473FBA4	:	��ü ob2 �Ҹ�
Return Obj 0000004EE473FA64		:	�ӽð�ü2 �ּ�
Destroy obj: 0000004EE473FA64	:	�ӽð�ü2 �Ҹ�
Destroy obj: 0000004EE473FA44	:	25�� ��ü obj �Ҹ�
*/