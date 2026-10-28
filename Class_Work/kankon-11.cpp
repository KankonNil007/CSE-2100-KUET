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
    // Copy Constructor
    Student (Student &s1) {
        roll = s1.roll;
        name = s1.name;
    }
    void display() {
        cout << "\nName: "<< name;
        cout << "\nRoll: " << roll;
    }
};

int main() {
    Student s1(21, "Kankon");
    Student s2(s1);

    s1.display();
    s2.display();

    return 0;
}


