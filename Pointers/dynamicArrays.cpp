#include <iostream>

using namespace std;

int main()
{
    size_t size {10};

    //Different ways you can declare an array
    //Dynamically and how they are initialized

    double *p_salaries {new double[size]}; // Salaries array will contain garbage values

    int *p_students {new(nothrow) int [size]{}}; // All values initialized to 0

    double *p_scores {new(nothrow) double[size]{1,2,3,4,5}}; //Allocating memory space for an array of size double vars. First 5 will be initialized with 1,2,3,4,5 and the rest will be 0's

    //nullptr check and use the allocated array
    if(p_scores){
        cout<< "size of scores (it's a regular pointer): " << sizeof(p_scores) << endl;
        cout << "Successfully allocated memory for scores." << endl;

        //Print out elements. Can use regular array acess notation, or point arithmetic
        for (size_t i{0}; i<size; i++){
            cout << "value: " << p_scores[i] << " : " << *(p_scores+i) << endl;
        }
    }

    delete []p_salaries;
    p_salaries = nullptr;

    delete []p_scores;
    p_scores = nullptr;

    delete []p_students;
    p_students = nullptr;

    //Static array vs dynamic arrays
    cout << "\n========================================\n" << endl;

    int scores [10] {1,2,3,4,5,6,7,8,9,10};

    cout << "scores size: " << std::size(scores) << endl;
    for (auto s: scores){
        cout << "value: " << s << endl;
    }

    int *p_scores1 = new int [10] {1,2,3,4,5,6,7,8,9,10}; //Lives on the heap
    
    return 0;
}
