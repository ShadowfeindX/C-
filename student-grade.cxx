#include <iostream>
#include <fstream>


using namespace std;

int main() {
	
    string s; double a = 0.0;
	ifstream test("test.txt");
	ofstream avg("testavg.out");

    test >> s; avg << s << ' ';
    test >> s; avg << s << ' ';
    s = '0';
    while(!test.eof()) {
        a += stof(s);
        test >> s; avg << s << ' ';
    } avg << a/5;

    test.close();
    avg.close();
    
	return 0;
}
