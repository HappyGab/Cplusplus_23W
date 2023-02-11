
#include"Car.h"

void CreateCar(Car& v, int w = 4, int d = 2) {
	
	v.setWheels(w);
	v.setDoors(d);
}

int main(int argc, char** argv)
{
	Car original; //empty constructor no ( )
	Car copy(original); // copy constructor by reference
	Car secondCopy(&original); //copy constructor by pointer
	copy.printVehicle();
	CreateCar(copy, 2); //wheels is 2, everything else is default value
	copy.printVehicle();
	CreateCar(copy, 2, 3); //wheels is 2, doors is 3
	copy.printVehicle();
	copy = secondCopy;
	copy.printVehicle(); // copy is same as second copy
	return 0;
}
