// Demo19_04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void voidfn();

int intfn();

int multiplereturns(int x);   

int main()
{
    std::cout << "Hello World!\n";

    std::cout << "The value of a function is: " << intfn();

    std::cout << "The value of a function is: " << multiplereturns(25);
}

void voidfn()
{
    std::cout << "This is void function and needs no return.";
}

int intfn()
{
    return 42; // return statement
}

int multiplereturns(int x)
{
    if (x >= 42)
    {
        return x;
    }
    return 0;
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
