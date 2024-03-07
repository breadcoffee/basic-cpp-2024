#include <iostream>

using namespace std;

// namespace는 서로 같은 이름의 함수를 정의했을때 구분짓기 위해 사용한다.

namespace BestComImpl { // C++ 은 선언과 정의를 구분해야한다.
	void SimpleFunc();
}
namespace BestComImpl {
	void PrettyFunc();
}
namespace ProgComImpl {
	void SimpleFunc();
}

int main() {
	BestComImpl::SimpleFunc(); 
	// :: 연산자는 범위지정 연산자(scope resolution operator)이라고 한다. 줄여서 스코프라고 부른다.
	return 0;
}

void BestComImpl::SimpleFunc() {
	cout << "BestCom::SimpleFunc가 정의한 함수" << endl;
	PrettyFunc(); // 동일 이름 공간에 정의된 함수를 호출할때에는 이름공간을 명시할 필요가 없다.
	ProgComImpl::SimpleFunc(); // 다른 이름 공간
}
void BestComImpl::PrettyFunc() {
	cout << "BestCom::prettyFunc가 정의한 함수" << endl;
}
void ProgComImpl::SimpleFunc() {
	cout << "ProgCom이 정의한 함수" << endl;
}