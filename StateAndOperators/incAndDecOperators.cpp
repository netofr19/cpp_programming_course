// Section 8

/*
Increment operator ++;
Decrement operator --;

Prefix ++num;
Postfix num++;
*/

#include <iostream>

using namespace std;

int main()
{
    
    int counter {10};
    int result {0};

    // Example 01 - simple increment
    cout << "Counter: " << counter << endl;

    counter++;
    cout << "Counter: " << counter << endl;

    ++counter;
    cout << "Counter: " << counter << endl;

    cout << endl;

    // Example 02 - Preincrement
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = ++counter; //Note the preincrement
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    cout << endl;

    // Example 03 - Post-increment
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = counter++;

    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    cout << endl;

    // Example 04
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = ++counter + 10;

    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    cout << endl;

    

    return 0;
}
