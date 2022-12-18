#pragma once
#include <string>
using namespace std;

class Person
{
private:
    string firstname;
    string lastname;
    int arbitrarynumber;

public:
    Person();
    Person(string first, string last, int arbitrary);
    ~Person();
    string getName();
};
