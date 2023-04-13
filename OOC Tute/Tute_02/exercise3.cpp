#include<iostream>

using namespace std;

int mian() {

	int no;
	long fac;

	cout << "ENter Number : ";
	cin >> no;

	fac = 1;
	for (int r = no; r >= 1; r--) {

		fac = fac * r;
	}

	cout << "factorial of " << no << "is" << fac;


	return
}