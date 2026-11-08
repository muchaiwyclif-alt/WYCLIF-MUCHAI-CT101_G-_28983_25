#include <iostream>
#include <string>
using namespace std;

class Customer {
protected:
    string name;

public:
    Customer() {}                        
    Customer(string n) : name(n) {}      
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }
};

class Loan : public Customer {
private:
    double loanAmount;
    double interestRate;

public:
    Loan(string n, double amount, double rate)
        : Customer(n) {                  
        loanAmount = amount;
        interestRate = rate;
    }

    double getLoanAmount() {
        return loanAmount;
    }

    double getInterestRate() {
        return interestRate;
    }
};

class HomeLoan : public Loan {
private:
    double propertyValue;

public:
    HomeLoan(string n, double amount, double rate, double propValue)
        : Loan(n, amount, rate) {       
        propertyValue = propValue;
    }

    double getPropertyValue() {
        return propertyValue;
    }
};

int main() {
    Loan personalLoan("Alice Wanjiru", 250000.0, 12.5);
    HomeLoan homeLoan("Brian Otieno", 5000000.0, 9.75, 8500000.0);

    cout << "--- Personal Loan ---" << endl;
    cout << "Customer: " << personalLoan.getName() << endl;
    cout << "Loan Amount: " << personalLoan.getLoanAmount() << endl;
    cout << "Interest Rate: " << personalLoan.getInterestRate() << "%" << endl;

    cout << "\n--- Home Loan ---" << endl;
    cout << "Customer: " << homeLoan.getName() << endl;
    cout << "Loan Amount: " << homeLoan.getLoanAmount() << endl;
    cout << "Interest Rate: " << homeLoan.getInterestRate() << "%" << endl;
    cout << "Property Value: " << homeLoan.getPropertyValue() << endl;

    return 0;
}