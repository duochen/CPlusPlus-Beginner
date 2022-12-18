// ConsoleApplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Ex01_01.h"

#include "test.h"
#include "Person.h"
#include "Tweeter.h"
#include "status.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <deque>
#include <list>

using std::cout;
using std::endl;
using std::string;

#include <string>
#include <tuple>

#define GRADE_C_THRESHOLD 25
#define GRADE_B_THRESHOLD 50
#define GRADE_A_THRESHOLD 75

int ex1()
{
    std::cout << "Hello World!";
    return 0;
}

int ex2()
{
    int value = 0;
    std::cout << "Please enter test score (0 - 100): ";
    std::cin >> value;
    if (value < GRADE_C_THRESHOLD)
    {
        std::cout << "Fail";
    }
    else if (value < GRADE_B_THRESHOLD)
    {
        std::cout << "Pass: Grade C";
    }
    else if (value < GRADE_A_THRESHOLD)
    {
        std::cout << "Pass: Grade B";
    }
    else
    {
        std::cout << "Pass: Grade A";
    }

    return 0;
}

void ex3()
{
    {
        Tweeter t("Duo", "Chen", 123, "handle");
    }
}

int a = 3;
string b = "test";

void func(double c) {
    std::cout << b << std::endl;
}
void ex4()
{
    func(3.14);
    string a = "test";
    double b = 3.2 * 5 - 1;
    std::cout << 5 / 2.0 << std::endl;
}

double foo(int x) {
    auto result = (double)x + 3.6;
    return result;
}

double foo(double x) {
    auto result = x * 3.6;
    return result;
}

struct Student 
{
    int id;
    string name;
    string state;
    int age;

    void print() {
        std::cout << id << " " << name << " " << state << " " << age << std::endl;
    }
};

void printStudent(int id, string name, string state, int age) {

}

void printStudent(Student s) {
    std::cout << s.id << " " << s.name << " " << s.state << " " << s.age << std::endl;
}

void ex5()
{
    Student s;
    s.id = 101;
    s.name = "Ethan";
    s.state = "TX";
    s.age = 20;

    s.print();
    printStudent(s.id, s.name, s.state, s.age);
    printStudent(s);
}

void printStudentInfo(Student student)
{
    cout << student.name << " from " << student.state;
    cout << " (" << student.age << ") " << endl;
}

void ex6()
{
    Student s;
    s.id = 101;
    s.name = "Ethan";
    s.state = "TX";
    s.age = 20;

    printStudentInfo(s);
}

Student lookupStudent() 
{
    Student s = { 101, "Ethan", "TX"};

    return s;
}

void ex7()
{
    Student foundStudent = lookupStudent();
    cout << foundStudent.name << endl;
}

void ex8()
{
    std::pair<bool, Student> query_result;
    query_result.first = true;
    query_result.second = { 101, "Ethan", "CA", 30 };
    cout << query_result.second.name << endl;
}

void ex9()
{
    std::pair<bool, Student> query_result;
    query_result = std::make_pair<bool, Student>(true, { 101, "Ethan", "CA", 30 });
    cout << query_result.second.name << endl;
}

void ex10()
{
    std::tuple<string, int, int> foo("Ethan", 20, 30);
    auto a = std::get<0>(foo);
    auto b = std::get<1>(foo);
    auto c = std::get<2>(foo);
}

std::pair<bool, std::pair<double, double>> quadratic(int a, int b, int c)
{
    double inside = b * b - 4 * a*c;
    std::pair<double, double> blank;
    if (inside < 0) return std::make_pair(false, blank);

    auto answer = std::make_pair(
        (-b + sqrt(inside)) / 2,
        (-b - sqrt(inside)) / 2);

    return std::make_pair(true, answer);
}

void ex11()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    auto result = quadratic(a, b, c);
    if (result.first) {
        auto solutions = result.second;
        cout << solutions.first << solutions.second << endl;
    }
    else {
        cout << "No solution found!" << endl;
    }
}

void ex12()
{
    auto a = 3;
    auto b = 4.3;
    auto c = 'X';
    auto d = "Hello";
    auto e = std::make_pair(3, 3);
}

void ex13()
{
    cout << 5 << endl;

    ofstream out("out.txt", ofstream::out);
    out << 5 << endl;
}

void ex14()
{
    int x, z; 
    string y;
    // cin >> x >> y >> z;

    ifstream in("out.txt", ifstream::in);
    in >> x >> y >> z;
}

void ex15()
{
    vector<int> vec{ 5, 6 };
    vec[1] = 99;
    // vec[2] = 4;
    cout << vec[0] << endl;
    vec.insert(vec.begin() + 1, 88);
    vec.insert(vec.end(), 100);
    vec.erase(vec.begin() + 1);

    vector<int> c(vec.begin(), vec.begin() + 2);
}

void ex16()
{
    deque<int> deq{ 5, 6 };     // {5, 6}
    deq.push_front(3);          // {3, 5, 6}
    deq.pop_back();             // {3, 5}
    deq[1] = -2;                // {3, -2}
}

void ex17()
{
    list<int> list{ 5, 6 };     // {5, 6}
    list.push_front(3);         // {3, 5, 6}
    list.pop_back();            // {3, 5}
}


int main()
{
    // ex3();
    // ex1();
    // ex2();
    // ex4();

    //std::cout << foo(1) << std::endl;
    //std::cout << foo(2.0) << std::endl;
    //ex5();
    //ex6();
    //ex7();
    //ex8();
    //ex9();
    //ex10();
    //ex11();
    //ex12();
    //ex13();
    //ex14();
    //ex15();
    //ex16();
    ex17();
}

