#include<iostream>
#include<iomanip>
using namespace std;

//decleare the functions 
float areaCircle(float radius);
float areaRectangle(float length, float width);
float areaSquare(float length);
void calculateThePerimeter(float length, float width, float &perimeter);

//creating the structures
struct circle {

	float radius;
};

struct rectangle {

	float length;
	float width;
};

struct square {

	float length;
};

int main() {
	
	float perimeter,cost;
	//defining structure varibales
	circle circle1;
	rectangle rectangle,rectangle2;
	square square;

	//getting user inputs
	cout << "Enter Radius of Circle : ";
	cin >> circle1.radius;

	cout << "Enter rectangle length : ";
	cin >> rectangle.length;

	cout << "Enter rectangle wdith : ";
	cin >> rectangle.width;

	cout << "Enter square length : ";
	cin >> square.length;

	//calling the functions and printing the outputs
	cout << "Area of the Circle : " <<setprecision(3)  << areaCircle(circle1.radius) << endl;
	cout << "Area of the Rectangle : "<< setprecision(3) << areaRectangle(rectangle.length, rectangle.width) << endl;
	cout << "Area of the Circle : " << setprecision(3) <<  areaSquare(square.length) << endl;


	cout << "Enter rectangle length : ";
	cin >> rectangle2.length;

	cout << "Enter rectangle wdith : ";
	cin >> rectangle2.width;

	//calling the function and getting the perimeter value
	calculateThePerimeter(rectangle2.length, rectangle2.width,perimeter);

	//perimeter quections
	cout << "perimeter of the Land area : " << perimeter << endl;

	cout << "Enter the cost for meter to build fence : ";
	cin >> cost;

	cout << "Total Cost for the Fence is : " << cost * perimeter<<endl;

}


//decleare the functionality of the functions
float areaCircle(float radius) {
	
	const float pi = 3.14;

	return pi * radius * radius;

}
float areaRectangle(float length, float width) {

	return length * width;
}
float areaSquare(float length) {

	return length * length;
}

//perimter is working as a referance variable 
void calculateThePerimeter(float length, float width,float &perimeter) {

	perimeter = length * 2 + width * 2;

}