#include<iostream>
using namespace std;

int main() {
	
	//variable declearation
	int num, i;

	cout << "enter Number :";
	cin >> num;// works same as the scanf in c


	for (i = 1; i <= 10; i++) {

		//this line is formated the answer to be output as 2 x 2 = 4
		cout << num << " x " << i << " = " << num * i << endl;
	}

	return 0;


}