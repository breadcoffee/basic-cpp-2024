#include <iostream>
using namespace std;

class Person {
public:
	void Sleep() { cout << "Sleep" << endl; }
};

class Student : public Person {
public:
	void Study() { cout << "Study" << endl; }
};

class PartTimeStudent : public Student {
public:
	void Work() { cout << "PartTimeStudent" << endl; }
};
/*
Person* ptr1 = new Person();	������ Ÿ������ ����ϴ� ���� ��Ģ

�θ�Ÿ���� ��ü �����ͷ� �ڽ� ��ü�� ����ų �� �ִ�.
������ �ڽ� Ÿ���� ��ü �����ͷ� �θ�ü�� ����ų �� ����.
�׸��� ������ ��ü �������� Ÿ���� ������.
*/

int main() {
	Person* ptr1 = new Student();
	Person* ptr2 = new PartTimeStudent();
	Student* ptr3 = new PartTimeStudent();
	
	ptr1->Sleep();
	ptr2->Sleep();
	ptr3->Study();

	delete ptr1;
	delete ptr2;
	delete ptr3;

	return 0;
}