
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

using namespace CST8219;

int main(int argc, char** argv)
{

	Car car1; // This calls constructor Car ()
	Car car2(4); //This calls constructor Car (int);
	Car car3(4, 2); //This calls constructor Car( int, int);

	cout << "Vehicle takes" << sizeof(car1) << endl;
	cout << "Vehicle takes" << sizeof(car2) << endl;
	cout << "Vehicle takes" << sizeof(car3) << endl;


	char quit = 'n';

	Car* pCar = new Car();

	while (quit != 'q') {

		delete(pCar);

		int d;
		int w;

		cout << "enter number of doors" << endl;
		cin >> d;
		while (!(cin >> d)) {
			cout << "Error! please enter a number" << endl;
			cin.clear();
			cin.ignore(256, '\n');
		}
		
		cout << "enter number of wheels" << endl;
		cin >> w;
		while (!(cin >> w)) {
			cout << "Error! please enter a number" << endl;
			cin.clear();
			cin.ignore(256, '\n');
		}

		pCar = new Car(w, d);

		cout << "enter q to quit, anything else to make another car" << endl;
		cin >> quit;
	}

   return 0;
}
