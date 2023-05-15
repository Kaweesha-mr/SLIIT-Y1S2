#include <iostream>
using namespace std;


//creating the patient class 
class Patient {

	//class attributes 
	int appointmentID;
	string patientName;
	int doctorCharge;
	int hospitalCharge;


	//decleare the functions 
public:
	void setPatientDetails();
	void displayPatientDetails();
	void  setdoctorCharge(float charge);
	void sethospitalCharge(float charge);
	float calculateTotalPayment();
	Patient(int id, string name, float charge, float hcharge);
};