// Demo01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

// Creates a file stream called fs and
// associates it with a file name myfile.txt on 
// our disk. Read from such file line by line.
void test1()
{
    std::fstream fs{ "myfile.txt" };
    std::string s;
    while (fs)
    {
        std::getline(fs, s); // read each line into a string
        std::cout << s << '\n';
    }
}

// To read from a file, one character at the time
// we can use file stream's >> operator
void test2()
{
    std::fstream fs{ "myfile.txt" };
    char c;
    while (fs >> c)
    {
        std::cout << c;
    }
    std::cout << '\n';
}

// By default, reading the file contents one character
// at the time into our char variable, this skips the reading
// of white spaces. To rectify this, we add the
// std::noskipws manipulator.
void test3()
{
    std::fstream fs{ "myfile.txt" };
    char c;
    while (fs >> std::noskipws >> c)
    {
        std::cout << c;
    }
    std::cout << '\n';
}

// To write to a file, we use file stream << operator
void test4()
{
    std::fstream fs{ "myoutputfile.txt", std::ios::out };
    fs << "First line of text." << '\n';
    fs << "Second line of text." << '\n';
    fs << "Third line of text." << '\n';
}

// To append text to an existing file, we include
// the std::ios::app flag inside the file stream
// constructor
void test5()
{
    std::fstream fs{ "myoutputfile.txt", std::ios::app };
    fs << "This is appeneded text." << '\n';
    fs << "This is also an appended text." << '\n';
}

// We can also output strings to our file using
// the file stream's << operator
void test6()
{
    std::fstream fs{ "myoutputfile.txt", std::ios::out };
    std::string s1 = "The first string.\n";
    std::string s2 = "The second string.\n";
    fs << s1 << s2;
}

// Creates a simple string stream using a default constructor
void test7()
{
    std::stringstream ss{ "Hello world." };
    std::cout << ss.str();
    std::cout << '\n';
}

// Here we created a string stream and initialized it with a string literal in a constructor.
// Then we used the string stream¡¯s.str() member function to print the content of the
// stream.The.str() member function gets the string representation of the stream.
void test8()
{
    std::stringstream ss;
    ss << "Hello World.";
    std::cout << ss.str();
    std::cout << '\n';
}

// We can also insert values of fundamental types
// into a string stream using the formatted output 
// operator <<
void test9()
{
    char c = 'A';
    int x = 123;
    double d = 456.78;
    std::stringstream ss;
    ss << c << x << d;
    std::cout << ss.str();
    std::cout << '\n';
}

// To make the output more readable, 
// we can insert text between the variables
void test10()
{
    char c = 'A';
    int x = 123;
    double d = 456.78;
    std::stringstream ss;
    ss << "The char is: " << c << ", int is: " << x << " and double is: " << d;
    std::cout << ss.str();
    std::cout << '\n';
}

// To output data from a stream into an object, we use the >> operator
void test11()
{
    std::string s = "A 123 456.78";
    std::stringstream ss{ s };
    char c;
    int x;
    double d;
    ss >> c >> x >> d;
    std::cout << c << ' ' << x << ' ' << d << ' ';
    std::cout << '\n';
}

int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();
    test10();
    test11();
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
