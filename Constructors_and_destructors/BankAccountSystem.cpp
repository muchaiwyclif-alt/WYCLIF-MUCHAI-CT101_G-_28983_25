#include<iostream>
using namespace std;

class BankAccount {
private:
	string AccountHolderName;
	int AccountNumber;
	double AccountBalance;

public:
	BankAccount(string name, int number, double balance) {
		AccountHolderName = name;
		AccountNumber = number;
		AccountBalance = balance;
		cout << "account successfully created" << endl;
	}
	void displayAccount() {
		cout << "Account Holder Name: " << AccountHolderName << endl;
		cout << "Account Number: " << AccountNumber << endl;
		cout << "Account Balance: " << AccountBalance << endl;
	}
	~BankAccount() {
		cout << "account successfully deleted" << endl;
	}
};
int main()
{
	BankAccount account1("John Doe", 123456, 1000.50);
	account1.displayAccount();
	
}