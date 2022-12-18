#include "ch07.h"

word::word(char const* srcp, int l, int spaces)
{

}

shared_ptr<char[]> func(shared_ptr<char[]> str)
{
    if (!str) {
        str.reset(new char[1]);
        str[0] = '\0';
    }

    return str;
}

int ch07_exercise_56()
{
    shared_ptr<char[]> null;
    if (null.get() == nullptr)
        cout << "null is equal to nullptr" << endl;
    auto result1 = func(null);
    if (result1.get() == nullptr)
        cout << "result is equal to nullptr" << endl;
    result1 = func(result1);

    return 0;
}

int ch07_exercise_57()
{
    shared_ptr<noisy> u1(new noisy);
    shared_ptr<noisy> u2 = make_shared<noisy>();
    shared_ptr<noisy> u3 = u2;
    u2.reset();
    return 0;
}


char const* book[] = {
    "What a piece of work is man, ",
    "   How noble in reason, how infinite in faculty,",
    "In form and moving how express and admirable, ",
    "   In action how like an Angel, In apprehension how like a god.",
    "The beauty of the world.  The paragon of animals.",
};

int ch07_activity_7()
{
    return 0;
}