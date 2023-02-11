#pragma once
#include<iostream>

using namespace std;

class Car {

	int numWheels = 0;
	int numDoors = 0;

public:
	Car();
	Car(int);
	Car(int, int);
	~Car();

	void printVehicle();

	Car(Car&);
	Car(Car*);

	int Car::getDoors();
	int Car::getWheels();
	void Car::setDoors(int d);
	void Car::setWheels(int w);
};