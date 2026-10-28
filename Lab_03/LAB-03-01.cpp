#include <iostream>
using namespace std;

class Rectangle {
    int length, width;
public:
    Rectangle() {
        length = 0;
        width = 0;
    }
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }
    void area() {
        cout << "Area = " << length * width << endl;
    }
};

int main() {
    Rectangle r1;
    Rectangle r2 = Rectangle(10, 5);
    cout << "Rectangle 1: ";
    r1.area();
    cout << "Rectangle 2: ";
    r2.area();
    return 0;
}
