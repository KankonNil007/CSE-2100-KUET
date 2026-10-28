#include <iostream>
using namespace std;

class Complex {
    float real, imag;
public:
    Complex() {
        real = 0;
        imag = 0;
    }
    Complex(float r, float i = 0) {
        real = r;
        imag = i;
    }
    Complex(Complex &c) {
        real = c.real;
        imag = c.imag;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
    void add(int x) {
        real += x;
    }
    void add(float x) {
        real += x;
    }
};

int main()
{
    Complex c1;
    Complex c2(5);
    Complex c3(3, 4);
    Complex c4(c3);

    c1 = c2;

    cout << "C1 = ";
    c1.display();
    cout << "C2 = ";
    c2.display();
    cout << "C3 = ";
    c3.display();
    cout << "C4 = ";
    c4.display();

    c1.add(5);
    cout << "After integer addition: ";
    c1.display();

    return 0;
}
