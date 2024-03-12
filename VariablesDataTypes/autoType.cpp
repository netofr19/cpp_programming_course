#include <iostream>

using namespace std;

int main()
{
    auto var1 {12};
    auto var2 {13.0};
    auto var3 {14.0f};
    auto var4 {15.0l};
    auto var5 {'e'};

    //int modifier suffixes
    auto var6 {123u}; //unsigned
    auto var7 {123ul}; //unsigned long
    auto var8 {123ll}; //long long

    cout << "var1 ocupies: " <<sizeof(var1) << " bytes" << endl; 
    cout << "var2 ocupies: " <<sizeof(var2) << " bytes" << endl;
    cout << "var3 ocupies: " <<sizeof(var3) << " bytes" << endl;
    cout << "var4 ocupies: " <<sizeof(var4) << " bytes" << endl;
    cout << "var5 ocupies: " <<sizeof(var5) << " bytes" << endl;
    cout << "var6 ocupies: " <<sizeof(var6) << " bytes" << endl;
    cout << "var7 ocupies: " <<sizeof(var7) << " bytes" << endl;
    cout << "var8 ocupies: " <<sizeof(var8) << " bytes" << endl;
    
    return 0;
}
