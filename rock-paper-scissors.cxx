/*
 * rock-paper-scissors.cxx
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
#include <random>
#include <cstring>
#include <time.h>

using namespace std;
int main(int argc, char *argv[])
{
    char a;
    vector<int> b(3);
    srand(time(NULL));
    string i, s[3]{"Rock", "Paper", "Scissors"};

    for(;;)
    {
        shoot:
        bool t = false;
        if (system("CLS")) system("clear");
        for (string c : s)
        {
            cout << c << ", ";
            srand(time(NULL));
            a = rand()%3;
        } cout << "Shoot!" << endl;
        cout << "You -> "; cin >> i;
        for (string c : s) if (strcasecmp(c.c_str(),i.c_str())==0) t = true;
        if (!t) goto shoot;

        switch (i[0])
        {
            case 'r': case 'R':
                b = {2,0,1};
                break;
            case 'p': case 'P':
                b = {0,1,2};
                break;
            case 's': case 'S':
                b = {1,2,0};
                break;
            default:
                b = {2,1,0};
                cout << "Try Again!" << endl;
                goto shoot;
        }

        cout << "CPU -> ";
        switch (a)
        {
            case 0: cout << "Rock" << endl; break;
            case 1: cout << "Paper" << endl; break;
            case 2: cout << "Scissors" << endl;
        }

        if (a == b[0]) cout << "You Win!" << endl;
        if (a == b[1]) cout << "It's A Tie!" << endl;
        if (a == b[2]) cout << "You Lose!" << endl;

        ask:
        cout << "Wanna play again? ";
        cin >> i;
        if (i[0]=='n' || i[0]=='N') break;
        else if (i[0]=='y' || i[0]=='Y'){
            if (system("CLS")) system("clear");
            continue;   }
        else goto ask;
    }
    return 0;
}
