/*
 * calculator.cxx
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
using namespace std;

int dumb(char&);
int clean(char&);

int main() {
	char c;
	start:
	cout << "Version? (1/2) "; cin >> c;
	if ( c==49 ) return dumb(c);
	else if ( c==50 ) return clean(c);
	else return c-'0';
}

int dumb(char& c){
    int a,b;
    cout << "Equation: "; cin >> a >> c >> b;
    if ( c=='+' ) return a+b;
    else if ( c=='-' ) return a-b;
    else if ( c=='*' ) return a*b;
    else if ( c=='/' ) return a/b;
    else if ( c=='%' ) return a%b;
	else return c;
}

int clean(char& c) {
    int a,b;
    cout << "Equation: "; cin >> a >> c >> b;
    switch (c) {
    case '+':
        return a+b;
    case '-':
        return a-b;
    case '*':
        return a*b;
    case '/':
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
