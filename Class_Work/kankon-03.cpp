#include <iostream>
using namespace std;

class Complex {
    private:
        int x;
        int y;
    public:
        void input(int a, int b) {
            x = a;
            y = b;
        }

        void sum(Complex c1, Complex c2) {
            x = c1.x + c2.x;
            y = c1.y + c2.y;
        }

        void display() {
            cout << "The Number is :";
            cout << x << "+j" << y;
        }
};

int main() {
    Complex c1, c2, c3;

    c1.input(2,3);
    c2.input(5,6);

    c3.sum(c1, c2);
    c3.display();

    return 0;
}

