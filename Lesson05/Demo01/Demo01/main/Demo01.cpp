#include <iostream>

// function declaration
void myfunction();

// function declaration
int mysquarednumber(int x);

// function declaration
int mysum(int x, int y);

void voidfn();

int intfn();

int multiplereturns(int x);

void myfunction(int byvalue)
{
    std::cout << "Argument passed by value: " << byvalue << '\n';
}

void myfunction1(int& byreference)
{
    byreference++; // we can modify the value of the argument
    std::cout << "Argument passef by reference: " << byreference << '\n';
}
 
// What is preferred is passing an argument by const reference, also referred to as a reference
// to const.It can be more efficient to pass an argument by reference, but to ensure it is not
// changed, we make it of const reference type
// We use passing by const reference for efficiency reasons, and the const modifier
// ensures the value of an argument will not be changed.
void myfunction2(const std::string& byconstreference)
{
    std::cout << "Argument passef by reference: " << byconstreference << '\n';
}

int main()
{
    myfunction();
    int myresult = mysquarednumber(2);
    std::cout << "Number 2 squared is: " << myresult << '\n';
    myresult = mysum(5, 10);
    std::cout << "The sum of 5 and 10 is: " << myresult << '\n';
    voidfn();
    std::cout << "The value of a function is: " << intfn() << '\n';
    std::cout << "The value of a function is: " << multiplereturns(25) << '\n';
    myfunction(123);
    int x = 123;
    myfunction1(x);
    std::string s = "Hello World!";
    myfunction2(s);
}

void myfunction()
{
    std::cout << "Hello World from a function" << '\n';
}

int mysquarednumber(int x)
{
    return x * x;
}

int mysum(int x, int y)
{
    return x + y;
}

int intfn()
{
    return 42;
}

void voidfn()
{
    std::cout << "This is void function and needs no return." << '\n';
}

int multiplereturns(int x)
{
    if (x >= 42)
    {
        return x;
    }
    return 0;
}