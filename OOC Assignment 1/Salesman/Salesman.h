#include<iostream>
using namespace std;



//creating the class
class Salesman
{

	int salesmanID;
	string salesmanName;
	float Salary;
	int contactNo;


public:

	//declearing the public functions
	void setSalesmanDetails(int id, string name, float salary, int pnum);
	void displaySalesmanDetails();
	void setSalesmanContactNo();

	//construcor define
	Salesman(int id, string name, float salary, int pnum);
};