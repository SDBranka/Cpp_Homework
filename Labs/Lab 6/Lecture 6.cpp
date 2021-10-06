#include <iostream>
using namespace std;

int get();
void displayHeading();
void swap(int, int);
void swapReal(int &, int &);
void getB(int &, int &);
void computeSum(int, int &);

int main()
{
    int num;
    displayHeading(); //how to call a void function
    num = get();
    cout << num << "\n\n";
    int a = 20, b = 100;
    swap(a, b); //called by value
    cout << "a = " << a << " and b = "
        << b << "\n\n";
    swapReal(a, b); //called by reference
    cout << "Now a = " << a << " and b = "
        << b << "\n\n";

    int c, d;
    getB(c, d);
    cout << "c = " << c << " and d = "
        << d << "\n\n";

    int e, total;
    cout << "Enter a whole number: ";
    cin >> e;
    computeSum(e, total);
    cout << "E is still " << e << ". The sum from 1-e is: " << total << endl;

    return 0;
}

int get() //get a number from the user and return it
{
    int number;

    cout << "enter a whole number:";
    cin >> number;

    return number;
}

void displayHeading() //void functons perform task, but return no value
{
    cout << "Programmer: Sam Branka\n"
        << "Course:     COSC 246, Winter 2016\n"
        << "Lab #:      Lecture 6 demo\n"
        << "Due Date:   \n\n";
    return;
}

void swap(int x, int y) //useless function just to prove a point about call
{                       // by value
    int z = y;
    y = x;
    x = z; //left the "return;" out to show it's not neccessary
} //with a void function, except to break before the bracket

void swapReal(int &x, int &y)
{
    int z = y;
    y = x;
    x = z;
}

void getB(int &first, int &second)
{
    cout << "Enter two whole numbers: ";
    cin >> first >> second;
}

//returns the sum from 1 through the value of the first parameter
void computeSum(int value, int &sum)
{
    sum = 0;
    for (int i = 1; i <= value; i++)
        sum = sum + i;
}

/* Passing arguments to a function
 * There are two ways:
 *    -call by value
 *                  
 *    -call by reference


*/
