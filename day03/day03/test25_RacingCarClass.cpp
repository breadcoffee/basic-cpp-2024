#include <iostream>
#include <cstring>
using namespace std;

namespace CAR_CONST {
	enum {	// 열거형
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

class Car {
	// 멤버변수, 필드, 속성
private:
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int carSpeed;
	//멤버함수, 메서드, 기능
public:
	void InitMembers(const char* ID, int fuel);
	void ShowCarState();	// 상태정보 출력
	void Accel();			// 엑셀, 속도증가
	void Break();			// 브레이크, 속도감소
};

void Car::InitMembers(const char* ID, int fuel) {
	strcpy(gamerID, ID); //전달된 ID의 문자열을 gamerID에 저장
	fuelGauge = fuel;
	carSpeed = 0;
}

void Car::ShowCarState() {
	cout << "소유자ID: " << gamerID << endl;
	cout << "연료량: " << fuelGauge << "%" << endl;
	cout << "현재속도: " << carSpeed <<"km/s" << endl << endl;
}

void Car::Accel() {
	if (fuelGauge <= 0) return;
	else fuelGauge -= CAR_CONST::FUEL_STEP;

	if ((carSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD) {
		carSpeed = CAR_CONST::MAX_SPD;
		return;
	}
	carSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break() {
	if (carSpeed < CAR_CONST::BRK_STEP) {
		carSpeed = 0;
		return;
	}
	carSpeed -= CAR_CONST::BRK_STEP;
}

int main() {
	Car run99;							// class car타입의 객체생성
	run99.InitMembers("run99", 100);	// run99객체의 InitMembers() 메서드 호출
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	return 0;
}