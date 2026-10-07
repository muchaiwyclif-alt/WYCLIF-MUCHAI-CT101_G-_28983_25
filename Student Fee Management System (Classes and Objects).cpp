//WYCLIF MUCHAI CT101/G/28983/25
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    string admissionNumber;
    double feeBalance;

public:
    
    void inputStudent() {
        cout << "Enter student name: ";
        cin>>name;

        cout << "Enter admission number: ";
        cin>>admissionNumber;

        cout << "Enter fee balance (KES): ";
        cin >> feeBalance;
    }

    void makePayment(double amount) {
        if (amount <= 0) {
            cout << "Error: Payment must be greater than zero." << endl;
        }
        else if (amount > feeBalance) {
            cout << "Error: Payment exceeds the outstanding balance of KES "
                << feeBalance << "." << endl;
        }
        else {
            feeBalance -= amount;
            cout << "Payment of KES " << amount << " received successfully." << endl;
        }
    }

    void displayStatus() const {
        cout << "------------------------------" << endl;
        cout << "Name             : " << name << endl;
        cout << "Admission No.    : " << admissionNumber << endl;
        cout << "Fee Balance      : KES " << feeBalance << endl;
        cout << "------------------------------" << endl;
    }
};

int main() {
    Student student;
    double payment;

    cout << "=== School Fee Processing System ===" << endl;

    student.inputStudent();

    cout << "Fee status before payment:" << endl;
    student.displayStatus();

    cout << "Enter payment amount (KES): ";
    cin >> payment;
    student.makePayment(payment);

    
    cout << "Updated fee status:" << endl;
    student.displayStatus();

}