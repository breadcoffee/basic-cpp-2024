#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;		// int 타입의 vector생성

	for (int i = 0; i < 10; i++) {
		v.push_back(i + 1);
		//printf("v[%d]: %d\n", i, v[i]);
		//printf("v.size(): %ul\n", v.size());		// 원소 갯수
		//printf("v.capacity(): %d\n", v.capacity());	// 메모리 공간(백터의 크기가 capacity()의 크기를 초과해 버린다면 reallocate(재할당)이 발생한다.)
													// capacity() 크기를 미리 충분히 할당해주면 불필요한 재할당 과정을 없앨 수 있음
	}

	v.push_back(20);
	v.push_back(21);

	for (int i = 0; i < 10; i++) {
		//v.push_back(i + 1);
		printf("v[%d]: %d\n", i, v[i]);
		printf("v.at(i): %d\n", v.at(i));
	}

	cout << "iterator : 반복자" << endl;
	vector<int>::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << "*iter: " << *iter << endl;
	}

	vector <string> vs;

	vs.push_back("Hi");
	vs.push_back("Hello");
	vs.push_back("Hongkildong");
	cout << "vs.front() : " << vs.front() << endl;
	cout << "vs.back() : " << vs.back() << endl;

	vector<string>::iterator it;
	for (it = vs.begin(); it != vs.end(); it++) {
		cout << *it << endl;
	}

	cout << "초기화" << endl;
	vector<int> v1;						// 크기가 0인 벡터가 생성
	vector<int> v2(5);					// 크기가 5인 벡터가 생성(0으로 초기화)
	vector<int> v3 = { 10, 20, 30 };	// 배열로 초기화
	vector<int> v4(10, 7);				// 크기가 10이고, 7로 초기화

	return 0;
}