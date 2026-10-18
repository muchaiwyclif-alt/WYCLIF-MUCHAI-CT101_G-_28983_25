#include<iostream>
#include<iomanip>
using namespace std;

class Employee
{
private:
	string Employeename;
	int EmployeeID;
	double BasicSalary;

public:
	void setEmployeeDetails()
	{
		cout << "Enter Employee Name: " << endl ;
		cin >> Employeename;
		cout << "Enter Employee ID: " << endl;
		cin >> EmployeeID;
		cout << "Enter Basic Salary: " << endl;
		cin >> BasicSalary;
	}
	double calculateSalary()
	{
		return BasicSalary + 0.10 *BasicSalary;
	}
	void displayEmployeeDetails()
	{
		
		cout << "Employee Name: " << Employeename << endl;
		cout << "Employee ID: " << EmployeeID << endl;
		cout << "Basic Salary: " << BasicSalary << endl;
		cout << "Net Salary: " << calculateSalary() << endl;
	}
};

int main()
{
	Employee emp;
	emp.setEmployeeDetails();
	emp.displayEmployeeDetails();

	return 0;
	
}