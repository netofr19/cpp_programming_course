#include <iostream>

using namespace std;

int main()
{
    int var1 {123};
    cout << "var1: " << var1 << endl;

    var1 = 55; // Assign
    cout << "var1: " << var1 << endl;

    cout << "\n======================\n" << endl;

    double var2 {44.55};
    cout << "var2: " << var2 << endl;

    var2 = 99.99;
    cout << "var2: " << var2 << endl;

    cout << "\n======================\n" << endl;

    bool state {false};
    cout << boolalpha;
    cout << "state: " << state << endl;

    state = true;

    cout << "state: " << state << endl;

    return 0;
}
