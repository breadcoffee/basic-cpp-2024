#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Grade {
private:
	char name[50];
	int kr, math, eng;
public:
	Grade(const char* myname, int mykr, int mymath, int myeng) : kr(mykr), math(mymath), eng(myeng){
		strcpy(name, myname);
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
		cout << "전체 성적" << endl;
		return pos1 + pos2 + pos3;
	}
};

int main() {
	Adder adder;
	char name[50];
	int a, b, c;
	cout << "이름 국어 수학 영어성적을 순서대로 입력하세요 : ";
	cin >> name >> a >> b >> c;
	Grade st1(name, a, b, c);
	st1.ShowGradeInfo();
	Grade st2("김철수", 98, 98, 98);
	st2.ShowGradeInfo();
	Grade st3("이주원", 100, 100, 100);
	st3.ShowGradeInfo();
	cout << endl;

	cout << adder(st1, st2, st3) << endl;

	return 0;
}