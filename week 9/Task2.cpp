#include <iostream>
using namespace std;

class Vehicle {
public:
    string brand;
    int yearOfManufacture;

    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Year of Manufacture: " << yearOfManufacture << endl;
    }

};

class Car : public Vehicle {
public:
    int numberOfDoors;
    double engineCapacity;
    
    void displayCar() {
        displayVehicle();
        cout << "Number of Doors: " << numberOfDoors << endl;
        cout << "Engine Capacity: " << engineCapacity << " liters" << endl;
    }
};

int main() {
    Car car1;
    
    cout << "Enter car brand: ";
    cin >> car1.brand;
    cout << "Enter year of manufacture: ";
    cin >> car1.yearOfManufacture;
    cout << "Enter number of doors: ";
    cin >> car1.numberOfDoors;
    cout << "Enter engine capacity (in liters): ";
    cin >> car1.engineCapacity;

    cout << "\n===== CAR DETAILS =====" << endl;
    car1.displayCar();

    return 0;
}