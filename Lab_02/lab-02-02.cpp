#include <iostream>
using namespace std;

class Time {
    int h, m;
public:
    void set(int x, int y) { h = x; m = y; }
    Time add(Time t) {
        Time x;
        x.h = h + t.h;
        x.m = m + t.m;
        if(x.m >= 60) {
            x.h++;
            x.m -= 60; }
        return x; }
    void show() {
        cout << h << "h " << m << "m\n"; }
};

int main() {
    Time a, b, c;
    a.set(3, 40);
    b.set(2, 35);
    c = a.add(b);
    c.show();

    return 0;
}
