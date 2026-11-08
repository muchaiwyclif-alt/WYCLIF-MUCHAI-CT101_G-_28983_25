#include<iostream>
#include<string>

using namespace std;

class Vehicle {
protected:
	string Brand;
	int Yearofmanufacture;
public:
	void displayVehicle() {
		cout << "Brand:" << Brand << endl;
		cout << "Year of Manufacture:" << Yearofmanufacture << endl;
	}
};
class Car :public Vehicle {
private:
	int NumberofDoors;
	double EngineCapacity;
public:
	void inputDetails() {
		cout << "Enter Brand:"<<endl;
		cin >> Brand;
		cout << "Enter Year of Manufacture:" << endl;
		cin >> Yearofmanufacture;
		cout << "Enter Number of Doors:" << endl;
		cin >> NumberofDoors;
		cout << "Enter Engine Capacity:" << endl;
		cin >> EngineCapacity;
	}

	void displayCar() {
		displayVehicle();
		cout << "Number of Doors:" << NumberofDoors << endl;
		cout << "Engine Capacity:" << EngineCapacity << endl;
	}

};
int main() {
	Car c1;
	c1.inputDetails();

	c1.displayCar();
}