#include "MotorVehicle.h"
#include <time.h>
#include <iostream>

using namespace std;
MotorVehicle::MotorVehicle(Engine engineIn, Body bodyIn, Owner ownerIn, int numberOfTiresIn, string modelIn):engine(engineIn),body(bodyIn),owner(ownerIn)
{
	
	this->numberOfTires = numberOfTiresIn;
	this->tireDiameter = new float[numberOfTires];
	srand((unsigned int)time(NULL));
	for (int i = 0; i < numberOfTires; i++) {
		this->tireDiameter[i] = rand()%101 + 650;
	}
	this->model = modelIn;
}


MotorVehicle::~MotorVehicle()
{
	delete[] tireDiameter;
}

void MotorVehicle::print() {
	cout << "Model: " << model << endl;
	engine.print();
	body.print();
	cout << "Number of tires: " << numberOfTires << endl;
	cout << "Tire diameters: ";
	for (int i = 0; i < numberOfTires; i++) {
		if (i == numberOfTires - 1) {
			cout << tireDiameter[i] << endl;
		}
		else {
			cout << tireDiameter[i] << ", ";
		}
	}
	owner.print();
	cout << endl;
}