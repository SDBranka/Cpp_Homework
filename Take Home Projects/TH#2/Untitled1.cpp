#include<iostream>
#include<fstream>
#include <stdlib.h>
using namespace std;

int main(){
	
	char date[11];
	int  a[2], num ;
	
	date=03-Mar-1981;
	a[0]=atoi(date[0]);
	cout<< a[0] << endl;
	num=a[0]+5;
	cout<< "num is " << num << endl;
	
	return 0;
}
//
//  int number;
//  char buffer[256];
//  cout<< "Enter a number: ";
//  cin>> buffer;
//  number = atoi (buffer);
//  cout<< "The number is " << number << endl;
//  int sum=0;
//  while(number>0){
//   	sum=sum+number%10;
//	number=number/10;
//  }
//  cout<< sum << endl;
//    
//  return 0;
//}
