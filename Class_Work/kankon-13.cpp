#include <bits/stdc++.h>
using namespace std;

class Student {
    int len;
    int *marks;

public:
    Student (int s, int *a) {
        len = s;
        marks = new int[len];
        for (int i = 0; i < len; i++) {
            marks[i] = a[i];
        }
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

    // Destructor
    ~Student () {
        delete[] marks;
    }
};

int main() {
    int a[] = {2, 5, 1, 7, 9, 4};
    Student s2(6, a);
    s2.display();

    return 0;
}



