
#include <iostream>
#include<string>
using namespace std;

class Person {
	protected: 		
		string name;
		int age;
public:
	void displayPerson() {
		cout << "Name:" << name << endl;
		cout << "Age:" << age << endl;
	}
	
};
class Student :public Person {
private:
	string Admissionnumber;
	string Studentclass;
public:
	void inputDetails() {
		cout << "Enter name: ";
		cin >> name;

		cout << "Enter age: ";
		cin >> age;


		cout << "Enter admission number: ";
		cin >> Admissionnumber;

		cout << "Enter class: ";
		cin >> Studentclass;
	}

	void displayStudent()
	{
		displayPerson();
		cout << "Admission Number:" << Admissionnumber << endl;
		cout << "Class:" << Studentclass << endl;
	}
};
int main() {
	Student s;
	s.inputDetails();

	s.displayStudent();
}