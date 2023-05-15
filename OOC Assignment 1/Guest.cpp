#include<iostream>
using namespace std;

class Guest{

    int guestId;
    string guestName;
    float ratePerDay;
    int numberOfDays;


    public:
    void setGuestDetails();
    void displayguestDetails();
    float calculateGuestBill();
    Guest(int id, string name, float rateperday, int numofdays);
};


Guest::Guest(int id, string name, float rateperday, int numofdays){

guestId = id;
guestName = name;
ratePerDay = rateperday;
numberOfDays = numofdays;
}

void Guest::displayguestDetails(){

    cout << "Guest Id: " << guestId << endl;
    cout << "Guest Name " << guestName << endl;
    cout << "Bill Amount "<<calculateGuestBill()<<endl;
}

float Guest::calculateGuestBill(){

    return ratePerDay*numberOfDays;
}





int main()
{

    Guest g1(1212,"jared",4500,4);
    Guest g2(1122,"Ben",3000,3);
    Guest g3(1212,"Ruby",5760,2);


    g1.displayguestDetails();
    g2.displayguestDetails();
    g3.displayguestDetails();

    return 0;
}