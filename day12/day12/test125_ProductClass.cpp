#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Product {
private:
	char id[50];
	int price;
	char producer[50];
public:
	Product(const char* id, int price, const char* producer) : price(price) {
		//id = new char[(strlen(id) + 1)];
		strcpy(this->id, id);
		//producer = new char[(strlen(producer) + 1)];
		strcpy(this->producer, producer);
	}
	void ShowProductInfo() {
		cout << "��ǰ ID : " << id << endl;
		cout << "��ǰ ���� : " << price << endl;
		cout << "��ǰ ���ۻ� : " << producer << endl;
	}
	void addProduct() {
		
		//addBookProduct();
	}
	~Product() {

	}
};

class Book : public Product{
private:
	char ISBN[50];
	char author[50];
	char title[50];
public:
	Book(const char* id, int price, const char* producer, const char* ISBN, const char* author, const char* title) : Product(id, price, producer) {
		strcpy(this->ISBN, ISBN);
		strcpy(this->author, author);
		strcpy(this->title, title);
	}
	void addBookProduct() {
		cout << "å ISBN �Է� : ";
		cin >> ISBN;
		cout << "å �۰� �Է� : ";
		cin >> author;
		cout << "å ���� �Է� : ";
		cin >> title;
		cout << "å�� �߰� �Ǿ����ϴ�" << endl;
	}
	void ShowBookInfo() {
		ShowProductInfo();
		cout << "å ISBN : " << ISBN << endl;
		cout << "å �۰� : " << author << endl;
		cout << "å ���� : " << title << endl;
	}
	void SearchBook(const char* title) {
		if(this->title == title){
			cout << "ã���ô� å : " << title << "�ֽ��ϴ�" << endl;
		}
	}
	~Book(){}
};

class ProductHandler {
private:
	Product* product[100];
	int proNum;
public:
	ProductHandler() : proNum(0) {}
	void AddProduct(Product* pro) {
		product[proNum++] = pro;
	}
	void ShowAllProductInfo() const {
		for (int i = 0; i < proNum; i++)
			product[i]->ShowProductInfo();
	}
	//void SearchProductInfo(const char* id) const {
	//	for (int i = 0; i < proNum; i++)
	//		if (product[i].id == id) {

	//		}
	//}
	~ProductHandler() {
		for (int i = 0; i < proNum; i++)
			delete product[i];
	}
};

int main(){
	int menu, choice;
	char id[50];
	int price;
	char producer[50];
	char ISBN[50];
	char author[50];
	char title[50];
	ProductHandler handler;

	do {
		cout << "----��ǰ���� ���α׷�----" << endl;
		cout << "1. ��ǰ�߰�  2. ��ǰ���  3. ��ǰ�˻�  0. ����" << endl;
		cout << "-> ";
		cin >> menu;

		cout << "1. å  2. �ڵ���  3. ��ǻ�� �� ���ÿ�" << endl;
		cout << "-> ";
		cin >> choice;

		if (menu == 1) {
			cout << "��ǰ ID �Է� : ";
			cin >> id;
			cout << "��ǰ ���� �Է� : ";
			cin >> price;
			cout << "��ǰ ���ۻ� �Է� : ";
			cin >> producer;
			if (choice == 1) {
				cout << "å ISBN �Է� : ";
				cin >> ISBN;
				cout << "å �۰� �Է� : ";
				cin >> author;
				cout << "å ���� �Է� : ";
				cin >> title;
				handler.AddProduct(new Book(id, price, producer, ISBN, author, title));
				continue;
			}

			continue;
		}
		else if (menu == 2) {
			handler.ShowAllProductInfo();
			continue;
		}
		else if (menu == 3) {
			continue;
		}
		else if (menu == 0) {
			exit(0);
		}
	} while (menu);

	return 0;
}