#include <iostream>

using namespace std;

int main()
{

    int number {22}; //Stack

    int *pt_number = &number;

    //Dynamic heap memory
    int *p_number2 {nullptr};
    p_number2 = new int; // Dynamically allocate space for a single int on the head. This memory belongs to our program from now on. The system can't use it for anything else, until we return it. After this line executes, we will have a valid memory location allocated. The size of the allocated memory will be such that it can store the type pointed to by the pointer.

    *p_number2 = 77; // Writting into dynamically allocated memory

    cout << "----------------------" << endl;
    cout << "Dynamically allocating memory: " << p_number2 << endl;
    cout << "Value of the pointer: " << *p_number2 << endl;

    //Return memory to the OS
    delete p_number2;

    cout << "----------------------" << endl;

    int *p_number3 {new int};
    int *p_number4 {new int (22)};
    int *p_number5 {new int {23}};

    cout << "Initialize with valid memory address at declaration: " << endl;
    cout << "p_number3: " << p_number3 << endl;
    cout << "*p_number3: " << *p_number3 << "\n" << endl; //Junk value
    
    cout << "p_number4: " << p_number4 << endl;
    cout << "*p_number4: " << *p_number4 << "\n" << endl;

    cout << "p_number5: " << p_number5 << endl;
    cout << "*p_number5: " << *p_number5 << "\n" << endl;

    //Remenber to release the memory
    delete p_number3;
    p_number3 = nullptr;

    delete p_number4;
    p_number4 = nullptr;

    delete p_number5;
    p_number5 = nullptr;

    // Can reuse pointers
    cout << "----------------------" << endl;
    p_number5 = new int(81);
    cout << "p_number5: " << p_number5 << endl;
    cout << "*p_pointer5: " <<*p_number5 <<endl;

    delete p_number5;
    p_number5 = nullptr;


    
    return 0;
}
