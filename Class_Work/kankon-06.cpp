#include <iostream>
using namespace std;

class Complex {

    public:
        int x;
        int y;
        void input(int a, int b) {
            x = a;
            y = b;
        }

        friend Complex mean(Complex c1, Complex c2);
};

Complex mean(Complex c1, Complex c2) {
    Complex c3;
    c3.x = c2.x + c1.x;
    c3.y = c2.y + c1.y;
    return c3;
}

int main() {
    Complex c1, c2, c3;

    c1.input(2,3);
    c1.input(5,6);

    c3 = mean(c1, c2);

    cout << "The Sum is:" << c3.x << " +j" << c3.y;

    return 0;
}
