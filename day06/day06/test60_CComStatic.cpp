#include <iostream>
using namespace std;

void Counter(){
	//static int cnt;
	int cnt = 0;	// cnt의 값은 계속 1로 출력된다.
	cnt++;
	cout << "Cutternt cnt: " << cnt << endl;
}

int main() {
	for (int i = 0; i < 10; i++) {
		Counter();
	}
	return 0;
}