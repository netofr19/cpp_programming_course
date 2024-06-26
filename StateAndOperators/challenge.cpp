// Section 8 - Challenge

/*
For this program I will be using US dollars and cents.

Write a program that asks the user to enter the following:
An integer representing the number of cents

You may assume that the number of cents entered is greater than of equal to zero

The program should then display how to provide that change to the user.

In the US:
    1 dollar is 100 cents.
    1 quarter is 25 cents.
    1 dime is 10 cents.
    1 nickel is 5 cents, and
    1 penny is 1 cent.

Here is a sample fun:

Enter an amount in cents: 92

You can provide this change as follows:
dollars: 0
quarters: 3
dimes: 1
nickels: 1
pennis: 2

Feel free to use your own currency system.
Also, think of how you might solve the problem using the modulo operator
*/
#include <iostream>

using namespace std;


int main()
{
    int amount {0};
    cout << "Enter an amount in cents: ";
    cin >> amount;
    cout << endl;

    string currency[] = {"dollars", "quarters", "dimes", "nickels", "pennis"};

    int charges[5] {100, 25, 10, 5, 1};

    int rest {amount}, v {0};

    for (int i=0; i<((int)(sizeof(currency)/sizeof(currency[0]))); i++){
        v = rest / charges[i];
        rest = rest % charges[i];
        
        cout << currency[i] << ": " << v << endl;
    }

    cout << endl;

    return 0;
}
