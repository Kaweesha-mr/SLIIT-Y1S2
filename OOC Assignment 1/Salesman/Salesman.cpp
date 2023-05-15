//including the header file 
#include "Salesman.h"


//define the public functions 
Salesman::Salesman(int id, string name, float salary, int pnum) {
	salesmanID = id;
	salesmanName = name;
	Salary = salary;
	contactNo = pnum;
}

void Salesman::setSalesmanContactNo() {

	cout << "Input new contact Number of salesman " << salesmanID << " =" << endl;
	cin >> contactNo;
}

void Salesman::setSalesmanDetails(int id, string name, float salary, int pnum) {
	salesmanID = id;
	salesmanName = name;
	Salary = salary;
	contactNo = pnum;
}

void Salesman::displaySalesmanDetails() {

	cout << "SalesmanId = " << salesmanID << endl;
	cout << "salesmanName = " << salesmanName << endl;
	cout << "salary = " << Salary << endl;
	cout << "ContactNo = " << contactNo << endl;
}