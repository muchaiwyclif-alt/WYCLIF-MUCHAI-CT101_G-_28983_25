//WCLIF MUCHAI CT101/G/28983/25
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string customer_name, model;
    int quantity;
    float price, total_sales;

    cout << "Enter your name: ";
    cin >> customer_name;

    cout << "Enter phone model: ";
    cin >> model;

    cout << "Enter quantity purchased: ";
    cin >> quantity;

    cout << "Enter price per phone: ";
    cin >> price;

    total_sales = quantity * price;

    cout << "\nSALES RECEIPT" << endl;
    cout << "==============" << endl;
    cout << "Customer Name: " << customer_name << endl;
    cout << "Phone Model: " << model << endl;
    cout << "Quantity Purchased: " << quantity << endl;
    cout << "Price per Phone: " << price << endl;
    cout << "==============" << endl;
    cout << "TOTAL SALES: " << total_sales << endl;

   
}