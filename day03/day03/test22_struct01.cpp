#include <iostream>

using namespace std;
/*
	C Ÿ���� ����ü : ����� ��� ������ ������.
*/

typedef struct human1{ // human ����ü(����� ���� �ڷ���)
	char name1[20]; // �Ӽ�; �������(name, age, job)
	int age1;
	char job1[20];
}Human1;		// ������ human ����ü�� Human���� ����ϰڴ�

void showHuman1(Human1 h) {
	printf("name: %s age: %d job: %s\n", h.name1, h.age1, h.job1);
}

/*
	C++ Ÿ���� ����ü : ����ü ����� ��� ������ ��� �Լ��� ������.
*/

typedef struct human2 { // human ����ü(����� ���� �ڷ���)
	char name2[20]; // �Ӽ�; �������(name, age, job)
	int age2;
	char job2[20];

	void showHuman2() {
		printf("name: %s age: %d job: %s\n", name2, age2, job2);
	}
}Human2;		// ������ human ����ü�� Human���� ����ϰڴ�


int main() {
	// C ����ü
	human1 h1 = { "ȫ�浿", 50, "����" };
	showHuman1(h1);

	// C++ ����ü
	human2 h2 = { "ȫ�浿", 50, "����" };
	h2.showHuman2(); // ����ü �ȿ� �ִ� �Լ� ���

	return 0;
}