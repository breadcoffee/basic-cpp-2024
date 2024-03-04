#include <iostream>
using namespace std;

class RemoteControl {
public:
	virtual void on() { cout << "RemoteControl" << endl; }
};

class SamsungTv : public RemoteControl {
public:
	void on() { cout << "SamsungTv on" << endl; }
};

class LGTv : public RemoteControl{
public:
	void on() { cout << "LGTv on" << endl; }
};

int main() {
	RemoteControl* remote = new SamsungTv();
	remote->on();

	remote = new LGTv();
	remote->on();

	delete remote;

	return 0;
}