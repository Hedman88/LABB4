#pragma once
#include <string>
using namespace std;
class Owner 
{
	string name, address;
	bool allowedToDrive;
public:
	Owner(string nameIn, string addressIn, bool allowedToDriveIn);
	~Owner();
	void print();
};

