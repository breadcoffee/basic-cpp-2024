#include <iostream>
using namespace std;

class StudentClass {
	const int ID;
	char NAME[20];
	char MAJOR[20];
	int AGE;
	const int BIRTH;

public:
	// ���ڿ��� �ּ��̱� ������ ������ ������ �־ ����Ѵ�. - ���ڿ��� ù��° ���� �ּҰ� ����ȴ�.
	StudentClass(int id, const char *name, const char *major, int age, int birth) : ID(id), BIRTH(birth) { // ��� �̴ϼȶ�����
		// ��� �̴ϼȶ������� ��ü ������ �ʱ�ȭ�����ʴ� ������� �ʱ�ȭ�� �� ����Ѵ�.
		// // ��. ��ü ������ ������� �̸� �ʱ�ȭ�� �Ǵ� ������� �ʱ�ȭ�Ѵ�.
		//ID = id;
		strcpy(NAME, name); // ���ڿ� �迭�� �����ϰ� �ٷ� �ʱ�ȭ���� ���� ���� strcpy()�� ���Ͽ� �ʱ�ȭ�Ѵ�.
		strcpy(MAJOR, major);
		AGE = age;
	}
	void ShowResult() const{
		cout << "�й�: " << ID << endl;
		cout << "�̸�: " << NAME << endl;
		cout << "����: " << MAJOR << endl;
		cout << "����: " << AGE << endl;
		cout << "�������: " << BIRTH << endl;
	}
};

int main() {
	StudentClass st1(001, "���ֿ�", "��ǻ��", 27, 981117); // ��ü�� �����ϸ� �����ڸ� ȣ���ؾ��Ѵ�.
	st1.ShowResult();

	return 0;
}