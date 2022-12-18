#include "stdafx.h"
#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;

Person::Person() 
    :arbitrarynumber(0)
{
    cout << "Constructing " << firstname << " " << lastname << endl;
}

Person::Person(string first, string last, int arbitrary)
    :firstname(first),
     lastname(last),
     arbitrarynumber(arbitrary)
{
    cout << "Constructing " << getName() << endl;
}

Person::~Person()
{
    cout << "Destructing " << firstname << " " << lastname << endl;
}

string Person::getName()
{
    return firstname + " " + lastname;
}