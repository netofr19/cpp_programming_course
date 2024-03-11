#include <iostream>
#include <string>

using namespace std;

int main()
{

	printf("======================================\n");
	printf("========== Printing Data =============\n");
	printf("======================================\n");


	// Printing data
	cout << "Hello C++20!" <<endl;

	int age=21;
	cout << "Age: " << age << endl;

	cerr << "Error message: Something is wrong" << endl;
	clog << "Log message: Something happened" << endl;

	printf("======================================\n");
	printf("========== Getting Data ==============\n");
	printf("======================================\n");

	// Getting data
	int age1;
	string name;

	cout << "Please, type your name and age: " << endl;
	// cin >> name;
	// cin >> age1;
	cin >> name >> age1;

	cout << "Hello " << name << ", you are " << age1 << " years old!" << endl;

	printf("======================================\n");
	printf("========= Data with Spaces ===========\n");
	printf("======================================\n");

	string full_name;
	int age3;

	cout << "Please, type your age and full name: " << endl;

	cin >> age3;
	cin.ignore();
	getline(cin, full_name);
	

	cout << "Hello " << full_name << ", you are " << age3 << " years old!" << endl;


	return 0;


}