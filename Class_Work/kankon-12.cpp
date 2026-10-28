#include <bits/stdc++.h>
using namespace std;

class Student {
    int len;
    int *marks;

public:
    Student (int s) {
        len = s;
        marks = new int[len];
    }
    void setmarks() {
        for (int i = 0; i < len; i++) {
            cin >> marks[i];
        }
    }
    void display() {
        for (int i = 0; i < len; i++) {
            cout <<"Marks: " << marks[i]<< "\n";
        }
    }
};

int main() {
    Student s1(5);
    s1.setmarks();
    s1.display();

    //int a[] = {2, 5, 1, 7, 9, 4};
    //student s2(6, a);

    return 0;
}


