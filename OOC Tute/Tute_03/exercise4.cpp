#include <iostream>

using namespace std;

void print(int len, int wth);
void input(int& length, int& width);
// Do not change the main() function

int main() {
	int length = 10, width = 5;

	input(length, width);
	print(length, width);
	
	return 0;
}

void input(int& length, int& width) {

	cout << "Enter Length : ";
	cin >> length;

	cout << "Enter width : ";
	cin >> width;
}
// Do not change the print() function
void print(int len, int wth) {
	cout << "Length : " << len
		<< ", Width : " << wth << endl;
}
