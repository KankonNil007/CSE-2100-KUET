#include <iostream>
using namespace std;

class SocialMedia {
        string name;
        int usage;

    public:
        void storeData() {
            cout << "Enter Social Media: ";
            cin >> name;

            cout << "Enter Usage (hours): ";
            cin >> usage;
        }
        void displayData() {
            cout << "\nSocial Media  : " << name;
            cout << "\nUsage (hours): " << usage;
        }
};

int main() {
    SocialMedia s1;
    s1.storeData();
    s1.displayData();

    return 0;
}
