#include<iostream>

using namespace std;

class Doctor {

    int doctorID;
    string doctorName;
    string specilization;
    string hospital;

public:
    void setDoctorDetails();
    void displayDoctorDetails();
    string getspecilization();
    Doctor(int id, string dname, string special, string hospital);
};


Doctor::Doctor(int id, string dname, string special, string hospital) {
    doctorID = id;
    doctorName = dname;
    specilization = special;
    hospital = hospital;
}


void Doctor::setDoctorDetails() {

    cout << "Input new hospital of doctor " << doctorID << " :";
    cin >> hospital;
    cout << endl;

}

void Doctor::displayDoctorDetails() {

    cout << "DoctorID: "<<doctorID << endl;
    cout << "DoctorName: " << doctorName << endl;
    cout << "Specilization: " << specilization << endl;
    cout << "Hospital: " << hospital << endl;

}

int main() {

    Doctor d1(1, "Dr.sunil", "Neuroligist", "asiri");
    Doctor d2(2, "Dr.yasantha", "oncologist", "lanka");
    Doctor d3(3, "Mr.Godvin", "Cardiologist", "CCC");


    d1.setDoctorDetails();
    d2.setDoctorDetails();
    d3.setDoctorDetails();


    d1.displayDoctorDetails();
    cout << endl;
    d2.displayDoctorDetails();
    cout << endl;
    d3.displayDoctorDetails();
    cout << endl;

    return 0;
}