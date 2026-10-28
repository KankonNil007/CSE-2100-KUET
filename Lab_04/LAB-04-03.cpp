#include <iostream>
using namespace std;

class Vehicle {
public:
    string model;
    void getModel() {
        cout << "Enter vehicle model: ";
        cin >> model;
    }
    void displayModel() {
        cout << "Vehicle Model : " << model << endl;
    }
};

class ElectricVehicle : virtual public Vehicle {
public:
    int batteryCapacity;
    void getBattery() {
        cout << "Enter battery capacity (kWh): ";
        cin >> batteryCapacity;
    }
};

class AutonomousVehicle : virtual public Vehicle {
public:
    int sensors;
    void getSensors() {
        cout << "Enter number of sensors: ";
        cin >> sensors;
    }
};

class AutonomousEV : public ElectricVehicle, public AutonomousVehicle {
public:
    int range;
    void getRange() {
        cout << "Enter driving range (km): ";
        cin >> range;
    }
    void display() {
        cout << "\nVehicle Model: " << model << endl;
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
        cout << "Number of Sensors: " << sensors << endl;
        cout << "Driving Range: " << range << " km" << endl;
    }
};

int main() {
    AutonomousEV car;
    car.getModel();
    car.getBattery();
    car.getSensors();
    car.getRange();
    car.display();
    return 0;
}
