#pragma once
class Engine 
{
	float sizeInLitres;
	int numberOfCylinders;
public:
	Engine(float sizeInLitresIn, int numberOfCylindersIn);
	~Engine();
	void print();
};

