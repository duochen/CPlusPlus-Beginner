// Exercise24_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class MyClass
{
private:
    int x;
    double d;

public:
    MyClass(int xx, double dd)
        : x{ xx }, d{ dd }
    {
    }

    void printvalues()
    {
        std::cout << "The values of x is: " << x << ", the value of d is: " << d;
    }

    MyClass& operator-=(const MyClass& rhs)
    {
        this->x -= rhs.x;
        this->d -= rhs.d;
        return *this;
    }

    friend MyClass operator-(MyClass lhs, const MyClass& rhs)
    {
        lhs -= rhs;
        return lhs;
    }
};

int main()
{
    MyClass myobject{ 3, 3.0 };
    MyClass mysecondobject{ 1, 1.0 };
    MyClass myresult = myobject - mysecondobject;
    myresult.printvalues();
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
