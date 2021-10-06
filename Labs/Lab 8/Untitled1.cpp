#include <iostream>
#include <string>
using namespace std;

void funct(string, string);

int main()
{
	char a[21], b[15], c, d, e;
	string l, m, n;

	cout << "enter the first name: ";
	cin >> l;
	cout << "Enter the second name: ";
	cin >> m;

	funct(l, m);
	cout << "\n\nThis program is done.\n";

	return 0;
}

void funct(string x, string y)
{
	cout << "Name 1: " << x << endl
		<< "Name 2: " << y << endl;
}
