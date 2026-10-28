#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

const int DAYS_PER_MONTH = 30;

class Appliance {
protected:
    int id;
    string name;
    double power;
    int quantity;
    double hours;

public:
    Appliance() {
        id = 0;
        name = "Unknown";
        power = 0;
        quantity = 1;
        hours = 0;
    }

    Appliance(int i, string n, double p, int q, double h) {
        id = i;
        name = n;
        power = p;
        quantity = q;
        hours = h;
    }

    virtual ~Appliance() {}

    int getId() const { return id; }
    string getName() const { return name; }
    double getHours() const { return hours; }

    double calculateEnergy() const {
        return (power / 1000.0) * quantity * hours * DAYS_PER_MONTH;
    }

    double calculateEnergy(double newHours) const {
        return (power / 1000.0) * quantity * newHours * DAYS_PER_MONTH;
    }

    virtual void showDetails() const {
        cout << left << setw(5) << id
             << setw(22) << name
             << setw(14) << power
             << setw(8) << quantity
             << setw(10) << hours
             << setw(12) << calculateEnergy() << endl;
    }

    virtual string getTip() const {
        return "Switch off the appliance when it is not needed.";
    }
};

class Fan : public Appliance {
public:
    Fan(int i, string n, double p, int q, double h) {
        id = i;
        name = n;
        power = p;
        quantity = q;
        hours = h;
    }

    string getTip() const override {
        return "Reduce usage when possible and switch it off when not needed.";
    }
};

class Light : public Appliance {
public:
    Light(int i, string n, double p, int q, double h) {
        id = i;
        name = n;
        power = p;
        quantity = q;
        hours = h;
    }

    string getTip() const override {
        if (power > 15)
            return "Consider using an energy-efficient LED light.";
        return "Use daylight when possible and switch off unused lights.";
    }
};

class Computer : public Appliance {
public:
    Computer(int i, string n, double p, int q, double h) {
        id = i;
        name = n;
        power = p;
        quantity = q;
        hours = h;
    }

    string getTip() const override {
        return "Enable power-saving mode and shut down after use.";
    }
};

class Refrigerator : public Appliance {
public:
    Refrigerator(int i, string n, double p, int q, double h) {
        id = i;
        name = n;
        power = p;
        quantity = q;
        hours = h;
    }

    string getTip() const override {
        return "Avoid frequent door opening and keep space around the refrigerator.";
    }
};

class BillOptimizer {
private:
    vector<Appliance*> appliances;
    double rate;
    int nextId;

public:
    BillOptimizer() {
        rate = 8.0;
        nextId = 1;
    }

    ~BillOptimizer() {
        for (int i = 0; i < appliances.size(); i++) {
            delete appliances[i];
        }
    }

    void addAppliance() {
        int type, quantity;
        double power, hours;
        string name;

        cout << "\n1. Fan\n2. Light\n3. Computer\n4. Refrigerator\n";
        cout << "Choose appliance type: ";
        cin >> type;

        if (type < 1 || type > 4) {
            cout << "Invalid appliance type.\n";
            return;
        }

        cout << "Enter appliance name: ";
        cin >> ws;
        getline(cin, name);

        cout << "Enter power in watts: ";
        cin >> power;
        cout << "Enter quantity: ";
        cin >> quantity;
        cout << "Enter daily usage hours (0-24): ";
        cin >> hours;

        if (power <= 0 || quantity <= 0 || hours < 0 || hours > 24) {
            cout << "Invalid input. Appliance was not added.\n";
            return;
        }

        if (type == 1)
            appliances.push_back(new Fan(nextId, name, power, quantity, hours));
        else if (type == 2)
            appliances.push_back(new Light(nextId, name, power, quantity, hours));
        else if (type == 3)
            appliances.push_back(new Computer(nextId, name, power, quantity, hours));
        else
            appliances.push_back(new Refrigerator(nextId, name, power, quantity, hours));

        cout << "Appliance added. ID: " << nextId << endl;
        nextId++;
    }

    void showAppliances() const {
        if (appliances.empty()) {
            cout << "\nNo appliances added yet.\n";
            return;
        }

        cout << "\n" << left << setw(5) << "ID"
             << setw(22) << "Name"
             << setw(14) << "Power(W)"
             << setw(8) << "Qty"
             << setw(10) << "Hrs/day"
             << setw(12) << "kWh/month" << endl;

        cout << string(71, '-') << endl;

        for (int i = 0; i < appliances.size(); i++) {
            appliances[i]->showDetails();
        }
    }

