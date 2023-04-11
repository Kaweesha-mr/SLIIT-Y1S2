#include<iostream>
using namespace std;

//function decleare
int square(int x);
int cube(int x);

int main() {

	//variable decleare
	int number;

	//getting user inputs
	cout << "Enter Value :";
	cin >> number;

	//printing the outputs
	cout << "Square of " << number << ":" << square(number) << endl;
	cout << "Cube of " << number << ":" << cube(number) << endl;

}

//function intialization
int square(int x) {

	return x * x;
}

//function intialization
int cube(int x) {

	return x * x * x;
}