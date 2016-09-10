#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main() {

    string movie;
	short adult_tickets, child_tickets;
	unsigned short tickets_sold;
	float adult_price, child_price, percentage, donation;
	double adult_sales, child_sales, gross_sales, net_sales;

    cout << "What movie are you screening? "; getline(cin, movie);
    cout << "What is the price of an adult ticket? $"; cin >> adult_price;
    cout << "What is the price of a child ticket? $"; cin >> child_price;
    cout << "How many adult tickets did you sell? "; cin >> adult_tickets;
    cout << "How many child tickets did you sell? "; cin >> child_tickets;
    cout << "What percentage would you like to donate? "; cin >> percentage;

    tickets_sold = adult_tickets + child_tickets;
    adult_sales = adult_tickets * adult_price;
    child_sales = child_tickets * child_price;
    gross_sales = adult_sales + child_sales;
    donation = gross_sales * (percentage/100);
    net_sales = gross_sales - donation;

    cout << endl << left << setfill('.') << setw(34) << "Movie Name ";
    cout << "  " << setfill(' ') << setw(10) << movie << endl;

    cout << left << setfill('.') << setw(34) << "Number of Tickets Sold ";
    cout << "  " << right << setfill(' ') << setw(10) << tickets_sold << endl;

    cout << left << setfill('.') << setw(34) << "Gross Amount ";
    cout << " $" << right << fixed << setfill(' ') << setw(10) << setprecision(2) << gross_sales << endl;

    cout << left << setfill('.') << setw(34) << "Percentage of Amount Donated ";
    cout << "  " << right << fixed << setfill(' ') << setw(10) << setprecision(2) << percentage << '%' << endl;

    cout << left << setfill('.') << setw(34) << "Amount Donated ";
    cout << " $" << right << fixed << setfill(' ') << setw(10) << setprecision(2) << donation << endl;

    cout << left << setfill('.') << setw(34) << "Net Sales ";
    cout << " $" << right << fixed << setfill(' ') << setw(10) << setprecision(2) << net_sales << endl;

	return 0;
}
/*
Movie Name ....................... Journey to Mars
Number of Tickets Sold ...........       2650
Gross Amount ..................... $ 14592.00
Percentage of Amount Donated .....      10.00%
Amount Donated ................... $  1459.20
Net Sales ........................ $ 13132.80
*/
