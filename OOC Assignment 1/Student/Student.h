#include <iostream>

using namespace std;



//crating the class
class Student {
	
	//attributes 
	int studentId;
	string studentName;
	float MarkOOC;
	float MarkSPM;
	float MarkISDM;


public:

	//decleare the constructor
	Student(int id, string name, float OOC, float SPM, float ISDM);
	
	//decleare the functions(interfaces)
	void setStudentDetails(int id, string name, float OOC, float SPM, float ISDM);
	void setMarkOOC(float OOC);
	float getMarkOOC();
	void setMarkSPM(float SPM);
	float getMarkSPM();
	void setMarkISDM(float ISDM);
	float getMarkISDM();
	void setStudentName(string sName);
	string getStudentName();
	int getStudentID();
	void setStudentID(int id);
	void displayStudent();
};