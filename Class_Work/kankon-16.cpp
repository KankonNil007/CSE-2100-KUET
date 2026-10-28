#include<iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Student : public Person {
public:
    int roll;
    float cgpa;
};

class PostGraduateStudent : public Student {
public:
    string dept;
    string university;


    PostGraduateStudent(string nm="None", int ag=0, int rl=123, float cg=0.00, string dt = "None", string uni = "None") {
        name = nm;
        age = ag;
        roll = rl;
        cgpa = cg;
        dept = dt;
        university = uni;
    }

    void display() {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Roll: " << roll << "\n";
        cout << "CGPA: " << cgpa << "\n";
        cout << "Department: " << dept << "\n";
        cout << "University: " << university << "\n";
    }
};

int main() {
    PostGraduateStudent s1, s2("Kankon", 21, 2409021, 6.56, "ECE", "KUET");
    s2.display();

    return 0;
}


