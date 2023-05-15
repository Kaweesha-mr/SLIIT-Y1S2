#include <iostream>
using namespace std;

class Plane
{
	int planeID;
	string piolet;
	string destination;

public:
	
	void setPlaneDetails();
	void displayPlaneDetails();
	string getDesination();
	Plane(int id, string piolet,string desination);
};