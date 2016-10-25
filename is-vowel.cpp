#include <iostream>
using namespace std;

// Check if string vowels contans character c
bool isVowel(char& c, string& v){if (v.find(c) != string::npos) return true;}

int main() {
	// Create string of vowels
	string vowels("AaEeIiOoUu");
	
	// Get input form user
	cout << "Enter a string: ";
	string s;int i = 0;getline(cin,s);
	
	// Iterate through all characters in input
	for (char c : s) if (isVowel(c, vowels)) ++i;
	
	// Output # of vowels
	cout << i << " vowels" << endl;
	return 0;
}
