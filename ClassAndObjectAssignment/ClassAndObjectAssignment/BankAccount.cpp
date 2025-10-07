#include<iostream>
using namespace std;

class BankAccount {
	string accountNumber;
	double balance;
	
public:
	void setAccountNumber(string accountNumber) {
		BankAccount::accountNumber = accountNumber;
	}
	void setBalance(double balance) {
		BankAccount::balance = balance;
	}
	void withdraw() {
		cout << "Withdraw:" << endl;
		cout << "Enter the amount :";
		double amount;
		cin >> amount;
		if (balance < amount) {
			cout << "Insufficient funds"<<endl;
		}
		else {
			balance = balance - amount;
			cout << "Withdrawn Successfully" << endl;
		}
		
	}
	void deposit() {
		cout << "Deposit:"<<endl;
		double amount;
		cout << "Enter deposit amount:";
		cin >> amount;
		balance = balance + amount;
		cout << "Deposit is successfull"<<endl;
	}

	void displayBalance() {
		cout << "Your balance :" << balance<<endl;
	}
};

int main() {
	BankAccount b1;
	b1.setAccountNumber("1234567890");
	b1.setBalance(22000);
	b1.withdraw();
	b1.deposit();
	b1.displayBalance();
}