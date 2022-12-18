#pragma once

#include <iostream>
#include <memory>

using namespace std;

struct noisy
{
    noisy() { cout << "constructing noisy" << endl; }
    ~noisy() { cout << "destroying noisy" << endl; }
};

class word
{
public:
    word(char const* srcp, int l, int spaces);
};

class line
{

};


class page
{

};





int ch07_exercise_56();
int ch07_exercise_57();
int ch07_activity_7();