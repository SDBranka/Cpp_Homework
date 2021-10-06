/*
  * Programmer: Sam Branka
  * Course: COSC 246, Winter 2016
  * Lab: 7
  * Due Date: 3-10-2016
  * Description: This program reverses the value of the first parameter 
  *              and returns that value through the second parameter  
  *             
  */

#include <iostream>
#include <cstdlib>                                              // includes library that allows pow and rand
#include <ctime>                                                // includes computer time
#include <fstream>                                              // includes i/o stream
using namespace std;
 
void displayHeading();                                          //displays project information
void oStream();                                                 //handles the output to proj7.txt    
void iStream(int&, int&, double&);                        //handles the input from proj7.txt, displays numbers and returns stats
void showStats(int, int, double);                               //displays stats

int main()
{
	int largest, smallest;
    double average;
    char playAgain;                                            	
	    
	srand(time(0));                                             //seeds the random number generator
	
    displayHeading();                                           //displays project information	
    
	do{
	   oStream();                                               //handles the output to proj7.txt   
       iStream(largest, smallest, average);                     //handles the input from proj7.txt, displays numbers and stats
       showStats(largest, smallest, average);
            
	   cout<< "\nDo it again? Y (or y) for yes, N (or n) for no: ";
       cin>> playAgain;
    }while(playAgain=='y'||playAgain=='Y');
    
	
	return 0;
}


void displayHeading()                                            //Displays the heading to the program
{
	cout<< "Programmer: Sam Branka\n"
        << "Course:     COSC246, Winter 2016\n"
        << "Lab #:      7\n555"
	    << "Due Date:   3-10-16\n";      
}

void oStream()
{
	int n, randN;
	
	ofstream out_stream;
	out_stream.open("proj7.txt");                             //connect the output file to the stream
	cout<< "\nHow many numbers you want in \"proj7.txt\": ";
	cin>> n;
    for(int i=1; i<=n; i++){
       randN=1+(rand()%100);
	   out_stream<< randN << "\t";
       if(i%3==0)
          out_stream<< "\n";
	   }
    out_stream.close();
}

void iStream(int& biggest, int& tiniest, double& ave)                                                 //handles the input from proj7.txt, displays numbers and stats
{
	int aveCount=0,
	    number;	
	double numberSum=0;
	
	ifstream in_stream;    
    in_stream.open("proj7.txt");                              //connect the input file to the stream
	
	biggest=0;
	tiniest=101;
	cout<< "File \"proj7.txt\" contains:\n";
    while(in_stream>>number){
	   cout<< number << "\t";
	   aveCount++;
	   if(aveCount%3==0)
	      cout<< "\n";
	   numberSum=numberSum+number;
       if(number<tiniest)
    	  tiniest=number;
       if(number>biggest)
    	  biggest=number;
    }
    in_stream.close();
	ave=numberSum/aveCount;
}

void showStats(int big, int small, double average)
{
	cout.setf(ios::fixed);                                   //limits the number of decimal places shown
    cout.setf(ios::showpoint);
    cout.precision(1);
 
    cout<< "\n\nThe largest number in \"proj7.txt\" is:                  "
        << big << endl
        << "The smallest number in \"proj7.txt\" is:                 "
        << small << endl
        << "The average of all the numbers in \proj7.txt\" is:       "
        << average << endl;
}

