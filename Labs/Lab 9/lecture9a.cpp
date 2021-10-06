/*
* Topics covered: creating an array, accessing array elements, initializing an array,
* and performing operations on the array elements.
* testArray.c
*
* Created on: Mar 29, 2016
* Author: COSC 246
*/
#include <iostream>
#include <ctime>
using namespace std;

// function prototypes
int sum(int, int);
int total(int[], int);
void print(const int[], int);
int howMany(int[], int, int);

int main()
{
    srand(time(NULL));

    // create an int array of size 10 and initialize
    // it with random integers between 5-50
    int numbers[10];
    for (int i = 0; i < 10; i++)
        numbers[i] = rand() % 46 + 5;

    // display first element, last element, and their sum
    cout << numbers[0] << " + "
         << numbers[9] << " = "
         << numbers[0],
        numbers[9] << endl;

    // same as above but using the function 'sum'
    cout << numbers[0] << " + "
         << numbers[9] << " = "
         << sum(numbers[0], numbers[9]) << endl;

    // display the array elements
    print(numbers, 10);

    // display how many times 25 appears in the array
    cout << howMany(numbers, 10, 25) << endl;

    // display the sum of all the numbers in the array
    cout << total(numbers, 10) << endl;

    return 0;
}

// returns the frequency of a given value (or a target value)
int howMany(int first[], int size, int target)
{
    int counter = 0;
    for (int i = 0; i < size; i++)
        if (first[i] == target)
            counter++;
    return counter;
}

// prints out all the array elements on one line
void print(const int numbers[], int size)
{
    for (int i = 0; i < size; i++)
        cout << numbers[i] << "\t";
    // numbers[0] = 100;                      // can't change the array element because of 'const'
    cout << endl;
}

// returns the sum of its arguments
int sum(int one, int two)
{
    return one + two;
}

// return the sum of all the array elements
int total(int myNumbers[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum = sum + myNumbers[i];
    return sum;
}
