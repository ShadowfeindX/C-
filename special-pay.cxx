#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
void update(ofstream&, stringstream&);

int main() {
    string s;
	stringstream ss;
    ifstream data("SalaryData.txt");
    ofstream out("SalaryOutput.dat");
    while (!data.eof()) {
        getline(data, s);
        ss << s;
        update(out, ss);    }
    data.close();
    out.close();
	return 0;   }

void update(ofstream& file, stringstream& base) {
    if (base.str()=="") return;
    string buffer[2];
    base >> buffer[0] >> buffer[1]; // Employee Name
    file << buffer[1] << ' ' << buffer [0] << ' ';
    base >> buffer[0] >> buffer[1]; // Salary and Percentage
    buffer[1] = to_string(stof(buffer[0]) * (stof(buffer[1])/100)); // Increase
    file << stof(buffer[0])+stof(buffer[1]) << endl;
    base.str(""); base.clear(); }
