/*
 * main.cxx
 * 
 * Copyright 2016 ShadowfeindX <shadowfeind@programmer.net>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <strings.h>

using namespace std;

bool casecmp(string&, string&);
void readfile(string&, vector<string>&);

int main() {
	string s;
	ofstream o("test");
	vector<string> v;
	cin >> s; readfile(s, v);
	cin >> s; readfile(s, v);
	sort (v.begin(), v.end(), casecmp);
	for (string s : v) o << s << endl;
	return 0;
}

void readfile(string& s, vector<string>& v){
	ifstream i(s);
	getline(i,s);
	while ( i.good() ) {
		v.push_back(s);
		getline(i,s);
	}
}

bool casecmp(string& a, string& b) {
	int i = strcasecmp(a.c_str(), b.c_str());
	if (i <= 0) return true; return false;}
