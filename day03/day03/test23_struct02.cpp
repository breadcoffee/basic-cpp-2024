#include <iostream>

using namespace std;

class human {
public:
	char name[20];
	int age;
	char job[20];

	void showHuman() {
		printf("name: %s age: %d job: %s\n", name, age, job);
	}

}Human;


int main() {

	human h1 = { "È«±æµ¿", 50, "ÀÇÀû" };
	h1.showHuman();

	return 0;
}