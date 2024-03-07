#include <iostream>
using namespace std;

class FruitSeller {
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money) { // 생성자(기능: 객체를 생성하고 초기화한다)
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}
	int SaleApples(int money) {
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}
	void ShowSaleResult() const {
		cout << "남은 사과: " << numOfApples << endl;
		cout << "판매 수익: " << myMoney << endl;
	}
};

class FruitBuyer {
	int myMoney;
	int numOfApples;

public:
	FruitBuyer(int money) {
		myMoney = money;
		numOfApples = 0;
	}
	void BuyApples(FruitSeller& refseller, int money) {
		numOfApples += refseller.SaleApples(money);
		myMoney -= money;
	}
	void ShowBuyResult() const{
		cout << "현재 잔액: " << myMoney << endl;
		cout << "사과 개수: " << numOfApples << endl;
	}
};

int main() {
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	// FruitBuyer buyer;
	// buyer.InitMembers(5000); // 초기화 함수 사용
	FruitBuyer buyer(5000); // 생성자 사용
	buyer.BuyApples(seller, 2000);

	cout << "과일 판매자의 현황: " << endl;
	seller.ShowSaleResult();
	cout << "과일 구매자의 현황: " << endl;
	buyer.ShowBuyResult();
	return 0;
}