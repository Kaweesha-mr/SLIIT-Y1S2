#include <iostream>

using namespace std;


//creating the class file 
class Lab {

    int labID;
    int capacity;
public:

    //decleare the functions
    void setLabDetails(int Id, int Capacity);
    int getCapacity();
    Lab(int Id, int capacity);
};
