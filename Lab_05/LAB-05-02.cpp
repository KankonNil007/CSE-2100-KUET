#include <iostream>
#include <string>
using namespace std;

class Character {
protected:
    string name;
public:
    Character(string n) : name(n) {}

    virtual void attack() {
        cout << name << " performs a basic attack."<< endl;
    }

    virtual ~Character() = default;
};

class Warrior : public Character {
public:
    Warrior(string n) : Character(n) {}

    void attack() override {
        cout << name << " attacks with a sword!"<< endl;
    }
};

class Archer : public Character {
public:
    Archer(string n) : Character(n) {}

    void attack() override {
        cout << name << " shoots an arrow!"<< endl;
    }
};

int main() {
    Character base("Generic Character");
    Warrior warrior("Dragon Slayer");
    Archer archer("Eagle Eye");

    cout << "--- Runtime Polymorphism ---" << endl;

    Character* ptr;

    ptr = &base;
    ptr->attack();

    ptr = &warrior;
    ptr->attack();

    ptr = &archer;
    ptr->attack();

    return 0;
}
