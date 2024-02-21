#include <iostream>
using namespace std;

int main() 
{
	int num;
	cout << "숫자입력 > ";
	cin >> num;

	switch (num) 
	{
	case 1:
		cout << "1입니다." << endl;
		break;
	case 2:
		cout << "2입니다." << endl;
		break;
	case 3:
		cout << "3입니다." << endl;
		break;
	default:
		cout << "1,2,3이 아닙니다" << endl;
		break;
	}
	return 0;
}