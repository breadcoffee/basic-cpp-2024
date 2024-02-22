#include <iostream>

using namespace std;

// namespace�� ���� ���� �̸��� �Լ��� ���������� �������� ���� ����Ѵ�.

namespace BestComImpl { // C++ �� ����� ���Ǹ� �����ؾ��Ѵ�.
	void SimpleFunc();
}
namespace BestComImpl {
	void PrettyFunc();
}
namespace ProgComImpl {
	void SimpleFunc();
}

int main() {
	BestComImpl::SimpleFunc(); 
	// :: �����ڴ� �������� ������(scope resolution operator)�̶�� �Ѵ�. �ٿ��� ��������� �θ���.
	return 0;
}

void BestComImpl::SimpleFunc() {
	cout << "BestCom::SimpleFunc�� ������ �Լ�" << endl;
	PrettyFunc(); // ���� �̸� ������ ���ǵ� �Լ��� ȣ���Ҷ����� �̸������� ����� �ʿ䰡 ����.
	ProgComImpl::SimpleFunc(); // �ٸ� �̸� ����
}
void BestComImpl::PrettyFunc() {
	cout << "BestCom::prettyFunc�� ������ �Լ�" << endl;
}
void ProgComImpl::SimpleFunc() {
	cout << "ProgCom�� ������ �Լ�" << endl;
}