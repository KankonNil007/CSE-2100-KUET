#include<iostream>
using namespace std;

class Teacher {
public:
    string name;
    int salary;
};

class Student {
public:
    int roll;
    float cgpa;
};

class TA : public Student, public Teacher {
public:
    TA(string nm="None", int sl=0, int rl=123, float cg=0.00) {
        name = nm;
        salary = sl;
        roll = rl;
        cgpa = cg;
    }

    void display() {
        cout << "Name: " << name << "\n";
        cout << "Salary: " << salary << "\n";
        cout << "Roll: " << roll << "\n";
        cout << "CGPA: " << cgpa << "\n";
    }
};

int main() {
    TA s1, s2("Kankon", 20000, 2409021, 6.56);
    s2.display();

    return 0;
}



