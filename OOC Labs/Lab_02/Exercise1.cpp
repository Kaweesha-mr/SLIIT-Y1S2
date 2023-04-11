#include<iostream>
using namespace std;


//function decleare same as the in c programes
int searchKey(int x,int numbers2[10]);
int findmax(int numbers3[30]);

int main() {
	
	//variable decleare
	int numbers[10],num,index;

	//loop to enter values to array
	for (int i = 0; i < 10; i++) {
		cout << "Enter num  " << i+1<<" : ";
		cin >> numbers[i];
	}


	//getting user input
	cout << "Enter value to be searched on the list :";
	cin >> num;

	//calling the function and stores the return value inside a index varible
	index = searchKey(num,numbers);

	//check the condition for the return values of the function to decide wheather number is on the list or not
	if (index == -1) {

		cout << "not found in the list"<<endl;
	}
	else {

		cout << "Index is :" << index<<endl;
	}

	cout << "Maximum Number in the list :" << findmax(numbers)<< endl;
}

int searchKey(int x, int numbers2[10]) {
		
	//checking if the value is in the list
	for (int j = 0; j < 10; j++) {

		if (numbers2[j] == x) {

			return j;
		}
	}
	return -1;

}

int findmax(int numbers3[30]) {

	//getting the maximum number
	int max = numbers3[0];

	for (int i = 0; i < 10; i++) {

		if (max < numbers3[i]) {

			max = numbers3[i];
		}

	}
	return max;

}