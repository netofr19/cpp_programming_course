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

    
    return 0;
}
