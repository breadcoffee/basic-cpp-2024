#include <iostream>
using namespace std;

int main() {
	int code = 97;
	cout << code << endl;
	cout << (char)code << endl;
	
	cout << "=====================" << endl;
	char arr[6] = { 'a', 'b', 'c', 'd', 'e' };
	cout << arr << endl;

	cout << "=====================" << endl;
	char arr1[] = { 'a', 'b', 'c', '\0', 'e' };	// \0 널문자 : 문자열의 끝을 알림
	cout << arr1 << endl;
	cout << sizeof(arr1) << endl;	// 전체 문자 배열 크기
	cout << strlen(arr1) << endl;	// 널문자 앞까지의 크기

	cout << "=====================" << endl;
	char str[] = "string";			// 자동으로 널문자가 붙음
	cout << str << endl;
	cout << sizeof(str) << endl;
	cout << strlen(str) << endl;
	
	str[0] = 'S';					// 문자 변경
	cout << str << endl;

	cout << "=====================" << endl;
	const char* pstr = "STRING";	// 문자열 포인터는 변경이 안되기 때문에 const를 붙임
	cout << pstr << endl;
	cout << sizeof(pstr) << endl;
	cout << strlen(pstr) << endl;

	// pstr[0] = 's';				// 문자열을 포인터로 사용하는 경우 변경이 불가능하다.

	return 0;
}