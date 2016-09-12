/*
+ Net Balance -> float
+ Payment -> float
+ Length of Billing Cycle -> char
+ Time Before Payment -> char
+ Interest Rate -> float

"What was the balance on your last billing statement?"
"What was your last payment?"
"What is the length of your billing cycle?"
"..........days or something?"
"What is your normal interest rate?"

+ Interest -> float

Your interest this period was:"

periodBalance = netBalance * d1
clearedBalance = payment * d2
`averageDailyBalance = (periodBalance - clearedBalance) / d1.`
`interest = averageDailyBalance * interestRate`
*/


#include <iostream>
using namespace std;

int shorty();


int main() {

    double  netBalance , payment , cycle , remaining , rate;
    double periodBalance, clearedBalance, averageDailyBalance, interest=0.0;
    cin >> netBalance >> payment >> cycle >> remaining >> rate;

    periodBalance = netBalance * cycle;
    clearedBalance = payment * remaining;
    averageDailyBalance = (periodBalance - clearedBalance) / cycle;
    interest = averageDailyBalance * rate;


    cout << periodBalance << ' ' << clearedBalance << ' ' << averageDailyBalance << ' ' << interest;

	return 0;//shorty();
}

int shorty() {
    double a, b, c;

    cout << "Payment: $"; cin >> a;
    cout << "Days Left in Billing Cycle: "; cin >> c;
    c *= a; // c -> Cleared Balance

    cout << "Length of Billing Cycle: "; cin >> b;
    cout << "Last Statement Balance: $"; cin >> a;
    a *= b; // a -> Period Balance
    a -= c; // a -> Total Carried Balance
    a /= b; // a -> Average Daily Balance

    cout << "Current Interest Rate: %"; cin >> b;
    a *= b/100; // a -> Interest

    cout << "Interest: $" << a << endl;

	return 0;
}
