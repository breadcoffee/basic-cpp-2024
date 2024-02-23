#include <iostream>
#include <cstring>
#include "test26_Car.h"
using namespace std;

void Car::InitMembers(const char* ID, int fuel) {
	strcpy(gamerID, ID); //���޵� ID�� ���ڿ��� gamerID�� ����
	fuelGauge = fuel;
	carSpeed = 0;
}

void Car::ShowCarState() {
	cout << "������ID: " << gamerID << endl;
	cout << "���ᷮ: " << fuelGauge << "%" << endl;
	cout << "����ӵ�: " << carSpeed << "km/s" << endl << endl;
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