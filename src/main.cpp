#include <iomanip>
#include <iostream>
#include "receipt.hpp"

using namespace std;

int main() {
    double Appetizers = 0.0;
    double Entrees = 0.0;
    double Drinks = 0.0;
    double tipPercent = 0.0;

    cout << "Receipt Calculator" << endl << endl;

    cout << "How much did you spend on appetizers? ";
    cin >> Appetizers;

    cout << "How much did you spend on entrees? ";
    cin >> Entrees;

    cout << "How much did you spend on drinks? ";
    cin >> Drinks;

    cout << "What percent should you tip? Recommend 10-30 based on service: ";
    cin >> tipPercent;

    double subtotal = calculateSubtotal(Appetizers, Entrees, Drinks);
    double tax = calculateTax(subtotal);
    double tip = calculateTip(subtotal, tipPercent);
    double total = calculateTotal(subtotal, tax, tip);

    cout << fixed << setprecision(2);
    cout << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Tip: $" << tip << endl;
    cout << "Total: $" << total << endl;

    return 0;
}
