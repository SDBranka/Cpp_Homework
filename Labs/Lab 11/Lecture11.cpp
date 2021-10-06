#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

	string line;
	//	getline(cin, line);
	//
	//read from an input file and echo every line
	ifstream fin;
	string fileName;
	cout << "Enter file name: ";
	cin >> fileName;

	fin.open(fileName.c_str()); // instead of fin.open(fileName);
	getline(fin, line);
	while (!fin.eof())
	{
		cout << line << endl;
		getline(fin, line);
	}

	return 0;
}
