#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>


using namespace std;

int main() {
	
	string s;
	double a, b;
    stringstream ss;

    cout << "What movie are you screening? "; getline(cin, s); ss << s << endl;
    cout << "How many adult tickets did you sell? "; cin >> s; ss << s << endl;
    cout << "What is the price of an adult ticket? $"; cin >> s; ss << s << endl;
    cout << "How many child tickets did you sell? "; cin >> s; ss << s << endl;
    cout << "What is the price of a child ticket? $"; cin >> s; ss << s << endl;
    cout << "What percentage would you like to donate? "; cin >> s; ss << s << endl;
    cout << endl << endl;
      
    getline(ss, s);
    cout << endl << left << setfill('.') << setw(34) << "Movie Name ";
    cout << "  " << setfill(' ') << setw(10) << s << endl;
    
    ss >> a >> b; b *= a; // a -> adult_tickets; b -> adult_sales
    ss >> s; a += stoi(s); //a -> tickets_sold; b -> adult_sales; s -> child_tickets
    cout << left << setfill('.') << setw(34) << "Number of Tickets Sold ";
    cout << "  " << right << setfill(' ') << setw(10) << a << endl;

    ss >> a; a *= stoi(s), b += a; // a -> child_sales; b -> gross_sales; s -> child_tickets
    cout << left << setfill('.') << setw(34) << "Gross Amount ";
    cout << " $" << right << fixed << setfill(' ') << setw(10) << setprecision(2) << b << endl;
    
    ss >> s; a = b*(stof(s)/100); // a -> donation; b -> gross_sales; s -> percentage
    cout << left << setfill('.') << setw(34) << "Percentage of Amount Donated ";
    cout << "  " << right << fixed << setfill(' ') << setw(10) << setprecision(2) << stof(s) << '%' << endl;
    cout << left << setfill('.') << setw(34) << "Amount Donated ";
    cout << " $" << right << fixed << setfill(' ') << setw(10) << setprecision(2) << a << endl;
    cout << left << setfill('.') << setw(34) << "Net Sales ";
    cout << " $" << right << fixed << setfill(' ') << setw(10) << setprecision(2) << b-a << endl;
    
	return 0;
}
