#include <iostream>
#include <cmath>

using namespace std;
 
 int main() {
    //Declare variables
 	float decimal;
 	double value=0.0;
 	
 	//Ask user for input
 	cout << "Please input 5 decimal values: ";
 	
 	//Create input loop
 	for (short i=0; i < 5; i++) {
 	    cin >> decimal;
 	    value += decimal; //Add input to total value
 	}
 	//Output rounded total value
 	cout << round(value) << endl;
 	return 0;
 }
