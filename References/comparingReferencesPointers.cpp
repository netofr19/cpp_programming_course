#include <iostream>

using namespace std;

int main()
{

    //Declare pointer and reference
    double double_value {12.34};
    double &ref_double_value {double_value}; //Reference to double_value
    double *p_double_value {&double_value}; //Pointer to double_value

    //Reading
    cout << "double_value: " << double_value << endl;
    cout << "ref_double_value: " << ref_double_value << endl;
    cout << "p_double_value: " << p_double_value << endl;
    cout << "*p_double_value: " << *p_double_value << endl;

    //Writting through pointer
    *p_double_value = 15.44;

    cout << endl;

    cout << "double_value: " << double_value << endl;
    cout << "ref_double_value: " << ref_double_value << endl;
    cout << "p_double_value: " << p_double_value << endl;
    cout << "*p_double_value: " << *p_double_value << endl;

    //Writting through reference
    ref_double_value = 18.44;

    cout << endl;

    cout << "double_value: " << double_value << endl;
    cout << "ref_double_value: " << ref_double_value << endl;
    cout << "p_double_value: " << p_double_value << endl;
    cout << "*p_double_value: " << *p_double_value << endl;

    double some_other_double{78.45};

    ref_double_value = some_other_double;

    cout << endl;
    cout << "Making the reference, reference something else..." << endl;
    cout << "double_value: " << double_value << endl;
    cout << "ref_double_value: " << ref_double_value << endl;
    cout << "p_double_value: " << p_double_value << endl;
    cout << "*p_double_value: " << *p_double_value << endl;

    p_double_value = &some_other_double;

    cout << endl;
    cout << "Making the pointer, point something else..." << endl;
    cout << "double_value: " << double_value << endl;
    cout << "ref_double_value: " << ref_double_value << endl;
    cout << "&double_value: " << &double_value << endl; 
    cout << "&ref_double_value: " << &ref_double_value << endl;
    cout << "p_double_value: " << p_double_value << endl;
    cout << "*p_double_value: " << *p_double_value << endl;

    *p_double_value = 555.45;

    cout << endl;
    cout << "Making the pointer, point something else..." << endl;
    cout << "double_value: " << double_value << endl;
    cout << "ref_double_value: " << ref_double_value << endl;
    cout << "&double_value: " << &double_value << endl; 
    cout << "&ref_double_value: " << &ref_double_value << endl;
    cout << "p_double_value: " << p_double_value << endl;
    cout << "*p_double_value: " << *p_double_value << endl;
    
    return 0;
}
