#include <iostream>
using namespace std;

int main() 
{
	int num;
	cout << "�����Է� > ";
	cin >> num;

	switch (num) 
	{
	case 1:
		cout << "1�Դϴ�." << endl;
		break;
	case 2:
		cout << "2�Դϴ�." << endl;
		break;
	case 3:
		cout << "3�Դϴ�." << endl;
		break;
	default:
		cout << "1,2,3�� �ƴմϴ�" << endl;
		break;
	}
	return 0;
}