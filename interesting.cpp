#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    
    cout << "Last Payment: $"; cin >> a;
    cout << "Length of Billing Cycle: "; cin >> b;
    cout << "Days Left in Billing Cycle: "; cin >> c;
    
    c *= a; // c -> Cleared Balance
    
    cout << "Last Statement Balance: $"; cin >> a;
    
    a *= b; // a -> Period Balance
    a -= c; // a -> Total Carried Balance
    a /= b; // a -> Average Daily Balance
    
    cout << "Current Interest Rate: %"; cin >> b;
    
    a *= b/100; // a -> Interest
    
    cout << "Your interest due this billing period is $" << fixed
		 << setprecision(2) << a << '.' << endl;
	
	return 0;
}
