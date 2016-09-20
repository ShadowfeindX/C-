/*
 * triangulate.cxx
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
enum triangle{scalene, isosceles, equilateral, degenerate};
string type[]{"Scalene", "Isosceles", "Equilateral", "Degenerate"};
int main(int argc, char *argv[])
{
    //char x;
    int a,b,c;
    triangle T;
    //start:

    cin >> a >> b >> c;
    if ( a+b>c && b+c>a && a+c>b ) {
        if ( a==b ) {
            if ( a==c ) {
                T = equilateral;
            } else T = isosceles;
        } else T = scalene;
    } else T = degenerate;

    cout << type[T] << endl;
    //cout << "Check another? (Y/N) "; cin >> x;
    //if (x=='Y' || x=='y') goto start;
    return 0;
}
