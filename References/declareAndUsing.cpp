#include <iostream>

using namespace std;

int main()
{

   int int_value {45};
   double double_value {33.65};

    //References
   int &ref_int_value {int_value};
   double &ref_double_value {double_value};

    // Print out
    cout << "int_value: " << int_value << endl;
    cout << "&int_value: " << &int_value << endl;
    cout << "double_value: " << double_value << endl;
    cout << "&double_value: " << &double_value << endl;

    cout << "========================================================" << endl;

    cout << "ref_int_value: " << ref_int_value << endl;
    cout << "&ref_int_value: " << &ref_int_value << endl;
    cout << "ref_double_value: " << ref_double_value << endl;
    cout << "&ref_double_value: " << &ref_double_value << endl;

    int_value = 111;
    double_value = 67.2;

    cout << endl;

    cout << "int_value: " << int_value << endl;
    cout << "&int_value: " << &int_value << endl;
    cout << "double_value: " << double_value << endl;
    cout << "&double_value: " << &double_value << endl;

    cout << "========================================================" << endl;

    cout << "ref_int_value: " << ref_int_value << endl;
    cout << "&ref_int_value: " << &ref_int_value << endl;
    cout << "ref_double_value: " << ref_double_value << endl;
    cout << "&ref_double_value: " << &ref_double_value << endl;

    ref_int_value = 555;
    ref_double_value = 1000.45;

    cout << endl;

    cout << "int_value: " << int_value << endl;
    cout << "&int_value: " << &int_value << endl;
    cout << "double_value: " << double_value << endl;
    cout << "&double_value: " << &double_value << endl;

    cout << "========================================================" << endl;

    cout << "ref_int_value: " << ref_int_value << endl;
    cout << "&ref_int_value: " << &ref_int_value << endl;
    cout << "ref_double_value: " << ref_double_value << endl;
    cout << "&ref_double_value: " << &ref_double_value << endl;

   return 0;
}
