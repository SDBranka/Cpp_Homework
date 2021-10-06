/*
 how to do an input and output
 1) need to define a stream
    -stream is a flow of data
      -input stream ->data flows into your program
      -output stream -> data flows out of your program
 2) connect the stream to a file
 3)read from the file or write to a file
 
 file input:
    -library <fstream>
    -define an input stream
       -"ifstream in_stream;"             //i=input f=file stream named in_stream
    -connect the input file to the stream
       -"in_stream.open("today.txt");"           // name of file goes into braces    //"." is called a selection operator
    
  -read a whole number from the input file
      -" int x;
        in_stream>> x;      
*/

#include <fstream>
#include <iostream>
using namespace std;

int main()
{

	//this section reads three numbers in from a file
	ifstream in_stream;				//declare an interger stream
	in_stream.open("testdata.txt"); //connect the input file to the stream
	int x, y, z;
	in_stream >> x >> y >> z; //read data from file
	cout << "sum = " << x + y + z << endl;

	//section works for a known number of intgers
	ifstream in_streamB;
	in_streamB.open("testdata2.txt");
	int sum = 0, number;
	for (int i = 1; i <= 5; i++)
	{
		in_streamB >> number;
		sum = sum + number;
		cout << "\nSum is: " << sum << "\n\n";
	}

	//section works when there is an unknown number of integers
	ifstream in_streamC;
	in_streamC.open("testdata3.txt");
	sum = 0;
	while (in_streamC >> number) //goes into loop only as long as there is something to read
	{
		cout << number << endl;
		sum = sum + number;
	}
	cout << "\nsum is: " << sum << endl;

	/*	//this shows an alternative way to read an unknown number of integers using the end of fil prompt
	sum=0;
	in_streamC>>number;
	while(!in_streamC.eof())
	{
		cout<<number<<endl;
		sum=sum+number;
	}
	cout<< "\nSum = "<< sum<<endl;                                       not working
*/

	char file_name[21]; //variable of 20 slots
	ifstream in_streamVar;
	cout << "Enter a file name: ";
	cin >> file_name;
	in_streamVar.open(file_name);
	while (in_streamC >> number) //goes into loop only as long as there is something to read
	{
		cout << number << endl;
		sum = sum + number;
	}
	cout << "\nsum is: " << sum << endl;

	//section demonstrates a failure
	ifstream in_streamD;
	in_streamD.open("notThere.txt");
	if (in_streamD.fail())
	{ //this checks to make sure there is access to the file
		cout << "\ncan't open or read from file in_streamD has failed\n";
		exit(1);
	}

	return 0;
}
