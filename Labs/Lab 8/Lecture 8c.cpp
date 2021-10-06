#include <iostream> // allows keyboard io
#include <cmath>    // includes library that allows sqrt
#include <cstdlib>  // includes library that allows pow and rand
#include <ctime>    // includes computer time
#include <fstream>  // allows file io
using namespace std;

void new_line();

int main()
{
   char symbol, letter;
   int count;

   //create a copy of an input file
   char input_file_name[21];
   //create in and output streams
   ifstream fin;
   ofstream fout;

   //ask user for the input file name
   cout << "Enter the input file name: ";
   cin >> input_file_name;
   fin.open(input_file_name);
   fout.open("output.txt");

   fin.get(symbol);
   while (!fin.eof())
   {
      fout << symbol;
      fin.get(symbol);
   }
   fin.close();
   fout.close();

   /*cout<< "Enter a letter: ";
   cin>> letter;
   cout<< static_cast <char> (toupper(letter)) << endl;
   leter = toupper(letter);
   cout<< letter << endl;
   */

   /* ifstream fin;

   fin.open("testData.txt");
   if (fin.fail()){
      cout<< "Can't open file";
      exit (1);
   }
  
  fin.get(symbol);
 // while (symbol!='\n'){                      //\n is the end of a line or "return"
  while(!fin.eof()){                           // looks for end of file
  	cout<< symbol;
	if(symbol == ' ')
  	   count++;
    fin.get(symbol);
  }
  cout<< "\nThe number of spaces is: " << count << endl;*/
   return 0;
}

void new_line()
{
   char junk;
   cin.get(junk);
   while (junk != '\n')
      cin.get(junk);
}

/*
library <cctype>
toupper   changes char to uppercase
tolower   changes char to lowercase


*/
