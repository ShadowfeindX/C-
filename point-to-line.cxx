/*
Let l be a line in the x-y plane. If l is a vertical line, its equation is x = a
for some real number a. Suppose l is not a vertical line and its slope is m.
Then the equation of l is y = mx + b, where b is the y-intercept. If l passes
through the point (x0, y0,), the equation of l can be written as
y - y0 = m(x - x0). If (x1, y1) and (x2, y2) are two points in the x-y plane
and x1 =/= x2, the slope of the line passing through these points is
m = (y2 - y1) / (x2 - x1). Write a program that prompts the user to enter two
points in the x-y plane. The program outputs the equation of the line and uses
if  statements  to determine and output whether the line is vertical,
horizontal, increasing, or decreasing. If l is a nonvertical line, output its
equation in the form y = mx + b.
*/

#include <iostream>
int main() {

	std::string c; float x[3],y[3];

    std::cout << "Enter Point A: ";
    std::cin >> c[0] >> x[1] >> c[0] >> y[1] >> c[1];

    std::cout << "Enter Point B: ";
    std::cin >> c[2] >> x[2] >> c[3] >> y[2] >> c[4];

    y[0] = y[2] - y[1]; x[0] = x[2] - x[1];

    if ( y[1]==y[2] && x[1]==x[2] ) {
		std::cout << "The 2 points you entered are the same."
		<< std::endl; return 1;	}

	if ( x[0]==0 ) {
		std::cout << "l is a vertical line."
		<< std::endl; return 2;	}

	if ( y[0]==0 ) {
		std::cout << "l is a horizontal line."
		<< std::endl; return 3; }

    y[0] /= x[0];x[0] = y[0] * x[1];x[0] = y[1] - x[0];

    if ( y[0] > 0 ) c = "increasing."; else c = "decreasing.";

    std::cout << "The function l = " << y[0]
    << "x + " << x[0] << " is " << c << std::endl;

    return 0;
}
