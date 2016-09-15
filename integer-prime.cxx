/*
 * main.cxx
 * 
 * Copyright 2016 ShadowfeindX <shadowfeind@programmer.net>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <vector>
#include <algorithm>
//#include <iterator>
using namespace std;
int main() {
    vector<int> primes; primes.push_back(2);
    int p; cout << "Enter a number: "; cin >> p;
    for(int i=3; i <= p; i++) {
        bool prime=true;
        for(int j=0;j<primes.size() && primes[j]*primes[j] <= i;j++) {
            if(i % primes[j] == 0) {
                prime=false; break;	}	}
        if(prime) {
            primes.push_back(i);
            // cout << i << " ";	
            }	}
    bool prime = find(begin(primes), end(primes), p) != end(primes);
    if (prime) cout << "It's a prime!" << endl;
    else cout << "Sorry, no prime here!" << endl;
    return 0;
}
