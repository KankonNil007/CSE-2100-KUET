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

        friend float mean(Complex s1);
};

float mean(Complex s1) {
    float m;
    m = (float(s1.x) + s1.y)/2;
    return m;
}

int main() {
    Complex s1, s2;

    s1.input(2,3);

    float average = mean(s1);

    cout << "Average: " << average;

    return 0;
}
