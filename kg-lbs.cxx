#include <iostream>

double RATIO = 2.20462262;

using namespace std;

int main() {
	
	double w;
	
	cout << "Enter mass: "; cin >> w;
	cout << "Your weight is " << w*RATIO << " lbs." << endl;
    
	return 0;
}
