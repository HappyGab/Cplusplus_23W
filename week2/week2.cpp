
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
		cout << "In deconstructor" << endl;
	}
};

int main(int argc, char **argv)
{
   cout << "Hello World!" << endl;
   return 0;
}
