// Primitive Types

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Character type
    char middle_initial {'P'}; //Notice the single quotes arount characters
    cout << "My middle initial is: " << middle_initial << endl;

    // Integer types
    unsigned short int exam_score {55}; // same as unsigned short exam_score {55};
    cout << "My exam score was: " << exam_score << endl;

    int countries_represented {65};
    cout << "There were " << countries_represented << " countries represented in my meeting" << endl;

    long people_in_florida {20610000};
    cout << "There are about " << people_in_florida << " people in florida" << endl;

    long people_in_earth {7'600'000'000};
    cout << "There are about " << people_in_earth << " people in earth" << endl;

    long long distance_to_alpha_centauri {9'461'000'000'000};
    cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers" << endl;

    // Floating point types

    float car_payment {401.23};
    cout << "My car payment is " << car_payment << endl;

    double pi {3.14159};
    cout << "PI is " << pi << endl;

    long double large_amount {2.7e120};
    cout << large_amount <<" is a very big number" << endl;

    // Boolean type

    bool game_over {false};
    cout << "The value of gameOver is " << game_over << endl;

    //Overflow example

    short value1 {30000};
    short value2 {1000};
    short product = value1 * value2; //Overflow

    cout << "The multiplication of " << value1  << " and " << value2 << " is " << product << endl;

    return 0;
}
