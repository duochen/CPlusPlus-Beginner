// Demo05_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    char c = 'a';
    std::cout << "The value of variable c is:" << c << '\n';
    c = 'Z';
    std::cout << "The new value of variable c is:" << c << '\n';
    std::cout << "The size of type char is: " << sizeof(char) << " byte(s)" << '\n';
    c = 97;    // The 'a' character in ASCII table is represented with the number of 97.
    std::cout << "The value of variable c is:" << c << '\n';
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
