#include <iostream>
#include <cmath>   // includes library that allows sqrt
#include <cstdlib> // includes library that allows pow and rand
#include <ctime>   // includes computer time
#include <fstream> // includes i/o stream
using namespace std;

int main()
{
	char symbol;
	int count;

	cout << "Enter a phrase and ended with a period: \n";
	//cin>> symbol;
	cin.get(symbol);
	while (symbol != '.')
	{

		if (symbol == ' ')
			count++;
		cin.get(symbol);
	}
	cout << "The number of blanks in the sentence is: "
		<< count << endl;
	return 0;
}
