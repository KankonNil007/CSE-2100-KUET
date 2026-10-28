#include <iostream>
using namespace std;

class Student{
public:
    string name;
};

class ECE : public Student {
public:
    int roll;

    ECE(string nm, int rl) {
        name = nm;
        roll = rl;
    }

    void display() {
        cout << "Name: " << name << "\n";
        cout << "Roll: " << roll;
    }
};

int main() {
    ECE s1("Kankon", 21);

    s1.display();
    return 0;
}
