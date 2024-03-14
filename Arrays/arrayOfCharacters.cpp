#include <iostream>

using namespace std;

int main()
{
    
    //Declare array
    char message [5] = {'H', 'e', 'l', 'l', 'o'};

    //Print out the array through looping
    cout << "message: ";
    for (auto c: message){
        cout << c;
    }
    cout << endl;

    //Change characters in out array
    message[1] = 'a';

    //Print out the array through looping
    cout << "message: ";
    for (auto c: message){
        cout << c;
    }
    cout << endl;

    cout << "\n----------------------------------------\n" << endl;

    cout << "message: " << message << endl;

    //If a character array is null terminated, it's called as C-string
    char message1[] {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << "message1: " << message1 << endl;

    char message2[6] {'H', 'e', 'l', 'l', 'o'};
    cout << "message2: " << message2 << endl;

    char message3[] {'H', 'e', 'l', 'l', 'o'}; // It's wrong!
    cout << "message3: " << message3 << endl;

    cout << "\n----------------------------------------\n" << endl;

    // String literals
    char message4[] {"Hello World"};
    cout << "message4: " << message4 << endl;

    int numbers[] {1,2,3,4,5};
    cout << "numbers: " << numbers << endl;

    return 0;
}
