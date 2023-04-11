#include<iostream>

using namespace std;

//function decleare
int area(int length, int width);

//structure decleare
struct Rectangle {

	//structure variables
	int length;
	int width;
};

int main() {

	//creating userdefine varibales from the struct
	Rectangle yard;
	Rectangle house;

	//required variables for the program
	int area1, area2;


	//getting the user inputs
	cout << "Enter yard length : ";
	cin >> yard.length;

	cout << "enter yard width : ";
	cin >> yard.width;

	cout << "Enter house length : ";
	cin >> house.length;

	cout << "enter house width : ";
	cin >> house.width;

	//calculating the areas using functions
	area1 = area(yard.length, yard.width);
	area2 = area(house.length, house.width);


	//printing the answers
	cout << "Lawn area : " << area1 - area2;


	return 0;
}

int area(int length, int width) {

	return length * width;
}