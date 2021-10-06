#include <iostream>
using namespace std;

int main()
{

   int size;
   cout << "Enter the size of the array: ";
   cin >> size;
   int numbers[size];

   for (int i; i < size; i++)
      numbers[i] = 10;
   for (int i; i < size; i++)
      cout << numbers[i] << "\t";

   return 0;
}
