#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class PermanentWorker {
private:
	char name[100];
	int salary;		// 매달 지불해야하는 급여액
public:
	PermanentWorker(const char* name, int money) : salary(money) {
		strcpy(this->name, name);
	}
	int GetPay() const {
		return salary;
	}
	void ShowSalaryInfo() const {
		cout << "name: " << name << endl;
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class EmployeeHandler {
private:
	PermanentWorker* empList[50];		// 객체포인터 배열
	int empNum;
public:
	EmployeeHandler() : empNum(0) {}
	void AddEmployee(PermanentWorker* emp) {	// 정규직 객체의 포인터를 받아서 empList 배열에 집어넣는다.
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const {
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo();		// empList배열의 요소값(객체주소)을 통해서 멤버함수에 접근
	}
	void ShowTotalSalary() const {
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();
		cout << "salary sum: " << sum << endl;
	}
	~EmployeeHandler() {
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

int main() {
	// 직원 관리를 목적으로 설계된 컨트롤 클래스의 객체생성
	EmployeeHandler handler;

	// 직원등록
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));
	handler.AddEmployee(new PermanentWorker("JUN", 2000));

	// 이번 달에 지불해야 할 급여의 정보
	handler.ShowAllSalaryInfo();

	// 이번 달에 지불해야 할 급여의 총합
	handler.ShowTotalSalary();

	return 0;
}