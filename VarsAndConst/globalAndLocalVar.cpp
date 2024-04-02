//Section 6
//Global and Local Variables

#include <iostream>

using namespace std;

int age {18}; // Global variable

int main(int argc, char const *argv[])
{
    int age {16}; // Local variable


    cout << age << endl;

    return 0;
}