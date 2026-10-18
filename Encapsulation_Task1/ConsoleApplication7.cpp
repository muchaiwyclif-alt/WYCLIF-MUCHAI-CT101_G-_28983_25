#include<iostream>
using namespace std;	

class Student {
private:
	string StudentName;
	int AdmissionNumber;
	double FeeBalance;

public:
	void inputStudentData() {
		cout << "Enter Student Name: ";
		cin >> StudentName;
		cout << "Enter Admission Number: ";
		cin >> AdmissionNumber;
		cout << "Enter Fee Balance: ";
		cin >> FeeBalance;
	}
	void makePayment(double amount) {
		if (amount <= 0) {
			cout << "Invalid payment amount." << endl;
		}
		else if (amount > FeeBalance) {
			cout << "Payment exceeds fee balance. Payment not processed." << endl;
		}

		else {
			FeeBalance -= amount;
			cout << "Payment of ksh" << amount << " processed." << endl;
		}
	}
		void displayStatus() {
			cout << "Student Name: " << StudentName << endl;
			cout << "Admission Number: " << AdmissionNumber << endl;
			cout << "Fee Balance: ksh" << FeeBalance << endl;

		}
	
};
int main()
{
	Student s;
	s.inputStudentData();

	double paymentamount;
	cout << "Enter payment amount: ";
	cin >> paymentamount;
	s.makePayment(paymentamount);

	s.displayStatus();
	
}