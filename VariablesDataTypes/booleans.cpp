#include <iostream>

using namespace std;

int main()
{
    bool red_light {true};
    bool green_light {false};

    if (red_light == true){
        cout<< "Stop!" <<endl;
    } else {
        cout << "Go through!" << endl;
    }

    if (green_light){
        cout << "The light is green!" << endl;
    } else {
        cout << "The light is not green!" << endl;
    }

    //Sizeof()
    cout << "sizeof(bool): " << sizeof(bool) << endl;

    //Printing out a bool
    //1 -> true
    //0 -> false
    cout << endl;
    cout << "red light: " << red_light << endl;
    cout << "green light: " << green_light << endl;

    return 0;
}
