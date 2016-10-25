/*
During the tax season, every Friday, the J&J accounting firm provides assistance
to people who prepare their own tax returns. Their charges are as follows:

If a person has low income (<= 25,000) and the consulting time is less than or
equal to 30 minutes, there are no charges; otherwise, the service charges are
40% of the regular hourly rate for the time over 30 minutes.

For others, if the consulting time is less than or equal to 20 minutes, there
are  no  service  charges;  otherwise,  service  charges  are  70%  of  the
regular hourly rate for the time over 20 minutes.

Write a function that prompts the use to enter the hourly rate, the total
consulting time, and whether the person has low income. Write another function
to calculate the billing amount based on this input. Write a driver to test your
program. Make your driver loop so that you can enter test data for:

low income, < 20 minutes
low income, > 20 minutes
high income, < 20 minutes
high income, > 20 minutes.

*/


#include <iostream>

using namespace std;

int main() {
	// Create space for input data
	char e;	double a,b,c,d=0.0;
	
	// Get input from user
	cout << "Income: $"; cin >> a;
	cout << "Consulting Time (min): "; cin >> b;
	cout << "Hourly Rate ($/hr): "; cin >> c; c /= 60.0;
	
	// Calculate bill from data
	if ( a <= 25000 && (b-=30) > 0 ) d += (.40*c)*b;
	if ( a >= 25000 && (b-=20) > 0 ) d += (.70*c)*b;
	
	// Output data to user
	cout << "Bill: $" << d << endl;
	
	return 0;
}
