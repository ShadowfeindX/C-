/*
 * main.cxx
Write a function, reverseDigit, that takes an integer as a parameter and returns  the  number with  its  digits
 reversed. For  example, the  value  of reverseDigit(12345) is 54321; the value of  reverseDigit(5600) is  65;
 the value of  reverseDigit(7008) is  8007; and the value of reverseDigit(-532) is -235. Write a driver to test your function.
 * 
 * 
 */


#include <iostream>
int reverseDigit(std::string&);
int main() {
	std::string s;
	std::cin >> s;
	std::cout << reverseDigit(s);
	return 0;
}

int reverseDigit(std::string& s){
	s.replace(s.begin(), s.end(), s.rbegin(), s.rend());
	if (s[s.size()-1]=='-') {s.pop_back();s="-"+s;}
	return stoi(s);
}