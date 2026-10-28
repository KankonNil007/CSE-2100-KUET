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
    void display() {
        cout << "Name: "<< name;
        cout << "\nRoll: " << roll;
    }
};

int main() {
    Student s1;

    s1.display();

    return 0;
}
