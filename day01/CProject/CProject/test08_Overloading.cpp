#include <iostream>

using namespace std;

void MyFunc() {
	cout << "MyFunc() called" << endl;
}

void MyFunc(char c) {
	cout << "MyFunc(char c) called" << endl;
}

void MyFunc(int a, int b) {
	cout << "MyFunc(int a, int b) called" << endl;
}
/* C ++ �����ε�
* �����ε� : �޼����� �̸��� ���Ƶ� �ߺ� ���ǰ� �����ϴ�.
* C ++�� �Լ� ȣ�� �� '�Լ��� �̸�', '�Ű������� ����' �� ���� �Ű�ü�� �̿��Ͽ� �Լ��� ã�´�.
* �׷��⿡ �ؿ��� ������ C++�� �Ű������� ���� ���°� �ٸ��� �ٸ� �Լ��� �ν��Ѵ�.
*/

int main(){ 
	MyFunc(); 
	MyFunc('A');
	MyFunc(12, 13);

	return 0;
}