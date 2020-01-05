#include<iostream>
using namespace std;

// function to print the given pattern recursively
void printPatternRecur(int n, int i)
{
    // base condition
    if (n < 1)
        return;

    // to print the stars of a particular row
    if (i <=n)
    {
        cout << "*";
        // recursively print rest of the stars
        // of the row
        printPatternRecur(n, i-1);

    }
    else
    {
        cout << endl;
        // change line

        // print stars of the remaining rows recursively
        printPatternRecur(n-1,i);
    }
}

// Driver program to test above
int main()
{
    int n = 5;
    printPatternRecur(n, 1);
    return 0;
}
