#include "Polyline.h"
#include <iostream>
using namespace std;

Polyline::Polyline(int polySize)
{
	polyline = new Point2D[polySize];
	this->polySize = polySize;
}


Polyline::~Polyline()
{
	delete[] polyline;
}

bool Polyline::addPoint(const Point2D p) {
	if (actualSize == polySize) {
		cout << "Polyline is full!" << endl << endl;
		return false;
	}
	polyline[actualSize] = p;
	cout << "New point: " << polyline[actualSize].toString() << endl << endl;
	actualSize++;
	return true;
}

Point2D Polyline::getPoint(const int i) {
	if (i >= polySize || i > actualSize) {
		cout << "Index out of bounds!" << endl << endl;
		return Point2D(NULL, NULL);
	}
	return polyline[i];
}

bool Polyline::removeLast() {
	if (actualSize == 0) {
		cout << "No points to remove." << endl;
		return false;
	}
	actualSize--;
	return true;
}

bool Polyline::hasPoint() {
	if (actualSize < 1) {
		cout << "Polyline does not have any point." << endl;
		return false;
	}
	return true;
}

int Polyline::nrOfPoints() {
	return actualSize;
}

float Polyline::length() {
	float tot = 0;
	for (int i = 0; i < actualSize-1; i++) {
		tot = tot + getPoint(i).distance(getPoint(i+1));
	}
	cout << endl;
	return tot;
}

void Polyline::coordinates() {
	for (int i = 0; i < actualSize; i++) {
		cout << getPoint(i).toString() << endl;
	}
	cout << endl;
}