#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

class Grade {
private:
	char* name;
	int kr, math, eng;
public:
	// 객체포인터 배열 생성자
	/*Grade(const char* myname, int kr, int math, int eng) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		this->kr = kr;
		this->math = math;
		this->eng = eng;
	}*/
	// 객체 배열 생성자
	Grade() {
		cout << "생성자 호출" << endl;
	}
	// 객체 배열 멤버 초기화
	void SetGradeInfo(char* myname, int mykr, int mymath, int myeng) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		kr = mykr;
		math = mymath;
		eng = myeng;
	}
	void ShowGradeInfo() const {
		cout << name << " = [국어:" << kr << ", 수학 : " << math << ", 영어 : " << eng << ", 총점 : " << kr + math + eng << ", 평균 : " << (kr + math + eng) / 3 << ']' << endl;
	}
	int sum() {
		cout << "총점 : ";
		return kr + math + eng;
	}
	int avg() {
		cout << "평균 : ";
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
		cout << "소멸자 호출" << endl;
	}
};

int main() {
	//Grade* gradeAry[3];	// 객체 포인터 배열
	//Grade gradeAry[3];		// 객체 배열


	char name[20];				// 이름 값을 받는 변수
	int inKr, inMath, inEng;	// 과목별 점수받는 변수
	int krsum = 0, mathsum = 0, engsum = 0;	// 과목별 총점 및 평균을 내기 위한 변수
	int num;

	cout << "성적처리 학생 수 : ";
	cin >> num;
	// vector : 동적으로 배열을 할당받을때 사용
	vector<Grade> gradeAry(num);	// 학생 수를 입력 받아 동적으로 할당

	// 이름, 점수 입력 및 출력부분
	for (int i = 0; i < num; i++) {
		cout << "이름 : ";
		cin >> name;
		cout << "국어점수 : ";
		cin >> inKr;
		cout << "수학점수 : ";
		cin >> inMath;
		cout << "영어점수 : ";
		cin >> inEng;

		gradeAry[i].SetGradeInfo(name, inKr, inMath, inEng);
		gradeAry[i].ShowGradeInfo();
	}

	// 과목별 총점, 평균 점수내는 부분
	for (int i = 0; i < num; i++) {
		krsum += gradeAry[i].totalKr();
		mathsum += gradeAry[i].totalMath();
		engsum += gradeAry[i].totalEng();
	}
	cout << "국어 총점: " << krsum << ", 수학 총점: " << mathsum << ", 영어 총점: " << engsum << endl;
	cout << "국어 평균: " << (double)(krsum) / 3 << ", 수학 평균: " << (double)(mathsum) / 3 << ", 영어 평균: " << (double)(engsum) / 3 << endl;

	// 객체 포인터 배열 사용시 소멸
	//for (int i = 0; i < num; i++) {
	//	delete gradeAry[i];
	//}

	return 0;
}