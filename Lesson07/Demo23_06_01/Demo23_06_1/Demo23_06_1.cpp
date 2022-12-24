// Demo23_06_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class MyClass
{
private:
    int x;
    double d;

public:
    MyClass()
        : x{ 0 }, d{ 0.0 }
    {
    }

    // prefix operator ++
    MyClass& operator++()
    {
        ++x;
        ++d;
        std::cout << "Prefix operator ++ invoked." << '\n';
        return *this;
    }

    // postfix operator ++
    MyClass operator++(int)
    {
        MyClass tmp(*this); // create a copy
        operator++();		// invoke the prefix operator overload
        std::cout << "Postfix operator ++ invoked." << '\n';
        return tmp;			// return old value
    }
};

int main()
{
    MyClass myobject;

    // postfix operator
    myobject++;
    // is the same as if we had:
    myobject.operator++(0);
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