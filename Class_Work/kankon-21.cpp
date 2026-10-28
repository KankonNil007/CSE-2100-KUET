#include <iostream>
using namespace std;
// Operator Overloading
class Point {
public:
    int x, y, z;

    Point(int a, int b, int c) {
        x = a;
        y = b;
        z = c;
    }

    Point operator+(Point p) {
        Point temp(0,0,0);

        temp.x = x + p.x;
        temp.y = y + p.y;
        temp.z = z + p.z;

        return temp;
    }

    void display() {
        cout << "X: " << x << "\n";
        cout << "Y: " << y << "\n";
        cout << "Z: " << z << "\n";
    }
};

int main() {
    Point p1(2,3,4);
    Point p2(5,6,8);
    Point p3 = p1+p2;
    p3.display();
    return 0;
}
