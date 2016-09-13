#include <iostream>
using namespace std;
int main() {
    double a, b, c; cout << "Payment: $"; cin >> a;
    cout << "Billing Cycle: "; cin >> b;
    cout << "Payment Day: "; cin >> c; c *= a;
    cout << "Balance: $"; cin >> a; a *= b; a -= c; a /= b;
    cout << "Interest Rate: %"; cin >> b; a *= b/100;
    cout << "Interest: $" << a << endl;	return 0;   }
