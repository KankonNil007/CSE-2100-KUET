#include <iostream>
using namespace std;

class Car {
    private:
        string brand;
        int price;
        string model;
    public:
        void takeInput();
        void printOutput();
};

void Car::takeInput() {
    cout << "Enter Car Brand: ";
    cin >> brand;
    cout << "Enter Price: ";
    cin >> price;
    cout << "Enter Model: ";
    cin >> model;
}

void Car::printOutput() {
    cout << "\n" << "Car Brand: " << brand << "\n";
    cout << "Car Price: " << price << "\n";
    cout << "Car Model: " << model << "\n";
}

int main() {
    Car c1[3];

    cout << "Enter Info:" << "\n";
    for (int i = 0; i < 3; i++) {
        c1[i].takeInput();
    }

    cout << "Car Info:" << "\n";
    for (int i = 0; i < 3; i++) {
        c1[i].printOutput();
    }

    return 0;
}
