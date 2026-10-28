#include <iostream>
#include <string>
using namespace std;

class Device {
private:
    string name;
    int power;

public:
    Device(string n, int p) : name(n), power(p) {}

    void display() {
        cout << "Device: " << name
             << ", Power: " << power << " W" << endl;
    }

    void display(string location) {
        cout << "Device: " << name
             << ", Location: " << location
             << ", Power: " << power << " W" << endl;
    }

    Device operator+(const Device& d) const {
        return Device("Combined Devices", power + d.power);
    }
};

int main() {
    Device fan("Fan", 60);
    Device light("Light", 12);

    cout << "--- Function Overloading ---" << endl;
    fan.display();
    fan.display("Bedroom");

    cout << "\n--- Operator Overloading ---" << endl;
    Device total = fan + light;
    total.display();

    return 0;
}
