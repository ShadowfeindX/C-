/*
 * cartesian-circle.cxx
 * 
The following formula gives the distance between two points, (x1, y1) and
(x2, y2) in the Cartesian plane:

`sqrt((x2-x1)^2 + (y2-y1)^2)`

Given the center and a point on the circle, you can use this formula to find the
radius of the circle. Write a function that prompts the user to enter the center
and a point on the circle. Then create functions to determine the circle’s
radius, diameter, circumference, and area using the inputs provided. Write a
driver to test your functions.
 * 
 * 
 */

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	char c;
	float x[2], y[3];
	cout << "Enter Center Point: ";
	cin >> c >> x[0] >> c >> y[1] >> c;
	cout << "Enter Point on Circle: ";
	cin >> c >> x[1] >> c >> y[2] >> c;
	if (system("CLS")) system("clear");
	y[0] = sqrt(pow(x[1] - x[0], 2) + pow(y[2] - y[1], 2));
	cout << "Radius: " << y[0] << endl;
	cout << "Diameter: " << y[0]*2 << endl;
	cout << "Circumference: " << 2*M_PI*y[0] << endl;
	cout << "Area: " << M_PI*pow(y[0],2) << endl;
	return 0;
}

