
#include<iostream>
using namespace std;

namespace CST8219 {
	class Car;
}

class CST8219::Car{

	int numWheels = 0;
	int numDoors = 0;

public: 
	Car() : Car(4){
		cout << "In constructor with 0 parameters" << endl;
	}

	Car(int w) : Car(w, 4) {
		cout << "In constructor with 1 parameters" << endl;
	}

	Car(int w, int d) {

		numWheels = w;
		numDoors = d;

		cout << "In constructor with 2 parameters" << endl;
	}

	~Car() {
		cout << "In destructor" << endl;
	}
};

int main(int argc, char **argv)
{

	CST8219::Car myVehicule(4,2);
   cout << "I made a car!" << endl;
   return 0;
}
