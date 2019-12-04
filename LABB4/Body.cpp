#include "Body.h"
#include <iostream>


Body::Body(string colorIn, float widthIn, float heightIn)
{
	this->color = colorIn;
	this->width = widthIn;
	this->height = heightIn;
}


Body::~Body()
{
}

void Body::print() {
	cout << "Body specs -> color: " << this->color << ", width: " << this->width << ", height: " <<  this->height << "." << endl;

}