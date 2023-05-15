#include "Plane.h"

Plane::Plane(int id, string Piolet, string Desination) {
	
	planeID = id;
	piolet = Piolet;
	destination = Desination;
}

void Plane::setPlaneDetails() {

	cout << "Input new piolot of plane" << planeID << " : ";
	cin >> piolet;

}

string Plane::getDesination() {

	return destination;
}

void Plane::displayPlaneDetails() {

	cout << endl<< "PlaneID: " <<planeID<< endl;
	cout << "piolet : " << piolet << endl;
	cout << "Destination :" << destination<< endl;

}