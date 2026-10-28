#include <iostream>
using namespace std;

class Complex2;
class Complex1 {
    private:
        int x;
    public:
        void input(int a) {
            x = a;
        }

        friend float mean(Complex1 s1, Complex2 s2);
};

class Complex2 {
    private:
        int y;
    public:
        void input(int a) {
            y = a;
        }

        friend float mean(Complex1 s1, Complex2 s2);
};

float mean(Complex1 s1, Complex2 s2) {
    float m;
    m = (float(s1.x) + s2.y)/2;
    return m;
}

int main() {
    Complex1 s1;
    Complex2 s2;

    s1.input(2);
    s2.input(3);

    float average = mean(s1, s2);

    cout << "Average: " << average;

    return 0;
}
