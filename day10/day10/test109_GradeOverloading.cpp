#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Grade {
private:
	char* name;
	int kr, math, eng;
public:
	Grade(const char* name, int kr, int math, int eng){
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->kr = kr;
		this->math = math;
		this->eng = eng;
	}
	Grade operator+(const Grade& pos) const {
		return Grade(name ,kr + pos.kr, math + pos.math, eng + pos.eng);
	}
	void ShowGradeInfo() const {
		cout << name << " = [국어:" << kr << ", 수학 : " << math << ", 영어 : " << eng << ", 총점 : " << kr + math + eng << ", 평균 : " << (kr + math + eng) / 3 << ']' << endl;
	}
	~Grade() { }
	friend ostream& operator<<(ostream& os, const Grade& pos);
};

ostream& operator<<(ostream& os, const Grade& pos) {
	os << "국어 총점: " << pos.kr << ", 수학 총점: " << pos.math << ", 영어 총점: " << pos.eng << endl;
	os << "국어 평균: " << (pos.kr) / 3 << ", 수학 평균: " << (pos.math) / 3 << ", 영어 평균: " << (pos.eng) / 3 << endl;
	return os;
}

class Adder {
public:
	Grade operator()(const Grade& pos1, const Grade& pos2, const Grade& pos3) {
		cout << "===============전체 성적===============" << endl;
		return pos1 + pos2 + pos3;
	}
};

int main() {
	Grade* gradeAry[3];	// 객체 포인터 배열

	Adder adder;
	char name[20];
	int inKr, inMath, inEng;

	for (int i = 0; i < 3; i++) {
		cout << "이름 : ";
		cin >> name;
		cout << "국어점수 : ";
		cin >> inKr;
		cout << "수학점수 : ";
		cin >> inMath;
		cout << "영어점수 : ";
		cin >> inEng;

		gradeAry[i] = new Grade(name, inKr, inMath, inEng);
		gradeAry[i]->ShowGradeInfo();
	}
	// 연산자 오버로딩으로 과목별 총점 평균 계산
	cout << adder(*gradeAry[0], *gradeAry[1], *gradeAry[2]) << endl;

	for (int i = 0; i < 3; i++) {
		delete gradeAry[i];
	}

	return 0;
}