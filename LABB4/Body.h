#pragma once
#include <string>
using namespace std;
class Body 
{
	string color;
	float width, height;
public:
	Body(string colorIn, float widthIn, float heightIn);
	~Body();
	void print();
};

