#include<iostream>

using namespace std;

long Factorial(int no);
long nCr(int n, int r);

int main() {

	int n, r;

	cout << "Enter a value for n ";
	cin >> n;

	cout << "Enter a value for r ";
	cin >> r;

	cout << "nCr = " << nCr(n, r) << endl;

}

long Factorial(int no) {

	long fac = no;
	for (int r = no; r >= 1; r--) {
		fac = fac * r;
	}
	return (long)fac;


}
long nCr(int n, int r) {

	n = (long)Factorial(n);
	r = (long)Factorial(r);
	int x = (long)Factorial(n - r);

	if ((n / r * x) == 0) {

		return 1;
	}
	else {
		return n / r * x;
	}
	
	 
}
