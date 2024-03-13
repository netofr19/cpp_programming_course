#include <iostream>

using namespace std;

int main() {

  //Declaring an array of ints
  int scores[10];

  //Read data
  // cout<<"scores[0]: " << scores[0] << endl;
  // cout<<"scores[1]: " << scores[1] << endl;
  // cout<<"scores[2]: " << scores[2] << endl;

  //Write data into an array
  // scores[0] = 20;
  // scores[1] = 21;
  // scores[2] = 22;

  for(int i=0; i<10; i++){
    scores[i] = i*10;
  }

  // Read data with a loop
  for(size_t i {0}; i < 10; i++){
    cout<<"scores[" << i <<"]: " <<scores[i]<<endl;
  }

  cout<<"\n===================================================="<<endl;
  cout<<"===== Declare and initialize at the same time ======"<<endl;
  cout<<"====================================================\n"<<endl;

  double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};

  for (size_t i{0}; i<5; i++){
    cout<<"Salary [" << i << "]: " <<salaries[i]<<endl;
  }

  cout<<"\n======================================================"<<endl;
  cout<<"===== Omit the size of the array at declaration ======"<<endl;
  cout<<"======================================================\n"<<endl;

  int class_sizes[] {10, 12, 15, 11, 18, 17, 23};

  for(auto value: class_sizes){
    cout << "value: " << value << endl;
  }



  return 0;
}
