#include<iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Student : public Person {
    int roll;
    float cgpa;

public:
    Student(string nm="None", int ag=0, int rl=123, float cg=0.00) {
        name = nm;
        age = ag;
        roll = rl;
        cgpa = cg;
    }
    void display() {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Roll: " << roll << "\n";
        cout << "CGPA: " << cgpa << "\n";
    }
};

int main() {
    Student s1, s2("Kankon", 21, 2409021, 6.56);
    s2.display();

    return 0;
}

