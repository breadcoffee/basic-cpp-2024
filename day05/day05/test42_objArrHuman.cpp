#include <iostream>
using namespace std;

class Human {
private:
	char name[20];
	int age;

public:
	Human(const char* pname, int aage) {
		cout << "������ ȣ��" << endl;
		strcpy(name, pname);	// strcpy() �� ������ �����Ͱ� ��ȯ�� ���ɼ��� �־ const�� ���
		age = aage;
	}
	void HumanInfo(){
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~Human(){
		cout << "�Ҹ��� ȣ��" << endl;
	}
};

int main() {
	Human h[3]= { Human("ȫ�浿", 50), Human("ö��", 48), Human("����", 39) }; // ��ü�迭

	for (int i = 0; i < 3; i++) {
		h[i].HumanInfo();
	}

	Human* h1 = new Human("������", 50);	// ��ü�����ͷ� ��� ����
	Human h2("�󸶹�", 23);					// ��ü�� ��� ����
	
	h1->HumanInfo();
	h2.HumanInfo();

	delete h1;	// �����ʹ� �޸𸮰� �ڵ����� �Ҹ���� ����

	return 0;
}