#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;		// int Ÿ���� vector����
	int num, sum;
	while (true) {
		cout << "������ �Է��ϼ���(0 ����) : ";
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