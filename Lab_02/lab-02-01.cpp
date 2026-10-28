#include <iostream>
using namespace std;

class Temperature {
    float c;
public:
    void set(float x) { c = x; }
    float fahrenheit() {
        return c * 9 / 5 + 32;
    }
    void display() {
        cout << c << " C = " << fahrenheit() << " F\n";
    }
};

int main() {
    Temperature t[2];
    t[0].set(25);
    t[1].set(37);
    for(int i = 0; i < 2; i++) { t[i].display(); }

    return 0;
}
