#include "Student.h"
#include <iostream>


using namespace std;


int main() {


	//creating the objects with parameters for constructor
	Student s1(1234, "kamal", 85, 80, 75);
	Student s2(4567, "saman", 65, 60, 45);
	Student s3(1234, "nimal", 98, 75, 80);
	Student s4(1234, "Sunil", 35, 60, 40);


	//calculaing and printing the average
	s1.displayStudent();
	s2.displayStudent();
	s3.displayStudent();
	s4.displayStudent();





	return 0;
}