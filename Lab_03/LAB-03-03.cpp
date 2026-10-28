#include <iostream>
#include <cstring>
using namespace std;

class String {
    char *name;
public:
    String(char *s) {
        name = new char[strlen(s) + 1];
        strcpy(name, s);
        cout << "Memory allocated for: " << name << endl;
    }
    void display() {
        cout << "String = " << name << endl;
    }
    ~String() {
        cout << "Memory released for: " << name << endl;
        delete[] name;
    }
};

int main() {
    String s1((char*)"Kankon");
    String s2((char*)"ECE");
    s1.display();
    s2.display();
    return 0;
}
