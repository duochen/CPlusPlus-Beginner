// Demo17_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    const int n = 5;
    int arr[n] = { 10, 20, 30, 40, 50 };
    // n++;  // error, can't modify a read-only object

    // const int n;         // error, no initializer
    const int m = 123;      // OK

    constexpr double d = 456.78; // OK, 456.78 is a compile-time constant expression
    constexpr double d2 = d;     // OK, d is a constant expression
    int x = 123;
    // constexpr int n2 = x;        // the value of x is not known during compile-time
}   

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
