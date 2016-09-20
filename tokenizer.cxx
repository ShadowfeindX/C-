/*
 * tokenizer.cxx
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
#include <sstream>
#include <iostream>
#include <string.h>

using namespace std;
int main(int argc, char *argv[])
{
    //string arr[3];
    ifstream i ("Ch7_Ex9Data.txt");
    ofstream o ("test.txt");
    stringstream ss;
    string c;// = "lastName, firstName middleName";

    getline(i,c);
    while(!i.eof())
    {
        char *t = strdup(c.c_str());
        char *s = strtok(t, ", ");

        while(s != NULL)
        {
            ss << s << endl;
            s = strtok(NULL, ", ");
        }

        ss >> c;
        ss >> t;
        o << t << ' ';
        ss >> t;
        o << t << ' ';
        o << c << endl;

        getline(i,c);
        ss.str( std::string() );
        ss.clear();
    }

    i.close();
    o.close();
    cout << "Done!" << endl;
    return 0;
}
