#include <iostream>
#include <math.h>
using namespace std;

class Distance {
public:
    int x, y;

    Distance (int a, int b) {
        x = a;
        y = b;
    }

    double operator+(Distance d) {
        double temp = 0;

        temp = sqrt(pow((x - d.x), 2) + pow((y - d.y), 2));

        return temp;
    }
};


int main() {
    Distance d1(2,3);
    Distance d2(3,4);

    double distance = d1 + d2;
    cout << distance;
    return 0;
}
