#include "Owner.h"
#include <iostream>


Owner::Owner(string nameIn, string addressIn, bool allowedToDriveIn)
{
	this->name = nameIn;
	this->address = addressIn;
	this->allowedToDrive = allowedToDriveIn;
}


Owner::~Owner()
{
}

void Owner::print() {
	cout << "Owner specs : " << this->name << ", " << this->address << ", allowed to drive 1/0 (true/false) " << this->allowedToDrive << "." << endl;
}