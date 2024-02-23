#pragma once
#ifndef __TEST27_FILEDIV_H__
#define __TEST27_FILEDIV_H__
#include <iostream>

class human {
private:
	char name[20];
	int age;
	char job[20];
public:
	inline void showHuman() {
		printf("name: %s age: %d job: %s\n", name, age, job);
	}

	void InitMembers(const char* name, int age, const char* job);
};

#endif