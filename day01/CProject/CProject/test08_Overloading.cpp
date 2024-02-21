#include <iostream>

using namespace std;

void MyFunc() {
	cout << "MyFunc() called" << endl;
}

void MyFunc(char c) {
	cout << "MyFunc(char c) called" << endl;
}

void MyFunc(int a, int b) {
	cout << "MyFunc(int a, int b) called" << endl;
}
/* C ++ 오버로딩
* 오버로딩 : 메서드의 이름이 같아도 중복 정의가 가능하다.
* C ++은 함수 호출 시 '함수의 이름', '매개변수의 선언' 두 개의 매개체를 이용하여 함수를 찾는다.
* 그렇기에 밑에서 보듯이 C++은 매개변수의 선언 형태가 다르면 다른 함수로 인식한다.
*/

int main(){ 
	MyFunc(); 
	MyFunc('A');
	MyFunc(12, 13);

	return 0;
}