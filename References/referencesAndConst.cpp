#include <iostream>

using namespace std;

int main()
{
    // Non const reference
    cout << endl;
    cout << "No const reference: " << endl;
    int age {27};
    int &ref_age {age};

    cout << "age: " << age << endl;
    cout << "ref_age: " << ref_age << endl;

    //Can modify original variable through reference
    cout << endl;
    cout << "Modify original variable through reference: " << endl;

    ref_age++; //Modify through reference

    cout << "age: " << age << endl;
    cout << "ref_age: " << ref_age << endl;
    
    return 0;
}
