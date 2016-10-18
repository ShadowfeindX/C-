/*
 * Name: calculator.cpp
 * Author: Rickey Barnes
 *
 * Info: This program allows the user to choose between
 * using a switch statement or a series of if-else statements
 * to calculate the value of a simple equation.
 *
 */


#include <iostream>
using namespace std;

int dumb(char&);
int clean(char&);

int main() {
	char c;
	start:
	// Allows the user to choose a version
	cout << "Version? (1/2) "; cin >> c;
	// Start version 1
	if ( c==49 ) return dumb(c);
	// Start version 2
	else if ( c==50 ) return clean(c);
	// Return user input if incorrect version
	else return c-'0';
}

int dumb(char& c){
    int a,b;
    // Get equation from user
    cout << "Equation: "; cin >> a >> c >> b;
    // Process equation with if-else
	// Return value
    if ( c=='+' ) return a+b;
    else if ( c=='-' ) return a-b;
    else if ( c=='*' ) return a*b;
    // Check for divide by 0
    else if ( c=='/' ) if ( b==0 ) {
	    cout << "Error Divide by 0!" << endl;
	    return c;
    } return c
    else if ( c=='%' ) return a%b;
	else return c;
}

int clean(char& c) {
    int a,b;
    // Get equation from user
	// Return value
    cout << "Equation: "; cin >> a >> c >> b;
    switch (c) {
    case '+':
        return a+b;
    case '-':
        return a-b;
    case '*':
        return a*b;
    case '/':
    // Check for divide by 0
        if ( b==0 ) {
        	cout << "Error Divide by 0!" << endl;
        	return c;
        }
        return a/b;
    case '%':
        return a%b;
    default:
        return c;
    }
}
