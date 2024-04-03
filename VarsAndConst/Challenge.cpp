// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "========= Hello, welcome to Frank's Carpet Cleaning Service! =========" << endl;
    cout << "How many small rooms would you like cleaned? ";
    int small_rooms {0};
    cin >> small_rooms;

    cout << "How many large rooms would you like cleaned? ";
    int large_rooms {0};
    cin >> large_rooms;

    const double charge_small_room {25};
    const double charge_large_room {35};
    const double tax_rate {0.06};
    const int estimate_expiry {30};

    double cost_cleaning = (small_rooms*charge_small_room) + (large_rooms*charge_large_room);

    double total_tax = cost_cleaning * tax_rate;

    double total_estimate = cost_cleaning + total_tax;

    cout << "\nEstimate for carpet cleaning service: " <<endl;

    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    cout << "Price per small room: $" << charge_small_room << endl;
    cout << "Price per large room: $" << charge_large_room << endl; 
    cout << "Cost: $" << cost_cleaning << endl;
    cout << "Tax: $" << total_tax << endl;
    cout << "========================================" << endl;
    cout << "Total Estimate: $" << total_estimate << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days";
    
    return 0;
}
