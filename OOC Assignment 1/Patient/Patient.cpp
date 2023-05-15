#include "Patient.h"


//define the constructor
Patient::Patient(int id, string name, float charge, float hcharge) {

	appointmentID = id;
	patientName = name;
	doctorCharge = charge;
	hospitalCharge = hcharge;
}



//define the functions  
float Patient::calculateTotalPayment() {


	return doctorCharge + hospitalCharge;
}

void Patient::displayPatientDetails() {

	cout << "AppointmentID = " << appointmentID << endl;
	cout << "Patient Name = " << patientName << endl;
	cout << "Total Payment = " << calculateTotalPayment() << endl;
}

void Patient::setdoctorCharge(float charge) {

	doctorCharge = charge;
}

void Patient::sethospitalCharge(float charge) {

	hospitalCharge = charge;
}

