#include <bits/stdc++.h>
using namespace std;

class Student {
    int roll;
    string name;

public:
    // Default Constructor
    Student() {
        roll = 0;
        name = "";
    }

    // Parameterized Constructor
    Student(int r, string n) {
        roll = r;
        name = n;
    }
    void display() {
        cout << "\nName: "<< name;
        cout << "\nRoll: " << roll;
    }
};

int main() {
    Student s0;
    Student s1(21, "Kankon");

    s1.display();
    s0.display();

    return 0;
}

