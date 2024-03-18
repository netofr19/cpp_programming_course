#include <iostream>

using namespace std;

int main()
{
    
    //Case 1: Uninitialized pointer
    int *p_number; // Dangling uninitialized pointer

    cout << "------------------------------------" << endl;
    cout << "Case 1-> Uninitialized ponter: " << endl;
    cout << "p_number: " << p_number << endl;
    // cout << "p_number: " << *p_number << endl; //CRASH!

    //Case 2: deleted pointer
    cout << "------------------------------------" << endl;
    cout << "Case 2-> Deleted pointer: " << endl;
    int *p_number1 {new int{67}};

    cout << "*p_number1 (before delete): " << *p_number1 << endl;

    delete p_number1;
    
    cout << "*p_number1 (after delete): " << *p_number1 << endl;

    //Case 3: Multiple pointers pointing to same address
    cout << "------------------------------------" << endl;
    cout << "Case 3-> Multiple pointers pointing to same address: " << endl;

    int *p_number2 {new int {83}};
    int *p_number3 {p_number2};

    cout << "p_number2 - " << p_number2 << " - " << *p_number2 << endl;
    cout << "p_number3 - " << p_number3 << " - " << *p_number3 << endl;

    //Deleting p_number2
    delete p_number2;

    cout << "p_number3(after deleting p_number2) - " << p_number3 << " - " << *p_number3 << endl;

    cout << "Program is ending well!" << endl;



    return 0;
}
