//calling the header file
#include "Lab.h"


//defining the constructor
Lab::Lab(int Id, int Capacity) {

    labID = Id;
    capacity = Capacity;
}
//defining the functions of the header file
int Lab::getCapacity() {


    return capacity;
}

void Lab::setLabDetails(int Id, int Capacity) {

    labID = Id;
    capacity = Capacity;
}