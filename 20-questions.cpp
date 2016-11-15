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


#include <fstream>
#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
    string s;
    char responses[20];
    char answers[20];
    ifstream i ("Ch8_Ex6Data.txt");
    ofstream o ("test.txt");
    i >> answers >> s;
    i.get(); i.get(responses, 20); //getline(i,s[1]);
    while (!i.eof()) {
        int j=0,g=0;
        for (char c:answers) { c==responses[j]?++g:g;j++;  }
		o << s << ' ';
        o.write(responses,20);
        o << ' ' << (g/20.0)*100.0 << ' ';
        switch ((int)((g/20.0)*100)) {
            case 90 ... 100:o << "A" << endl;break;
            case 80 ... 89:o << "B" << endl;break;
            case 70 ... 79:o << "C" << endl;break;
            case 60 ... 69:o << "D" << endl;break;
            default:o << "F" << endl;
        } i >> s; i.get();
        i.get(responses, 20);
    } cout << "Done!" << endl;
    return 0;
}
