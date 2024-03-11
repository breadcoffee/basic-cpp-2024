#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T Max(T a, T b) {
	return a > b ? a : b;
}

template <>
char* Max(char* a, char* b) {
	cout << "char* Max <char*>(char* a, char* b)" << endl;
	return strlen(a) > strlen(b) ? a : b;
}

template <>
const char* Max(const char* a, const char* b) {
	cout << "const char* Max <const char*>(const char* a, const char* b)" << endl;
	return strcmp(a, b) > 0 ? a : b;	// strcmp : 두 개의 문자열 길이, 그리고 문자의 크기를 비교 a가 크면 1, 같으면 0, b가 크면 -1로 출력
}

int main() {
	cout << Max(11, 15) << endl;
	cout << Max('T', 'Q') << endl;
	cout << Max(3.5, 7.5) << endl;
	cout << Max("Simple", "Best") << endl;	// const char* 형 호출

	char str1[] = "Simple";
	char str2[] = "Best";
	cout << Max(str1, str2) << endl;		// char* 형 호출

	return 0;
}