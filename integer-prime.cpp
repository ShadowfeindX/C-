#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	// Create space for generated primes
	// Set size of vector to 2
    vector<int> primes; primes.push_back(2);
    
    // Create input variable for integer
    // Get input from user
    int p; cout << "Enter a number: "; cin >> p;
    
    // Generate primes from 3 to the entered number
    for(int i=3; i <= p; i++) {
        bool prime=true;
        for(int j=0;j<primes.size() && primes[j]*primes[j] <= i;j++) {
            if(i % primes[j] == 0) {
                prime=false; break;	}	}
        if(prime) {
            primes.push_back(i);	
            }
    // Check if input is included in primes
	} bool prime = find(begin(primes), end(primes), p) != end(primes);
	
	// Output result to user
    if (prime) cout << "It's a prime!" << endl;
    else cout << "Sorry, no prime here!" << endl;
    return 0;
}
