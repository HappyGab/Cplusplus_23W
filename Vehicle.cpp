#include"Car.h"

Car::Car() : Car(4) {
	cout << "In constructor with 0 parameters" << endl;
}


Car::Car(int w) : Car(w, 4) {
	cout << "In constructor with 1 parameters" << endl;
}

Car::Car(int w, int d) {

	numWheels = w;
	numDoors = d;

	cout << "In constructor with 2 parameters" << endl;
}

Car::~Car() {
	cout << "In destructor" << endl;
}

void Car::printVehicle() {
	cout << "Car address: " << this << " doors: " << numDoors << " wheels: " << numWheels << endl;
}

Car::Car(Car &copy) : Car(4,4) {

}

Car::Car(Car *copy) : Car(4,4){

}

int Car::getDoors() {
	return numDoors;
}

int Car::getWheels() {
	return numWheels;
}

void Car::setDoors(int d) {

	numDoors = d;
}

void Car::setWheels(int w) {

	numWheels = w;
}