/*
 * growing-population.cxx
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
int main() {
	char c;
	float x[2], y[2];
	cout << "Please enter population data in (P,g) format where" << endl
		 << "P is population and g is the current growth rate.\n" << endl;
	cout << "Town A: ";	cin >> c >> y[0] >> c >> x[0] >> c;
	cout << "Town B: ";	cin >> c >> y[1] >> c >> x[1] >> c;
	if (system("CLS")) system("clear");
	
	x[0] /= 100; x[1] /= 100;
	for (c=0; y[1] > y[0]; y[0]+=y[0]*x[0], y[1]+=y[1]*x[1], c++ ) {
		printf ("Year %i: A -> %g B-> %g\n", c, y[0], y[1]);
	};	printf ("Year %i: A -> %g B-> %g\n", c, y[0], y[1]);
	return 0;
}

