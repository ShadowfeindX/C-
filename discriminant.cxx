/*
discriminant.cxx

The roots of the quadratic equation ax^2 + bx + c = 0, a ≠ 0 are given by the
following formula:
`D = b^2 -4ac`

In this formula, the term `b2 – 4ac` is called the discriminant. If
`b2 – 4ac = 0`, then the equation has a single (repeated) root. If `b2 – 4ac > 0`,
the equation has two real roots. If `b2 – 4ac < 0`, the equation has two
complex roots. Write a program that prompts the user to input the value of a
(the coefficient of x2), b (the coefficient of x), and c (the constant term)
and outputs the type of roots of the equation. Furthermore, if `b2 – 4ac ≠ 0`,
the program should output the roots of the quadratic equation.
(Hint: Use the functions pow() and sqrt() from the header file <cmath>
to calculate the square root.

 */


#include <iostream>
#include <cmath>
using namespace std;
int main() {

	float a, b, c;
	double x[2], y;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    y = pow(b,2) - (4*a*c);
    x[0] = -b + sqrt(y); x[0] /= (2*a);
    x[1] = -b - sqrt(y); x[1] /= (2*a);

    printf("The function %gx^2 + %gx + %g has ", a, b, c);
    if ( y > 0 ) printf("2 complex roots at x = %g and x = %g.", x[0], x[1]);
    if ( y == 0 ) printf("a distinct real zero at x = %g.", x[0]);
    if ( y < 0 ) printf("2 distinct real roots at x = %g and x = %g.", x[0], x[1]);

	return 0;
}
