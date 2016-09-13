#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    float i[5]{0}, o[5]{0};
    cout << "Room Cost? "; cin >> i[0];
    cout << "Rooms Booked? "; cin >> i[1];
    cout << "Days Reserved? "; cin >> i[2];
    cout << "Sales Tax? "; cin >> i[3];

    if ( i[1] >= 10 && i[1] < 20) o[0] = 10;
    if ( i[1] >= 20 && i[1] < 30) o[0] = 20;
    if ( i[1] >= 30 ) o[0] = 30;
    if ( i[2] >= 3 ) o[0] += 5;

    o[1] = i[0]*i[1]*i[2];
    o[1] -= o[1] * o[0]/100;
    o[2] = o[1]; o[2] *= i[3]/100;
    o[2] += o[1];

    cout << "\nRoom Cost: " << i[0] << endl
         << "Discount: " << o[0] << '%' << endl
         << "# of Rooms: " << i[1] << endl
         << "# of Days: " << i[2] << endl
         << fixed << setprecision(2) << endl
         << "Subtotal: $" << o[1] << endl
         << "Tax: " << i[3] << '%' << endl
         << "Total: $" << o[2] << endl;

        return 0;
}
