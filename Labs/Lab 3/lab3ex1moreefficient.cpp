#include <iostream>
using namespace std;

int main()
{
  double income, tax_owed;

  cout << "Please enter the dollar value of your yearly income: ";
  cin >> income;

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  if (income < 50, 000)
    tax_owed = 0;
  else if (income < 100000)
    tax_owed = 2000;
  else if (income < 500000)
    tax_owed = 10000;
  else if (income < 1000000)
    tax_owed = 50000;
  else if (income >= 1000000)
    tax_owed = 500000;
  cout << "You owe $" << tax_owed << " in taxes.\n";
  return 0;
}
