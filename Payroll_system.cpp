//WYCLIF MUCHAI CT101/G/28983/25

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const double RATE_PER_HOUR = 50.0;

void getEmployeeDetails(string& name, double& basicSalary, double& overtimeHours)
{
    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    cout << "Enter Overtime Hours: ";
    cin >> overtimeHours;
}
double calculateOvertimePay(double overtimeHours)
{
    return overtimeHours * RATE_PER_HOUR;
}

double calculateNetSalary(double basicSalary, double overtimePay)
{
    return basicSalary + overtimePay;
}

void displayPayslip(const string& name, double basicSalary,
    double overtimeHours, double overtimePay, double netSalary)
{
    cout << "\n========== EMPLOYEE PAYSLIP ==========\n";

    cout << left << setw(25) << "Employee Name:" << name << endl;
    cout << left << setw(25) << "Basic Salary:" << fixed << setprecision(2) << basicSalary << endl;
    cout << left << setw(25) << "Overtime Hours:" << overtimeHours << endl;
    cout << left << setw(25) << "Overtime Rate/Hour:" << RATE_PER_HOUR << endl;
    cout << left << setw(25) << "Overtime Pay:" << overtimePay << endl;

    cout << "--------------------------------------\n";

    cout << left << setw(25) << "NET SALARY:" << netSalary << endl;

    cout << "======================================\n";
}


int main()
{
    string name;
    double basicSalary, overtimeHours;
    double overtimePay, netSalary;

    cout << "===== Payroll System =====\n";

    getEmployeeDetails(name, basicSalary, overtimeHours);

    overtimePay = calculateOvertimePay(overtimeHours);

    netSalary = calculateNetSalary(basicSalary, overtimePay);

    displayPayslip(name, basicSalary, overtimeHours, overtimePay, netSalary);

    return 0;
}
