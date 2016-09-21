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


#include <algorithm>
#include <iostream>

using namespace std;
int smallestIndex(int a[], int size);
int largestIndex(int a[], int size);

int main(int argc, char *argv[]) {
    int a[5] {3,1,6,8,10};
    cout << "Index of Smallest Value: " << smallestIndex(a,5) << endl;
    cout << "Index of Largest Value: " << largestIndex(a,5) << endl;
    return 0;
} int smallestIndex(int a[], int size) {
    int b = *min_element(a,a+size);
    return distance(a,find(a,a+size,b));
} int largestIndex(int a[], int size) {
   int b[1] = {*max_element(a,a+size)};
   return distance(a,find_end(a,a+size,b,b));
}
