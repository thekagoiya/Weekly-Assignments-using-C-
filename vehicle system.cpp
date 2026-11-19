
#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
protected:
    string brand;
    int year;

public:
    void inputVehicle() {
        cout << "Enter vehicle brand: ";
        getline(cin, brand);

        cout << "Enter year of manufacture: ";
        cin >> year;
    }

    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Year of Manufacture: " << year << endl;
    }
};

// Derived class
class Car : public Vehicle {
private:
    int numberOfDoors;
    double engineCapacity;

public:
    void inputCar() {
        inputVehicle();

        cout << "Enter number of doors: ";
        cin >> numberOfDoors;

        cout << "Enter engine capacity: ";
        cin >> engineCapacity;
    }

    void displayCar() {
        cout << "\nCAR DETAILS\n";

        displayVehicle();

        cout << "Number of Doors: "
             << numberOfDoors << endl;

        cout << "Engine Capacity: "
             << engineCapacity << " cc" << endl;
    }
};

int main() {
    Car car1;

    car1.inputCar();
    car1.displayCar();

    return 0;
}
