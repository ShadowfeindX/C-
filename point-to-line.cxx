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
using namespace std;
int main(){
    char c;
    float x[3],y[3];
    cin >> c >> x[1] >> c >> y[1] >> c;
    cin >> c >> x[2] >> c >> y[2] >> c;
    cout << x[1] << ' ' << y[1] << endl
         << x[2] << ' ' << y[2] << endl;

    cout << "Slope: " << (y[2] - y[1])/(x[2] - x[1]);
    return 0;
}
