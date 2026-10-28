#include<iostream>
using namespace std;

class Person {
public:
    string name;
};

class Teacher : virtual public Person {
public:
    string dept;
    int salary;
};

class Student : virtual public Person {
public:
    int roll;
    float cgpa;
};

class TA : public Student, public Teacher {
public:
    TA(string nm="None", string dt = "None", int sl=0, int rl=123, float cg=0.00) {
        name = nm;
        salary = sl;
        roll = rl;
        cgpa = cg;
        dept = dt;
    }

    void display() {
        cout << "Name: " << name << "\n";
        cout << "Salary: " << salary << "\n";
        cout << "Roll: " << roll << "\n";
        cout << "CGPA: " << cgpa << "\n";
        cout << "DEPT: " << dept << "\n";
    }
};

int main() {
    TA s1, s2("Kankon", "ECE", 20000, 2409021, 6.56);
    s2.display();

    return 0;
}




