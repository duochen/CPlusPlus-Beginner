// Demo05_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int x = 123;
    int y = -256;
    std::cout << "The value of x is: " << x << ", the value of y is: " << y;
    int z = x;
    std::cout << "The value of x is: " << x << ", the value of z is: " << z;
    // x is 123
    // z is 123
    x = 456;
    std::cout << "The value of x is: " << x << ", the value of z is: " << z;
    // x is now 456
    // z is still 123

    int a = 10;     // decimal literal
    int b = 012;    // octl literal
    int z = 0xA;    // hexadecimal literal
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
