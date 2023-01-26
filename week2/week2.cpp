
#include<iostream>
using namespace std;

namespace CST8219 {
	class Car;
}

class CST8219::Car{

	int numWheels;
	int numDoors;

public:
	Car() {

	}

	Car(int w) {

	}

	Car(int w, int d) {

		numWheels = w;
		numDoors = d;
	}
};

int main(int argc, char **argv)
{
   cout << "Hello World!" << endl;
   return 0;
}