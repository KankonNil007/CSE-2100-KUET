#include <bits/stdc++.h>
using namespace std;

class Student {
    int roll;
    string name;

public:
    //Default Parameterized Constructor
    Student(int r=0, string n="") {
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
    Student s2(23);

    s1.display();
    s0.display();
    s2.display();

    return 0;
}

