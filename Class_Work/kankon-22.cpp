#include <iostream>
using namespace std;
// Function Overiding
class Animal {
public:
     virtual void sound() {
        cout << "Animal makes Sounds!\n";
    }
};

class Dog: public Animal {
public:
    void sound() {
        cout << "Dog: Woof Woof!\n";
    }
};

class Cat: public Animal {
public:
    void sound() {
        cout << "Cat: Meow Meow!\n";
    }
};

int main() {
    Animal *a;

    Dog d;
    Cat c;

    a = &d;
    a->sound();

    a = &c;
    a->sound();

    return 0;
}
