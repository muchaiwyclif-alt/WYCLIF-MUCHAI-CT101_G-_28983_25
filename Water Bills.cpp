//WYCLIF MUCHAI CT101/G/28983/25
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


void getCustomerDetails(string& customerName, double& unitsConsumed)
{
    cout << "Enter customer name: ";
    cin >> customerName;

    cout << "Enter units consumed: ";
    cin >> unitsConsumed;
}

double calculateBill(double unitsConsumed, double ratePerUnit)
{
    return unitsConsumed * ratePerUnit;
}

double applyDiscount(double bill)
{
    if (bill > 100 * 50)
    {
        return bill * 0.10;
    }
    else
    {
        return 0.00;
    }
}

void displayBill(string customerName, double unitsConsumed,
    double totalBill, double discount,
    double finalAmount)
{
    cout << "\n========================================\n";
    cout << "             WATER BILL\n";
    cout << "========================================\n";
    cout << "Customer Name    : " << customerName << endl;
    cout << "Units Consumed   : " << unitsConsumed << endl;
    cout << "Total Bill       : KSh "
        << fixed << setprecision(2) << totalBill << endl;
    cout << "Discount         : KSh " << discount << endl;
    cout << "----------------------------------------\n";
    cout << "Amount Payable   : KSh " << finalAmount << endl;
    cout << "========================================\n";
}

int main()
{
    string customerName;
    double unitsConsumed;
    double totalBill, discount, finalAmount;

    
    const double ratePerUnit = 50.00;

    
    getCustomerDetails(customerName, unitsConsumed);

    
    totalBill = calculateBill(unitsConsumed, ratePerUnit);

    
    discount = applyDiscount(totalBill);

    finalAmount = totalBill - discount;

    displayBill(customerName, unitsConsumed,
        totalBill, discount, finalAmount);

    return 0;
}