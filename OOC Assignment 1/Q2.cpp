#include<iostream>

using namespace std;


//creating the class
class Event {


    //declearing privet attributes
    int eventID;
    string eventType;
    string themeColor;
    string location;

    //define the public variables(interfaces)
public:
    void setEventDetails();
    void displayEventDetails();
    void setEventLocation();
    Event(int id, string type, string color, string location);

};


//declearing the functions
Event::Event(int id, string type, string color, string Location) {

    eventID = id;
    eventType = type;
    themeColor = color;
    location = Location;

}

void Event::setEventLocation() {
    cout << endl << "Input new location of Event " << eventID <<" = ";
    cin >> location;
}


void Event::displayEventDetails() {

    cout << endl<< "EventType = " << eventType << endl;
    cout << "ThemeColor = " << themeColor << endl;
    cout << "Location = " << location << endl;
    cout << endl;
    cout << endl;



}


int main() {

    //creating dynamic objects and passing constructor values
    Event* e1 = new Event(1, "party", "red", "nugegoda");
    Event* e2 = new Event(2,"wedding","purple","maharagama");
    Event* e3 = new Event(3,"party","pink","malabe");

    //calling functions required to output the details
    e1->setEventLocation();
    e2->setEventLocation();
    e3->setEventLocation();


    e1->displayEventDetails();
    e2->displayEventDetails();
    e3->displayEventDetails();

        return 0;
}
