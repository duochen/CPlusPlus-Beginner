// Demo23_04_04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class MyClass
{
public:
    // default constructor
    MyClass()
    {

    }

    // user defined copy constructor
    MyClass(const MyClass& rhs)
    {
        std::cout << "Copy constructor is invoked!" << '\n';
    }
    MyClass& operator=(const MyClass& rhs)
    {
        std::cout << "Copy assignment operator is invoked!" << '\n';

        // implement the copy logic here
        return *this;
    }
    
};

int main()
{
    MyClass copyfrom;
    // MyClass copyto = copyfrom;  // on the same line, uses a copy constructor
    MyClass copyto;
    copyto = copyfrom;       // uses a copy assignment operator
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
