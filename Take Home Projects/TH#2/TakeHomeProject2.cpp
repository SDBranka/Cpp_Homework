/*
  * Programmer: Sam Branka
  * Course: COSC 246, Winter 2016
  * Lab: Take Home Project #2 
  * Due Date: 4/7/2016
  * Description: This program reads in a birthdate of form "dd-mmm-yyyy", converts 
  *              all portions to numeric values, and adds the values to determine  
  *              the "lucky number" for each date.
  */

#include <iostream>                        // includes 'cin'/'cout'
#include <fstream>                         // includes i/o stream
#include <cctype>                          // includes toupper
#include <stdlib.h>                        // includes atoi
using namespace std;
 
void displayHeading();                                          //displays project information
int sumDigits(int);                                             //adds all the number from the incoming int
int monthToNum(char[]);                                         //determines and returns the numeric value of the month 
void monthToName(int);                                          //displays the name of the month 
void displayLuckyNum(int[], int[], int[], int[], int);          //displays lucky number(s)
void luckyNumber(ifstream&, int[], int[], int[], int[], int& size);   //determines lucky number(s)

int main()
{
	char file_name[21], playAgain, symbol;
    int dateN[999], luckyNum[999], monthN[999], size, yearN[999];

	ifstream fin;
		
    displayHeading();                                            //displays project information	
	do{
		cout<< "\nEnter an input file name: ";
		cin>> file_name;
		fin.open(file_name);
		if(fin.fail()){
			cout<< "\nThe file failed to open";
			exit (1);
		}
        luckyNumber(fin, dateN, monthN, yearN, luckyNum, size);    //determines lucky number(s)
        fin.close();
	    displayLuckyNum(dateN, monthN, yearN, luckyNum, size);    //displays lucky number(s)
    
        cout<< "\nWould you like to continue? Y (or y) for yes, N (or n) for no: ";
        cin>> playAgain;
    }while(playAgain=='y'||playAgain=='Y');
    return 0;
}

void displayHeading()                                     //Displays the heading to the program
{
	cout<< "Programmer: Sam Branka\n"
        << "Course:     COSC246, Winter 2016\n"
        << "Due Date:   4-7-16\n"
	    << "Lab #:      Take Home Project #2\n";
      
}

int sumDigits(int number)                    //adds all the number from the incoming int
{
    int sum=0;
    while(number>0){
    	sum+=number%10;
		number/=10;
    }
    return sum;
}

int monthToNum(char month[3])               //determines and returns the numeric value of the month
{
	int num=0; 
	
	if(month[0]=='J'){     //'AN') return 1 'UN' return 6 'UL' return 7
 	   if(month[1]=='A')
	     num+=1;
       else{
       	  if(month[2]=='N')
       	     num+=6;
          else
		     num+=7;
        }
    }
	else if(month[0]=='F')    //'EB')
	   num+=2;
	else if(month[0]=='M'){    //'AR') return 3;   'AY' return 5;
	   if(month[2]=='R')   
	      num+=3;
	    else
	      num+=5;
    }
	else if(month[0]=='A'){        //'PR') return 4; 'UG' return 8;
	   if(month[1]=='P')
	      num+=4;
	    else
		   num+=8;
    }
    else if(month[0]=='S')      //'EP')
       num+=9;
    else if(month[0]=='O')         //'CT')
       num+=10;
    else if(month[0]=='N')        //'OV')
       num+=11;
    else                           //'DEC'
       num+=12;
    
    return num;
}

void monthToName(int month)    //displays the name of the month 
{
	switch(month){
		case 1:
			cout<< "Jan";
			break;
		case 2:
			cout<<"Feb";
			break;
	    case 3:
            cout<< "Mar";
            break;
        case 4:
            cout<< "Apr";
            break;
        case 5:
            cout<< "May";
            break;
        case 12:
            cout<< "Dec";
            break;
	}
}

//displays lucky number(s) 
void displayLuckyNum(int date[], int month[], int year[], int lN[], int j)  
{
	cout<< endl;
	    for(int k=0; k<j; k++){
	    	cout<< "Lucky number for '" << date[k]
	    	    << "-";
	    	monthToName(month[k]);               //displays the name of the month 
	    	cout<< "-" << year[k] << "' is: "
	    	    << lN[k] << endl;
	    }
}

//determines lucky number(s)
void luckyNumber(ifstream& file, int date[], int month[], int year[], int lNum[], int& j)
{
	char dateC[2], monthC[3], symbol, yearC[4];
    int  i, num, sum;
    
	j=0;
	file.get(symbol);
   	while(!file.eof()){
    	while(symbol!='\n'){
	      for(i=0; i<2; i++ ){
	      dateC[i]=symbol;
	      file.get(symbol);
	      }
	    date[j]=atoi(dateC);
	    sum=sumDigits(date[j]);                   //adds all the number from the incoming int  
           for(i=0;i<3; i++){
               file.get(symbol);
		       monthC[i]=toupper(symbol);    	
            }
            month[j]=monthToNum(monthC);               //determines and returns the numeric value of the month
            sum+=sumDigits(month[j]);                 //adds all the number from the incoming int
            file.get(symbol);
		    for(i=0; i<4; i++){
               file.get(symbol);
        	   yearC[i]=symbol;
		    }
		    year[j]=atoi(yearC);
		    sum+=sumDigits(year[j]);                    //adds all the number from the incoming int
		    lNum[j]=sumDigits(sum);                  //adds all the number from the incoming int
		    if(lNum[j]>9){
		   	   sum=lNum[j];
		   	   lNum[j]=sumDigits(sum);                //adds all the number from the incoming int
		    }
			file.get(symbol);
			j++;
		}
		file.get(symbol);
	    }
}

