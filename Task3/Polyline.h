#pragma once
#include "Point2D.h"

class Polyline
{
	Point2D *polyline;
	int polySize;
	int actualSize = 0;
public:
	Polyline(int polySize);
	virtual ~Polyline();

	bool addPoint(const Point2D p);

	Point2D getPoint(const int i);

	bool removeLast();

	bool hasPoint();

	int nrOfPoints();

	float length();

	void coordinates();
};

