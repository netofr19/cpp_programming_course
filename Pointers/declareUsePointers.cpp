#include <iostream>

using namespace std;

int main()
{
    //Declaring and initialize pointer
    int *p_number {}; // can only store an address of a variable of type int
    double *p_frac_number {};

    //Explicitly initialize with nullptr
    int *p_number1 {nullptr};
    int *p_frac_number1 {nullptr};

    //Pointers to different variables are of the same size
    std::cout << "sizeof(int) : " << sizeof(int) << std::endl; // 4
    std::cout << "sizeof(double) : " << sizeof(double) << std::endl; // 8
    std::cout << "sizeof(double*) : " << sizeof(double*) << std::endl;
    std::cout << "sizeof(int*) : " << sizeof(int*) << std::endl;
    std::cout << "sizeof(p_number1) : " << sizeof(p_number1) << std::endl;
    std::cout << "sizeof(p_fractional_number1) : " << sizeof(p_frac_number1) << std::endl;

    // It doesn't matter if you put the * close to data type or to variable name
    int* p_number2 {nullptr};
    int * p_number3 {nullptr};
    int  *p_number4 {nullptr};

    //Initializing and assigning them data
    //We know that pointers store addresses of variables
    int int_var {43};
    int *p_int{&int_var};

    cout << "Int var: " << int_var << endl;
    cout << "p_int (Adress in memory): " << p_int << endl;

    //You can also change the address stored in a pointer any time
    int int_var1 {65};
    p_int = &int_var1; // Assign a different address to the pointer
    cout << "p_int (with different address): " << p_int << endl;

    //Dereferencing a pointer
    int *p_int2 {nullptr};
    int int_data {56};
    p_int2 = &int_data;

    cout << "value: " << *p_int2 << endl; // Dereferencing a pointer

    

    
    return 0;
}
