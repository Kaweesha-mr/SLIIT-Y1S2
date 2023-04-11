#include<iostream>
#include<iomanip>
using namespace std;
//function with referance variables
void findMarks(int t_marks1, int t_marks2, float& t_CA1, float& t_CA2);
int main() {

	float CA1, CA2,marks1[5], marks2[5];

	//getting 5 user inputs and stores them inside arrays
	for (int i = 0; i < 5; i++) {
		cout << "Enter mark for assigmnet 1 :";
		cin >> marks1[i];

		cout << "Enter mark for assigmnet 2 :";
		cin >> marks2[i];
	}


	//printing the array
	cout << "student" << setw(10) << "Mark1" << setw(10) << "Mark2" << setw(10) << "CA_1" << setw(10) << "CA_2" << endl;

	//loop to calculate and print the values
	for (int j = 0; j < 5; j++) {

		findMarks(marks1[j], marks2[j], CA1, CA2);
		cout << setw(10) << j + 1 << setw(10) << marks1[j] << setw(10) << setprecision(4) << CA1 << setw(10) << setprecision(4) << CA2 << endl;
	}

	return 0;
}

void findMarks(int t_marks1, int t_marks2, float& t_CA1, float& t_CA2) {

	t_CA1 = t_marks1 * 0.2;
	t_CA2 = t_marks2 * 0.3;
}