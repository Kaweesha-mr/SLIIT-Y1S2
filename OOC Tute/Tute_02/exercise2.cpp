#include<iostream>

using namespace std;

int main() {


	double salary, netSalary;
	int etype, otHrs, otRate;

	cout << "Enter Employee type : ";
	cin >> etype;

	cout << "Enter Salary : ";
	cin >> salary;

	cout << "Enter otHrs";
	cin >> otHrs;

	switch (etype)
	{
	case 1: {
		otRate = 1000;
		break;
	}
	case 2: {
		otRate = 1500;
		break;
	}
	default:
		otRate = 1700;
		break;
	}

	netSalary = salary + otHrs * otRate;
	cout << "Net Salary is " << netSalary;


	return 0;
}