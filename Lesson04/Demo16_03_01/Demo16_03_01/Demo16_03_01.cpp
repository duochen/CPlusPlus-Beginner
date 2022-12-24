// Demo16_03_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int x = 5;
    if (x == 5)
    {
        std::cout << "The value of x is equal to 5." << '\n';
    }

    x = 10;
    if (x > 5)
    {
        std::cout << "The value of x is greater than 5." << '\n';
    }
    if (x >= 10)
    {
        std::cout << "The value of x is greater than or equal to 10." << '\n';
    }
    if (x != 20)
    {
        std::cout << "The value of x is not equal to 20." << '\n';
    }
    if (x == 20)
    {
        std::cout << "The value of x is equal to 20." << '\n';
    }

    if (x > 5 && x < 15)
    {
        std::cout << "The value of x is greater than 5 and less than 15." << '\n';
    }
    bool b = true;
    if (x > 5 && b)
    {
        std::cout << "The value of x is greater than 5 and b is true." << '\n';
    }

    if (1) // literal 1 is convertible to true
    {
        std::cout << "The condition is true." << '\n';
    }

    if (x)
    {
        std::cout << "The condition is true." << '\n';
    }
    else
    {
        std::cout << "The condition is false." << '\n';
    }
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
