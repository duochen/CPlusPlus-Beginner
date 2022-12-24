// Exercise18_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int x = 3;
    switch (x)
    {
    case 1:
        std::cout << "The value is equal to 1." << '\n';
        break;
    case 2:
        std::cout << "The value is equal to 2." << '\n';
        break;
    case 3:
        std::cout << "The value is equal to 3." << '\n';
        break;
    case 4:
        std::cout << "The value is equal to 4." << '\n';
        break;
    default:
        std::cout << "The value is not inside the [1..4] range." << '\n';
        break;
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
