#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Declare and initialize the variables
    float number1 {1.123456789012345678f};
    double number2 {1.123456789012345678};
    long double number3 {1.123456789012345678L};

    //Print out the sizes

    cout << "sizeof float: " << sizeof(float) << endl; // Precision: 7
    cout << "sizeof double: " << sizeof(double) << endl; // Precision: 15
    cout << "sizeof long double: " << sizeof (long double) << endl; // Precision: 15+ digits

    // Precision
    cout << setprecision(10); // Control the precision from cout.
    cout << "number1 is: " << number1 << endl;
    cout << "number2 is: " << number2 << endl;
    cout << "number3 is: " << number3 << endl;


    return 0;
}
