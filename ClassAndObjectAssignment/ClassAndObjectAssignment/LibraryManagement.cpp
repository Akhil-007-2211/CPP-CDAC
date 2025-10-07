#include<iostream>
using namespace std;

class Books {
	string title;
	string author;
public:
	int price;

public:
	void input() {
		cout << "Enter book title:";
		cin >> title;
		cout << "Enter author name:";
		cin >> author;
		cout << "Enter price of book:";
		cin >> price;
	}

	void display() {
		cout << "Book title:" <<title <<endl;
		cout << "Booke Author : " << author << endl;
		cout << "Book price:" << price << endl;
	}
};

int main() {
	Books b[5];
	for (int i = 0; i < 5; i++) {
		b[i].input();
		cout << "--------------------------"<<endl;
	}

	for (int i = 0; i < 5; i++) {
		b[i].display();
		cout << "******************************" << endl;
	}
	int maxPrice = b[0].price;
	for (int i = 0; i < 5; i++) {
		if (maxPrice < b[i].price) {
			maxPrice = b[i].price;
		}
	}
	cout << "Max price of the book in Library :" << maxPrice;
}