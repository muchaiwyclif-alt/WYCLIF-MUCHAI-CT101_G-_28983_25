//WCLIF MUCHAI CT101/G/28983/25
#include <iostream>
#include <string>
using namespace std;

int main() {
    string Student_name, Test_result;
    float theory_marks, practical_marks, average_score;

    cout << "Enter the name: " << endl;
    cin >> Student_name;

    cout << "Enter the practical marks: " << endl;
    cin >> practical_marks;

    cout << "Enter the theory marks: " << endl;
    cin >> theory_marks;

    average_score = (practical_marks + theory_marks) / 2;

    if (average_score >= 50) {
        Test_result = "Pass";
    }
    else {
        Test_result = "Fail";
    }

    cout << "DRIVING TEST RESULT:" << endl;
    cout << "===========================" << endl;
    cout << "Student Name: " << Student_name << endl;
    cout << "Theory Marks: " << theory_marks << endl;
    cout << "Practical Marks: " << practical_marks << endl;
    cout << "Test Result: " << Test_result << endl;
    cout << "Average Score: " << average_score << endl;

    return 0;
}









































