#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	float mark[] = { 78.4,90.6,45.9,72.2,54.4 };

	//have to consider about the 
	char names [] [20] = { "ajith","wimal","kanthi","suranji","kushmitha" };

	cout << setw(5) << "no" << setw(15) << "Name" << setw(10) << "Marks"  << endl;

	for (int r = 0; r < 5; r++) {

		cout << setw(5) << r + 1
			<< setw(15) << names[r]
			<< setw(10) << mark[r] <<setprecision(4) << endl;
	}
	return 0;
}