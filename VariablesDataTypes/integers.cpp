#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    // Variable may contain random garbage value. Warning!
    int elephant_count;

    // BRACED INITIALIZATION
    cout << "===============================" << endl;
    cout << "==== BRACED INITIALIZATION ====" << endl;
    cout << "===============================" << endl;
    int lion_count {}; //Initializes to zero
    int dog_count {10};  //Initializes to 10
    int cat_count {15}; // Initializes to 15

    //Can use expression as initializer
    int domesticated_animals {dog_count + cat_count};

    cout << "Elephant count: " << elephant_count << endl;
    cout << "Lion count: " << lion_count << endl;
    cout << "Dog count: " << dog_count << endl;
    cout << "Cat count: " << cat_count << endl;
    cout << "Domesticated animal count: " << domesticated_animals << endl;

    // FUNCTIONAL INITIALIZATION
    cout << "\n===================================" << endl;
    cout << "==== FUNCTIONAL INITIALIZATION ====" << endl;
    cout << "===================================" << endl;
    int apple_count(5);
    int orange_count(10);
    int fruit_count (apple_count + orange_count);

    cout << "Apple count: " << apple_count << endl;
    cout << "Orange count: " << orange_count << endl;
    cout << "Fruit count: " << fruit_count << endl;

    // ASSIGNMENT INITIALIZATION
    cout << "\n===================================" << endl;
    cout << "==== ASSIGNMENT INITIALIZATION ====" << endl;
    cout << "===================================" << endl;

    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;

    cout << "Bike count: " << bike_count << endl;
    cout << "Truck count: " << truck_count << endl;
    cout << "Vehicle count: " << vehicle_count << endl;

    // Check the size with sizeof
    cout << "===================================" << endl;
    cout << "========= CHECK THE SIZE ==========" << endl;
    cout << "===================================" << endl;

    cout << "sizeof int: " << sizeof(int) << endl;
    cout << "sizeof truck_count: " << sizeof(truck_count) << endl;

    return 0;
}
