#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Grade {
private:
	char* name;
	int kr, math, eng;
public:
	// ��ü������ �迭 ������
	/*Grade(const char* myname, int kr, int math, int eng) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		this->kr = kr;
		this->math = math;
		this->eng = eng;
	}*/
	// ��ü �迭 ������
	Grade() {
		cout << "������ ȣ��" << endl;
	}
	// ��ü �迭 ��� �ʱ�ȭ
	void SetGradeInfo(char* myname, int mykr, int mymath, int myeng) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		kr = mykr;
		math = mymath;
		eng = myeng;
	}
	void ShowGradeInfo() const {
		cout << name << " = [����:" << kr << ", ���� : " << math << ", ���� : " << eng << ", ���� : " << kr + math + eng << ", ��� : " << (kr + math + eng) / 3 << ']' << endl;
	}
	int sum() {
		cout << "���� : ";
		return kr + math + eng;
	}
	int avg() {
		cout << "��� : ";
		return sum() / 3;
	}
	int totalKr() {
		return kr;
	}
	int totalMath() {
		return math;
	}
	int totalEng() {
		return eng;
	}
	~Grade() { 
		delete[] name;
		cout << "�Ҹ��� ȣ��" << endl;
	}
};

int main() {
	//Grade* gradeAry[3];	// ��ü ������ �迭
	Grade gradeAry[3] = {};	// ��ü �迭

	char name[20];				// �̸� ���� �޴� ����
	int inKr, inMath, inEng;	// ���� �����޴� ����
	int krsum = 0, mathsum = 0, engsum = 0;	// ���� ���� �� ����� ���� ���� ����
	char* strptr;
	int len;

	// �̸�, ���� �Է� �� ��ºκ�
	for (int i = 0; i < 3; i++) {
		cout << "�̸� : ";
		cin >> name;
		cout << "�������� : ";
		cin >> inKr;
		cout << "�������� : ";
		cin >> inMath;
		cout << "�������� : ";
		cin >> inEng;

		gradeAry[i].SetGradeInfo(name, inKr, inMath, inEng);
		gradeAry[i].ShowGradeInfo();
	}

	// ���� ����, ��� �������� �κ�
	for (int i = 0; i < 3; i++) {
		krsum += gradeAry[i].totalKr();
		mathsum += gradeAry[i].totalMath();
		engsum += gradeAry[i].totalEng();
	}
	cout << "���� ����: " << krsum << ", ���� ����: " << mathsum << ", ���� ����: " << engsum << endl;
	cout << "���� ���: " << (krsum) / 3 << ", ���� ���: " << (mathsum) / 3 << ", ���� ���: " << (engsum) / 3 << endl;

	// ��ü ������ �迭 ���� �Ҹ�
	//for (int i = 0; i < 3; i++) {
	//	delete gradeAry[i];
	//}

	return 0;
}