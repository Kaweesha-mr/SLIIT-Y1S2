#include "Lab.h"
#include <iostream>

using namespace std;

int main() {


    //creating the objects including parameters to run the constructor
    Lab L1(401, 60);
    Lab L2(402, 40);
    Lab L3(403, 30);

    //tempory varibale to hold the value entered from the user
    int temp_capcity;

    cout << "Insert capacity : ";
    cin >> temp_capcity;


    //conditions
    if (temp_capcity <= L1.getCapacity()) {

        cout << "Lab 401";
    }
    else if (temp_capcity <= L2.getCapacity()) {

        cout << "Lab 402";
    }
    else if (temp_capcity <= L3.getCapacity()) {

        cout << "Lab 403";
    }


        return 0;
}