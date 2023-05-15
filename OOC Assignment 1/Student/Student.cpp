#include "Student.h"


//constructor define
Student::Student(int id, string name, float OOC, float SPM, float ISDM) {

	studentId = id;
	studentName = name;
	MarkOOC = OOC;
	MarkSPM = SPM;
	MarkISDM = ISDM;
}


//define the functions 
void Student::setMarkOOC(float OOC) {

	MarkOOC = OOC;
}

void Student::setMarkSPM(float SPM) {

	MarkSPM = SPM;
}

void Student::setMarkISDM(float ISDM) {

	MarkISDM = ISDM;
}

float Student::getMarkOOC() {

	return MarkOOC;
}

float Student::getMarkSPM() {

	return MarkSPM;
}

float Student::getMarkISDM() {

	return MarkISDM;
}

void Student::setStudentDetails(int id, string name, float OOC, float SPM, float ISDM) {

	studentId = id;
	studentName = name;
	MarkOOC = OOC;
	MarkSPM = SPM;
	MarkISDM = ISDM;
}


void Student::setStudentName(string sName) {

	studentName = sName;
}

string Student::getStudentName() {
		
	return studentName;

}

void Student::setStudentID(int id) {

	studentId = id;
}

int Student::getStudentID() {

	return studentId;

}

void Student::displayStudent() {

	cout << endl<<"StudentID :  " << studentId << endl;
	cout << "Studentname = " << studentName << endl;
	cout << "markOOC = " << getMarkOOC() << endl;
	cout << "markSPM = " << getMarkSPM() << endl;
	cout << "markISDM = " << getMarkISDM() << endl;
	cout << "markOOC = " << getMarkOOC() << endl;
	cout << "Total Mark = " << (getMarkISDM() + getMarkSPM() + getMarkOOC()) <<endl;
	cout << "Average Mark = " << ((getMarkISDM() + getMarkSPM() + getMarkOOC()) / 3)<<endl;
}

