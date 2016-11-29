/*
 * 20-questions.cxx
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
#include <cstdio>

using namespace std;


void getinfo(ifstream& i, char id[], char a[] ){
	i.get(); i.get(id,8+1);
	i.get(); i.get(a,20+1);
}

char grade(int& g, char a[], char key[]){
	string k = key;	g=0; int j=0;
	for (char c:k) { 
		g += c == a[j] ? 2 : (a[j] == ' ' ? 0 : -1);
		j++;
	}
	switch ((int)((g/40.0)*100)) {
        case 90 ... 100:return 'A';
        case 80 ... 89:return 'B';
        case 70 ... 79:return 'C';
        case 60 ... 69:return 'D';
        default:return 'F';
    }
}

void printinfo(char id[], char a[], char l, int g){
	printf("Student Id: %s\nAnswers: %s\nGrade: %d/40 %c\n\n",id,a,g,l);
}

int main()
{
	ifstream i ("Ch8_Ex6Data.txt");
	int g; char key[20], id[8], a[20], l;
    i.get(key, 20+1); printf("Answer Key = %s\n\n",key);
    
    do {
    	fill(begin(id), end(id), ' ');
	    fill(begin(a), end(a), ' ');
	    getinfo(i,id,a);
	    l = grade(g,a,key);
	    printinfo(id,a,l,g);
	} while(!i.eof());
	cout.flush();
    
    return 0;
}
