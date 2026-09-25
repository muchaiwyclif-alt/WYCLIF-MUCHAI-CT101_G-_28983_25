//WCLIF MUCHAI CT101/G/28983/25
#include <iostream>

using namespace std;

int main()
{
	string student_name, Grade;
	int exam_marks;
	
	cout << "Enter the name :" << endl;
	cin >> student_name;

	cout << "Enter the marks :" << endl;
	cin >> exam_marks;

	if (exam_marks >= 70) {
		Grade = "A";
	}
	else if (exam_marks >= 60) {
		Grade = "B";
	}

	else if (exam_marks >= 50) {
		Grade = "C";
	}
	else if (exam_marks >= 40) {
		Grade = "D";
	}

	else { Grade = "E"; }

	cout << "====================" << endl;
	cout << "Student Name :" << student_name << endl;
	cout << "Marks :" << exam_marks << endl;
	cout << "Grade :" << Grade << endl;
		
}








