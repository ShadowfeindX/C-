#include <iostream>
#include <iomanip>

using namespace std;

float SERVICE_FEE = 0.015;

int main() {
	
	//Declare variables
	int shares_sold;
	float service_charge, net_return, share_cost, share_value;
	double profits, investment;
	
	//Get and store userdata
	cout << "How many shares did you sell? "; cin >> shares_sold;
	cout << "What was the cost per share? $"; cin >> share_cost;
	cout << "What was the value per share on sale? $"; cin >> share_value;
	
	//Calculate net returns from investment
	investment = shares_sold * share_cost;
	profits = shares_sold * share_value;
	service_charge = (investment + profits) * SERVICE_FEE;
	net_return = profits - investment - service_charge;
	
	//Adjust output to 3 decimal places
	cout << setprecision(3) << fixed;
	
	//Output initial investment and service charges
	cout << "\nYou invested: $" << investment << endl;
	cout << "You were charged a total of $" << service_charge << " in service fees." << endl;
	
	
	//Determine if net return is a gain or loss
	//Output appropriate message
	if (net_return > 0)	cout << "You managed a net gain of $" << net_return << " on your investment." << endl;
	else if (net_return == 0) cout << "You main no net return on your investment." << endl;
	else cout << "You managed a net loss of $" << net_return << " on your investment." << endl;
	
	return 0;
}

