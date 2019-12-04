#include "Engine.h"
#include <iostream>
using namespace std;

Engine::Engine(float sizeInLitresIn, int numberOfCylindersIn)
{
	this->sizeInLitres = sizeInLitresIn;
	this->numberOfCylinders = numberOfCylindersIn;
}

Engine::~Engine()
{
}

void Engine::print() {
	cout << "Engine specs -> size in litres: " << this->sizeInLitres << ", number of cylinders: " << this->numberOfCylinders << "." << endl;
}