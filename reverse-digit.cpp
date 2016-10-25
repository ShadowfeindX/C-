/*
Write a function, reverseDigit, that takes an integer as a parameter and returns
the number with its digits reversed. For example, the value of reverseDigit(12345)
is 54321; the value of reverseDigit(5600) is 65; the value of  reverseDigit(7008)
is  8007; and the value of reverseDigit(-532) is -235. Write a driver to test your function.
*/


#include <iostream>
using namespace std;

int reverseDigit(string&);

int main() {
	// Promt user input
	cout << "Enter an integer: ";
	// Store input in integer
	// Convert integer to string
	int i;string s;cin >> i;s=to_string(i);
	// Output reversed integer
	cout << "The reverse of that integer is: " << reverseDigit(s);
	return 0;
}

int reverseDigit(string& s){
	// Replace the given string with the reverse of that string
	s.replace(s.begin(), s.end(), s.rbegin(), s.rend());
	// If there is a negative at the end of the string
	// move it to the beginning
	if (s[s.size()-1]=='-') {s.pop_back();s="-"+s;}
	return stoi(s);
}
