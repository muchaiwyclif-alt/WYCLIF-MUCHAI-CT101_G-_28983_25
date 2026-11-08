#include<iostream>
#include<string>


using namespace std;
class person {
protected:
	string name;
public:
	void setName(string n) {
		name = n;
	}
	string getName() {
		return name;
	}
};

class LibraryMember :public person {
private:
	int memberID;
	int booksBorrowed;

public:
	LibraryMember(string n, int id, int books) :person() {
		setName(n);
		memberID = id;
		booksBorrowed = books;
	}
	int getMemberID() {
		return memberID;
	}
	int getBooksBorrowed() {
		return booksBorrowed;
	}
};
class PremiumMember :public LibraryMember {
private:
	double membershipFee;
public:
	PremiumMember(string n, int id, int books, double fee):LibraryMember(n,id,books)
	{
		membershipFee = fee;
	}
	double getMembershipFee() {
		return membershipFee;
	}
};
int main() {
	LibraryMember member("Alice Wanjiru", 101, 3);
	PremiumMember premium("Brian Otieno", 202, 5, 1500.50);

	cout << "--- Library Member ---" << endl;
	cout << "Name: " << member.getName() << endl;
	cout << "Member ID: " << member.getMemberID() << endl;
	cout << "Books Borrowed: " << member.getBooksBorrowed() << endl;

	cout << "\n--- Premium Member ---" << endl;
	cout << "Name: " << premium.getName() << endl;
	cout << "Member ID: " << premium.getMemberID() << endl;
	cout << "Books Borrowed: " << premium.getBooksBorrowed() << endl;
	cout << "Membership Fee: " << premium.getMembershipFee() << endl;

	return 0;
}