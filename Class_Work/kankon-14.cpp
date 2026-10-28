#include<iostream>
using namespace std;

class TemperatureRecord {
    int temperature;
    string cityName;

public:
    TemperatureRecord(int temp=0, string name="None") {
        temperature = temp;
        cityName = name;
    }
    TemperatureRecord(TemperatureRecord &t1) {
        temperature = t1.temperature;
        cityName = t1.cityName;
    }
    void display() {
        cout << "\n"<< "Temperature: " << temperature<< "\n";
        cout << "City Name: " << cityName << "\n";
    }
};

int main() {
    TemperatureRecord t1;
    TemperatureRecord t2(45, "Chicago");
    TemperatureRecord t3(t2);

    t1.display();
    t3.display();

    return 0;
}
