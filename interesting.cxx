#include <iostream>
using namespace std;
int main() {
    double a, b, c;
    cout << "Payment: $"; cin >> a;
    cout << "Days Left in Billing Cycle: "; cin >> c; c *= a;
    cout << "Length of Billing Cycle: "; cin >> b;
    cout << "Last Statement Balance: $"; cin >> a; a *= b; a -= c; a /= b;
    cout << "Current Interest Rate: %"; cin >> b; a *= b/100;
    cout << "Interest: $" << a << endl;
	return 0;   }
