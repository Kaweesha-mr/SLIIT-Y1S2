#include <iostream>
//including the header file
#include"Salesman.h"
using namespace std;

int main() {


	//creating dynamic objects(Dynamic memeory allocations) including the public functions 
	Salesman* s1 = new Salesman(1, "jhon", 30000, 772358375);
	Salesman* s2 = new Salesman(2, "Ann", 40000, 773029452);


	//calling the class functions
	s1->setSalesmanContactNo();
	s2->setSalesmanContactNo();

	s1->displaySalesmanDetails();
	s2->displaySalesmanDetails();


	//releasing the memory's of dynamic objects
	delete s1, s2;

	return 0;
}