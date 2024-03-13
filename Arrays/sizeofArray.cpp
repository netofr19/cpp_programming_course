#include <iostream>

using namespace std;

int main()
{
    int scores[] {1,2,3,4,5,6,7,8,9,10};

    int count {size(scores)};

    for(int i=0; i<count; i++){
        cout<< "scores [" << i << "]: " <<scores[i]<<endl;
    }

    cout << "\n---------------------------------------\n" << endl;
    cout << "sizeof(scores): " << sizeof(scores) << endl;
    cout << "sizeof(scores[0]): " << sizeof(scores[0]) << endl;

    return 0;
}
