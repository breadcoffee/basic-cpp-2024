#include <iostream>
using namespace std;

void Counter(){
	//static int cnt;
	int cnt = 0;	// cnt�� ���� ��� 1�� ��µȴ�.
	cnt++;
	cout << "Cutternt cnt: " << cnt << endl;
}

int main() {
	for (int i = 0; i < 10; i++) {
		Counter();
	}
	return 0;
}