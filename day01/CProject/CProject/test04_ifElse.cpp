#include <iostream>

using namespace std;

int main() {
	int num;

	cout << "���� �ϳ��� �Է��ϼ��� > ";
	cin >> num;

	if (num == 3) {
		cout << "����" << endl;
	}
	else if(num > 3) {
		cout << "���ڰ� Ů�ϴ�" << endl;
	}
	else if (num < 3) {
		cout << "���ڰ� �۽��ϴ�" << endl;
	}
	else {
		cout << "�߸� �Է��߽��ϴ�" << endl;
	}
}