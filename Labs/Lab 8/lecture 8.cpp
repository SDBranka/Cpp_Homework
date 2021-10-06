#include <iostream>
#include <cmath>   // includes library that allows sqrt
#include <cstdlib> // includes library that allows pow and rand
#include <ctime>   // includes computer time
#include <fstream> // includes i/o stream
using namespace std;

int main()
{
	char one, two, three;

	cout << "Enter three characters: ";
	//cin>> one >> two >> three;
	cin.get(one);
	cin.get(two);
	cin.get(three);
	cout << one << "\t" << two << "\t" << three << endl;

	return 0;
}
