#include<iostream>

using namespace std;

class Event{

    int eventID;
    string eventType;
    string themeColor;
    string location;

public:
    void setEventDetails();
    void displayEventDetails();
    void setEventLocation();
    Event(int id, string type, string color, string location);

};

Event::Event(int id, string type, string color, string location){

    eventID = id;
    eventType = type;
    themeColor = color;
    location = location;

}

void Event::setEventLocation(){
    cout << endl << "Input new location of Event "<<eventID<< endl;
    cin >> location;
}


void Event::displayEventDetails(){

    cout << "EventType = " << eventType << endl;
    cout << "ThemeColor = " << themeColor << endl;
    cout << "Location = " << location << endl;



}


int main(){




    return 0;
}