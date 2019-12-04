#pragma once
#include "Engine.h"
#include "Body.h"
#include "Owner.h"

using namespace std;

class MotorVehicle 

{
	Engine engine;
	Body body;
	Owner owner;
	int numberOfTires;
	float *tireDiameter;
	string model;
public:
	MotorVehicle(Engine engineIn, Body bodyIn, Owner ownerIn, int numberOfTiresIn, string modelIn);
	virtual ~MotorVehicle();
	void print();
};

