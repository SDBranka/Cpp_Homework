
// demo 4 - 5 - 16

/*
* Topics covered: Searching and sorting arrays, and multi-dimensional arrays
*
* Created on: Apr 6, 2016
* Author: COSC 246 and knash3
*/

#include <iostream>
    using namespace std;

// function prototypes
int indexOfSmallest(int[], int, int);
void selection(int[], int);
int sum(int, int);
int sumAll(int[][5], int);

int main()
{
    int numbers[] = {4, 12, 25, 82, 1, 17, 76};
    //cout <<linearSearch(numbers, 7);

    // output the array
    cout << "unsorted array:\n";
    for (int i = 0; i < 7; i++)
    {
        cout << numbers[i] << "\t";
    }
    cout << endl;

    // sort the array
    selection(numbers, 7);

    // output the array
    cout << "sorted array:\n";
    for (int i = 0; i < 7; i++)
    {
        cout << numbers[i] << "\t";
    }
    cout << endl
        << endl;

    // create a two dimensional array with 4 rows and 5 columns
    const int rows = 4, colunms = 5;
    int values[rows][colunms];

    // filling the array with the desired values
    for (int row = 0; row < 4; row++)
    {
        for (int colunm = 0; colunm < 5; colunm++)
        {
            values[row][colunm] = (row + 1) * 10;
        }
    }

    // output the two dimensional array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colunms; j++)
        {
            cout << values[i][j] << " ";
        }
        cout << endl;
    }

    // output the sum of two array elements
    cout << endl
        << sum(values[1][2], values[3][4]) << endl;

    // output the sum of all the array elements
    cout << sumAll(values, 4);

    return 0;
}

//return the sum of all the array elements
int sumAll(int a[][5], int rowSize)
{
    int sum = 0;
    for (int row = 0; row < rowSize; row++)
    {
        for (int colunm = 0; colunm < 5; colunm++)
        {
            sum = sum + a[row][colunm];
        }
    }
    return sum;
}

// return the index of the smallest value in the array starting from position 'start'
int indexOfSmallest(int a[], int size, int start)
{
    int min = start;
    for (int i = start + 1; i < size; i++)
    {
        if (a[i] < a[min])
        {
            min = i;
        }
    }
    return min;
}

// sort the array using selection sort algorithm
void selection(int a[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {

        // find the index of the smallest value in the current array
        int index = indexOfSmallest(a, size, i);

        // find the index of the smallest value in the current array
        // int index = i;
        // for (int k = i + 1; k < size; k++) {
        // if (a[index] > a[k]) {
        // index = k;
        // }
        // }

        // is the smallest value in the right place? if not, swap it with the value that is there
        if (i != index)
        {
            int temp = a[i];
            a[i] = a[index];
            a[index] = temp;
        }
    }
}

// return the sum of its two arguments
int sum(int x, int y)
{
    return x + y;
}

//
//
//
//
//int main()
//{
//   fstream fin;
//   char fileFame[21];
//   char city[50][20];
//   char state [50][20];
//   int population [50];
//   int size;
//
//   cout<< "Enter a filename: ";
//   cin>> fileName
//}
