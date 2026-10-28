#include <iostream>
using namespace std;

class SmartDevice {
public:
    string deviceName;
    void getDeviceName() {
        cout << "Enter device name: ";
        cin >> deviceName;
    }
};

class SmartLight : public SmartDevice {
public:
    int brightness;
    void getBrightness() {
        cout << "Enter brightness (%): ";
        cin >> brightness;
    }
};

class SmartSpeaker : public SmartDevice {
public:
    int volume;
    void getVolume() {
        cout << "Enter volume (%): ";
        cin >> volume;
    }
};

class SmartDisplay : public SmartLight, public SmartSpeaker {
public:
    void display() {
        cout << "\nLight Name : " << SmartLight::deviceName << endl;
        cout << "Brightness : " << brightness << "%" << endl;
        cout << "Speaker Name : " << SmartSpeaker::deviceName << endl;
        cout << "Volume     : " << volume << "%" << endl;
    }
};

int main() {
    SmartDisplay display;
    display.SmartLight::getDeviceName();
    display.getBrightness();
    display.SmartSpeaker::getDeviceName();
    display.getVolume();
    display.display();
    return 0;
}
