#include<iostream>
#include "Patient.h"

int main() {

	//crating the objects with constructor parameters
	Patient p1(1001, "Nimal", 1500, 1500);
	Patient p2(1001, "Nimal", 1500, 1500);

	//calling functions inside the objects
	p1.displayPatientDetails();
	cout << endl;
	p2.displayPatientDetails();

	return 0;
}