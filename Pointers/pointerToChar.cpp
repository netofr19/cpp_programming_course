#include <iostream>

using namespace std;

int main()
{
    char *message {"Hello World!"};

    cout << "message: " << message << endl;
    cout << "message: " << *message << endl;

    //Allow users to modify the string
    char message1[] {"Hello World!"};
    message1[0] = 'B';
    cout<< "message1: " << message1 << endl;
    
    return 0;
}
