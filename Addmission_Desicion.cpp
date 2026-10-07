//WYCLIF MUCHAI CT101/G/28983/25
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    double score;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter exam score: ";
    cin >> score;

    string decision;

    if (age >= 18) {
        if (score >= 50) {
            decision = "Admitted";
        }
        else {
            decision = "Not Admitted: Low Score";
        }
    }
    else {
        decision = "Not Admitted: Underage";
    }

   
    cout << "\n------------------------------" << endl;
    cout << "=== Ruiru College Admission System ===" << endl;
    cout << "Student Name : " << name << endl;
    cout << "Age          : " << age << endl;
    cout << "Exam Score   : " << score << endl;
    cout << "Decision     : " << decision << endl;
    cout << "------------------------------" << endl;

    return 0;
}