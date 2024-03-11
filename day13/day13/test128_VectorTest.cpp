#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;		// int 타입의 vector생성
	int num, sum;
	while (true) {
		cout << "정수를 입력하세요(0 종료) : ";
		cin >> num;
		if (!num) {
			break;
		}
		v.push_back(num);
		sum = 0;
		for (int i = 0; i < v.size(); i++) {
			sum += v[i];
		}
		printf("AVG : %d\n", (sum / v.size()));
	}

	return 0;
}