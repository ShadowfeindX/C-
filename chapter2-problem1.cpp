#include <iostream>
#include <cmath>
//#include <stdlib.h>

using namespace std;
 
 int main() {
    
    //Get input from user
 	double cost_of_liter, profit_from_carton, total_milk, production_cost, total_profits;
 	cout << "How much does it cost to produce one liter of milk? $";	cin >> cost_of_liter;
 	cout << "What are your profits on a carton of milk? $";	cin >> profit_from_carton;
 	cout << "What was your total milk production for the day? Liters ";	cin >> total_milk;
 	
 	//Calculate production costs and profits
 	int total_cartons = ceil(total_milk/3.78);
 	production_cost = total_milk * cost_of_liter;
 	total_profits = profit_from_carton * total_cartons;
 	total_profits -= production_cost;
 	
 	//Output calculated values
 	cout << "\nThe total amount of cartons you would need is: " << total_cartons << endl
     	<< "Your production cost for the day would be: $" << production_cost << endl
     	<< "Your total profits for the day would be: $" << total_profits << '\n' << endl;
 	
 	return 0;
 }