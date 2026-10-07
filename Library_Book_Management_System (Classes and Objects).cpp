#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int copiesAvailable;

public:
    
    void inputDetails() {
        cout << "Enter book title: ";
        cin>>title;


        cout << "Enter author: ";
        cin >> author;

        cout << "Enter number of copies available: ";
        cin >> copiesAvailable;
    }

    void borrowBook() {
        if (copiesAvailable > 0) {
            copiesAvailable--;
            cout << "\nBook borrowed successfully." << endl;
        }
        else {
            cout << "\nSorry, no copies are currently available." << endl;
        }
    }

    void displayDetails() const {
        cout << "------------------------------" << endl;
        cout << "Title            : " << title << endl;
        cout << "Author           : " << author << endl;
        cout << "Copies Available : " << copiesAvailable << endl;
        cout << "------------------------------" << endl;
    }
};

int main() {
    Book book;

    cout << "=== Library Book Management System ===" << endl;

    book.inputDetails();

    cout << "Book details before borrowing:" << endl;
    book.displayDetails();

    book.borrowBook();

    cout << "Updated book details:" << endl;
    book.displayDetails();

   
}