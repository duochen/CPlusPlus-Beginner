// Demo19_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void myfunction();      // function declaraion

int mysquarednumber(int x);  // function declaraion

int mysum(int x, int y);

int main()
{
    myfunction();

    int myresult = mysquarednumber(2); // a call to the function
    std::cout << "Number 2 squared is: " << myresult << '\n';

    myresult = mysum(5, 10);
    std::cout << "The sum of 5 and 10 is: " << myresult << '\n';
}

// function definition
void myfunction()
{
    std::cout << "Hello World from a function." << '\n';
}

// function definition
int mysquarednumber(int x) 
{
    return x * x;
}

int mysum(int x, int y) 
{
    return x + y;
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
