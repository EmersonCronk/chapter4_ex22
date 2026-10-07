#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string name;
    char plan;
    double gigabytes;
    double bill;

    const double PLAN_A_COST = 39.99;
    const double PLAN_B_COST = 59.99;
    const double PLAN_C_COST = 79.99;
    const double PLAN_A_DATA = 2.0;
    const double PLAN_B_DATA = 8.0;
    const double EXTRA_COST = 8.00;

    cout << "Enter customer name: ";
    getline(cin, name);

    cout << "Enter plan (A, B, or C): ";
    cin >> plan;

    cout << "Enter gigabytes used: ";
    cin >> gigabytes;

    switch (plan) {
        case 'A':
        case 'a':
            bill = PLAN_A_COST;

            if (gigabytes > PLAN_A_DATA) {
                bill += (gigabytes - PLAN_A_DATA) * EXTRA_COST;
            }

            cout << fixed << setprecision(2);
            cout << "\nCustomer: " << name << endl;
            cout << "Plan: A" << endl;
            cout << "Total amount due: $" << bill << endl;

            if (bill > PLAN_B_COST) {
                cout << "Savings with Plan B: $"
                     << bill - PLAN_B_COST << endl;
            }

            if (bill > PLAN_C_COST) {
                cout << "Savings with Plan C: $"
                     << bill - PLAN_C_COST << endl;
            }
            break;

        case 'B':
        case 'b':
            bill = PLAN_B_COST;

            if (gigabytes > PLAN_B_DATA) {
                bill += (gigabytes - PLAN_B_DATA) * EXTRA_COST;
            }

            cout << fixed << setprecision(2);
            cout << "\nCustomer: " << name << endl;
            cout << "Plan: B" << endl;
            cout << "Total amount due: $" << bill << endl;

            if (bill > PLAN_C_COST) {
                cout << "Savings with Plan C: $"
                     << bill - PLAN_C_COST << endl;
            }
            break;

        case 'C':
        case 'c':
            bill = PLAN_C_COST;

            cout << fixed << setprecision(2);
            cout << "\nCustomer: " << name << endl;
            cout << "Plan: C" << endl;
            cout << "Total amount due: $" << bill << endl;
            break;

        default:
            cout << "Invalid plan." << endl;
    }

    return 0;
}