#include <iostream>

// Set kg to lbs ratio as constant
double RATIO = 2.20462262;

using namespace std;

int main() {

    //Declare variables
    double weight_kg, weight_lbs;

    // Get mass in kilograms from user
    cout << "What is your mass in kilograms? ";
    cin >> weight_kg;

    // Convert kg to lbs using ratio constant
    weight_lbs = weight_kg * RATIO;

    // Output weight in pounds
    cout << "You weigh approximately: "
         << weight_lbs << " lbs" << endl;
    // END
	return 0;
}
