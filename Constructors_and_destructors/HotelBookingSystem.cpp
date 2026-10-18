#include<iostream>
using namespace std;


class RoomBooking{
private:
	string GuestName;
	int RoomNumber;
	int Numberofdaysbooked;

public:
	RoomBooking(string name, int room, int days) {
		GuestName = name;
		RoomNumber = room;
		Numberofdaysbooked = days;
		cout << "Room booked confirmed " << endl;
	}
	void displayBooking() {
		cout << "Guest Name: " << GuestName << endl;
		cout << "Room Number: " << RoomNumber << endl;
		cout << "Number of days booked: " << Numberofdaysbooked << endl;
	}
	~RoomBooking() {
		cout << "Booking ended,room released" << endl;
	}
};

int main() {
	RoomBooking booking1("John Doe", 101, 3);
	booking1.displayBooking();
}