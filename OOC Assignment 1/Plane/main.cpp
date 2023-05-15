#include<iostream>
#include "Plane.h"


using namespace std;


int main() {

	Plane p1(1, "jhon", "USA");
	Plane p2(1, "George", "UK");
	Plane p3(3, "Henry", "USA");
	Plane p4(4, "Ronald", "UAE");

	p1.setPlaneDetails();
	p2.setPlaneDetails();
	p3.setPlaneDetails();
	p4.setPlaneDetails();


	p1.displayPlaneDetails();
	p2.displayPlaneDetails();
	p3.displayPlaneDetails();
	p4.displayPlaneDetails();

	return 0;
}