    double totalEnergy() const {
        double total = 0;
        for (int i = 0; i < appliances.size(); i++) {
            total += appliances[i]->calculateEnergy();
        }
        return total;
    }

    void calculateBill() const {
        double energy = totalEnergy();
        cout << "\n------ MONTHLY BILL ESTIMATE ------\n";
        cout << "Monthly energy: " << fixed << setprecision(2)
             << energy << " kWh\n";
        cout << "Rate: Tk " << rate << " per kWh\n";
        cout << "Estimated bill: Tk " << energy * rate << endl;
        cout << "Note: This estimate excludes taxes and extra charges.\n";
    }

    void analyzeEnergy() const {
        if (appliances.empty()) {
            cout << "\nPlease add appliances first.\n";
            return;
        }

        int highestIndex = 0;
        cout << "\n------ ENERGY ANALYSIS ------\n";

        for (int i = 0; i < appliances.size(); i++) {
            cout << appliances[i]->getName() << ": "
                 << fixed << setprecision(2)
                 << appliances[i]->calculateEnergy() << " kWh/month\n";

            if (appliances[i]->calculateEnergy() >
                appliances[highestIndex]->calculateEnergy()) {
                highestIndex = i;
            }
        }

        cout << "\nHighest energy consumer: "
             << appliances[highestIndex]->getName() << endl;
        cout << "Suggestion: "
             << appliances[highestIndex]->getTip() << endl;
    }

    void optimizeBill() const {
        if (appliances.empty()) {
            cout << "\nPlease add appliances first.\n";
            return;
        }

        double oldTotal = 0;
        double newTotal = 0;

        cout << "\n------ SAVING SUGGESTIONS ------\n";
        for (int i = 0; i < appliances.size(); i++) {
            double oldEnergy = appliances[i]->calculateEnergy();
            double newHours = appliances[i]->getHours();

            if (newHours > 1)
                newHours = newHours - 1;

            double newEnergy = appliances[i]->calculateEnergy(newHours);
            oldTotal += oldEnergy;
            newTotal += newEnergy;

            cout << "\n" << appliances[i]->getName() << ":\n";
            cout << "Current use: " << fixed << setprecision(2)
                 << oldEnergy << " kWh/month\n";

            if (newHours < appliances[i]->getHours()) {
                cout << "Suggested use: " << newHours << " hours/day\n";
                cout << "Possible saving: " << oldEnergy - newEnergy
                     << " kWh/month\n";
                cout << "Possible bill saving: Tk "
                     << (oldEnergy - newEnergy) * rate << endl;
            } else {
                cout << "Usage is already 1 hour/day or less.\n";
            }
        }

        cout << "\n------ SUMMARY ------\n";
        cout << "Current energy: " << fixed << setprecision(2)
             << oldTotal << " kWh/month\n";
        cout << "After changes: " << newTotal << " kWh/month\n";
        cout << "Possible monthly saving: Tk "
             << (oldTotal - newTotal) * rate << endl;
        cout << "This is an estimate, not a guaranteed saving.\n";
    }

    void changeRate() {
        double newRate;
        cout << "Enter electricity rate per kWh (Tk): ";
        cin >> newRate;

        if (newRate < 0) {
            cout << "Rate cannot be negative.\n";
            return;
        }

        rate = newRate;
        cout << "Electricity rate updated.\n";
    }

    void run() {
        int choice;
        do {
            cout << "\n====================================\n";
            cout << "      ELECTRICITY BILL OPTIMIZER\n";
            cout << "====================================\n";
            cout << "1. Add an appliance\n";
            cout << "2. View all appliances\n";
            cout << "3. Calculate monthly bill\n";
            cout << "4. Analyze energy consumption\n";
            cout << "5. Optimize electricity cost\n";
            cout << "6. Change electricity rate\n";
            cout << "7. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1: addAppliance(); break;
                case 2: showAppliances(); break;
                case 3: calculateBill(); break;
                case 4: analyzeEnergy(); break;
                case 5: optimizeBill(); break;
                case 6: changeRate(); break;
                case 7: cout << "Thank you for using the program!\n"; break;
                default: cout << "Invalid choice. Try again.\n";
            }
        } while (choice != 7);
    }
};

int main() {
    BillOptimizer app;
    app.run();
    return 0;
}
