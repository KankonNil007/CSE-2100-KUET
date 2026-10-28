#include <iostream>
using namespace std;
// Function Overloading
class Shape {
    public:
    void area(int side) {
        cout << "Square Area: " << side*side << "\n";
    }

    void area(int length, int width) {
        cout << "Rectangle Area: " << length*width << "\n";
    }

    void area(double radius) {
        cout << "Circle Area: " << 3.14 * radius * radius << "\n";
    }
};

int main() {
    Shape s1;
    s1.area(5);
    s1.area(5,10);
    s1.area(5.0);
    return 0;
}
