#include <iostream>
using namespace std;

class FruitSeller {
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money) { // ������(���: ��ü�� �����ϰ� �ʱ�ȭ�Ѵ�)
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
		cout << "���� ���: " << numOfApples << endl;
		cout << "�Ǹ� ����: " << myMoney << endl;
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
		cout << "���� �ܾ�: " << myMoney << endl;
		cout << "��� ����: " << numOfApples << endl;
	}
};

int main() {
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	// FruitBuyer buyer;
	// buyer.InitMembers(5000); // �ʱ�ȭ �Լ� ���
	FruitBuyer buyer(5000); // ������ ���
	buyer.BuyApples(seller, 2000);

	cout << "���� �Ǹ����� ��Ȳ: " << endl;
	seller.ShowSaleResult();
	cout << "���� �������� ��Ȳ: " << endl;
	buyer.ShowBuyResult();
	return 0;
}