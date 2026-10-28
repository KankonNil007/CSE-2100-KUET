#include <iostream>
using namespace std;

class ElectronicDevice {
public:
    string brand;
    float voltage;
    void getDeviceInfo() {
        cout << "Enter brand: ";
        cin >> brand;
        cout << "Enter operating voltage: ";
        cin >> voltage;
    }
};

class Sensor : public ElectronicDevice {
public:
    string sensorType;
    void getSensorInfo() {
        cout << "Enter sensor type: ";
        cin >> sensorType;
    }
};

class TemperatureSensor : public Sensor {
    float temperature;
public:
    void getTemperature() {
        cout << "Enter temperature: ";
        cin >> temperature;
    }

    void display() {
        cout << "\nBrand: " << brand << endl;
        cout << "Voltage: " << voltage << " V" << endl;
        cout << "Sensor Type: " << sensorType << endl;
        cout << "Temperature: " << temperature << " C" << endl;
    }
};

int main() {
    TemperatureSensor sensor;
    sensor.getDeviceInfo();
    sensor.getSensorInfo();
    sensor.getTemperature();
    sensor.display();
    return 0;
}
