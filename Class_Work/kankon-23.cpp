#include <iostream>
using namespace std;
// Abstraction
class Animal {
public:
     virtual void sound() = 0;
     void add() {}
};

class Dog: public Animal {
public:
    void sound() {
        cout << "Dog: Gheu Gheu!\n";
    }
};

class Cat: public Animal {
public:
    void sound() {
        cout << "Cat: Meow Meow!\n";
    }
};

int main() {
    //Animal a;
    Dog b;
    Cat c;
    b.sound();
    c.sound();


    return 0;
}
