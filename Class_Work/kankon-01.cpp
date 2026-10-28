#include <iostream>
using namespace std;

class Employee {
    public:
        string name;
        int ID;

        void takeInput();
};

void Employee::takeInput() {
    cout << "Enter Employee Name: ";
    cin >> name;
    cout << "Enter Employee ID: ";
    cin >> ID;
}

int main() {
    class Employee e1;

    e1.takeInput();

    cout << "\n" << "Employee Name: " << e1.name << "\n";
    cout << "Employee ID: " << e1.ID << "\n";
}

