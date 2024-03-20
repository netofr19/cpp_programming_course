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

    //Solution1: Initialize your pointers immediately upon declaration
    cout << "\n------------------------------------" << endl;
    cout << "Solution 1-> Initialize your pointers immediately upon declaration " << endl;

    int *p_number4{nullptr};
    int *p_number5 {new int{56}};

    //Check for nullptr before use
    if(p_number5!=nullptr){
        cout << "p_number5: " << *p_number5 << endl;
    }
    else {
        cout << "Invalid address" << endl;
    }

    // Solution2: Right after you call delete on a pointer, remenber to reset the pointer to nullptr to make it CLEAR it doesn't point anywhere

    cout << "\n------------------------------------" << endl;
    cout << "Solution 2-> Right after you call delete on a pointer, remenber to reset the pointer to nullptr" << endl;

    int *p_number6 {new int {82}};

    //Use the pointer however you want
    cout << "p_number6: " << p_number6 <<" - " << *p_number6 << endl;

    delete p_number6;
    p_number6 = nullptr; // Reset the pointer

    //Check for nullptr befose use
    if (p_number6 != nullptr){
        cout << "p_number6: " << p_number6 << " - " << *p_number6 << endl;
    }
    else {
        cout << "Invalid memory access!" << endl;
    }

    //Solution3: For multiple pointers pointing to the same address, make sure there is one clear pointer (master pointer) that owns the memory (responsible for releasing when necessary), other pointers should only be able to dereference when the master pointer is valid

    cout << "\n------------------------------------" << endl;
    cout << "Solution 3-> For multiple pointers pointing to the same address, make sure there is one clear pointer (master pointer) that owns the memory" << endl;

    int *p_number7 {new int {382}}; // Let's say p_number7 is the master pointer
    int *p_number8 {p_number7};

    //Dereference the pointers and use them
    cout << "p_number7: " << p_number7 << " - " << *p_number7 << endl;

    if (!(p_number7 == nullptr)){
        cout << "p_number8: " << p_number8 << " - " << *p_number8 << endl;
    }

    delete p_number7; // Master releases the memory
    p_number7 = nullptr;

    if (!(p_number7 == nullptr)){ // Only use slave pointers when master pointer is valid
        cout << "p_number8: " << p_number8 << " - " << *p_number8 << endl;
    }
    else{
        cerr << "WARNING: Trying to use an invalid pointer" << endl;
    }


    cout << "\n------------------------------------" << endl;
    cout << "Program is ending well!" << endl;


    return 0;
}
