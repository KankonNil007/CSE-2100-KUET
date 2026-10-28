#include <iostream>
using namespace std;

class Phone;
class Laptop {
    int price;
public:
    void set(int p) { price = p; }
    friend void compare(Laptop, Phone);
};
class Phone {
    int price;
public:
    void set(int p) { price = p; }
    friend void compare(Laptop, Phone);
};

void compare(Laptop l, Phone p) {
    if(l.price > p.price) {cout << "Laptop is more expensive"; }
    else {cout << "Phone is more expensive";}  }

int main() {
    Laptop l;
    Phone p;
    l.set(80000);
    p.set(60000);
    compare(l, p);
    return 0; }
