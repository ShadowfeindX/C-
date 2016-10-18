/*
 * is_vowel.cxx
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
using namespace std;

bool isVowel(char& c, string& v){if (v.find(c) != string::npos) return true;}

int main() {
	string vowels("AaEeIiOoUu");
	string s; int i = 0; cin >> s;
	for (char c : s) if (isVowel(c, vowels)) ++i;
	cout << i << " vowels" << endl;
	return 0;
}


