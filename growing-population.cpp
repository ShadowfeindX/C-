#include <iostream>
using namespace std;
int main() {
	char c;	float x[2], y[2];
	// Prompt user for formatted input
	cout << "Please enter population data in (P,g) format where" << endl
		 << "P is population and g is the current growth rate as a percentage.\n" << endl
		 << "\nPress Enter to Start!" << endl;
	// Wait for input
	getchar(); if (system("CLS")) system("clear");
	// Get user input
	cout << "Town A: ";	cin >> c >> y[0] >> c >> x[0] >> c;
	cout << "Town B: ";	cin >> c >> y[1] >> c >> x[1] >> c;
	// Calculate growth rates
	if (system("CLS")) system("clear");
	// Convert to %
	x[0] /= 100; x[1] /= 100;
	// Display population for every year that A < B
	for (c=0; y[1] > y[0]; y[0]+=y[0]*x[0], y[1]+=y[1]*x[1], c++ ) {
		printf ("Year %i: A -> %g B-> %g\n", c, y[0], y[1]);
	// Display population for year A > B
	};	printf ("Year %i: A -> %g B-> %g\n", c, y[0], y[1]);
	// Display final output for user
	printf ("\nAfter Year %i, Town A will have a greater population than Town B!\n", c-1);
	return 0;
}
