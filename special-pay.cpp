#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

void update(ofstream&, stringstream&);

int main() {
    // Declare variables
    string buffer[2];
	stringstream base;
    // Open file streams
    ifstream data("SalaryData.txt");
    ofstream out("SalaryOutput.dat");
    // Create data loop
    while (!data.eof()) {
        // Read line from input file
        getline(data, buffer[0]); base << buffer[0];
        // Ignore empty lines
        if (base.str()=="") continue;
        // Pass employee name to buffer
        base >> buffer[0] >> buffer[1]; // Employee Name
        // Save to output file
        out << buffer[1] << ' ' << buffer [0] << ' ';
        // Pass salary and percentage into buffer
        base >> buffer[0] >> buffer[1]; // Salary and Percentage
        // Calculate actual increase amount
        buffer[1] = to_string(stof(buffer[0]) * (stof(buffer[1])/100)); // Increase
        // Add increase to original salary
        // Save new salary to output file
        out << fixed << setprecision(2)
            << stof(buffer[0])+stof(buffer[1]) << endl;
        // Clear buffer and input stream
        buffer[0].clear(); buffer[1].clear();
        base.str(""); base.clear();
        // LOOP
    }
    // Close file streams
    data.close(); out.close();
    // Indicate job completion
    cout << "Done!" << endl;
    // END
	return 0;
}

