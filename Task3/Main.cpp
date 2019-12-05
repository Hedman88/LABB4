#include <iostream>
#include "Polyline.h"

using namespace std;

int main() {

	Polyline pl(5);
	pl.addPoint(Point2D(1, 2));
	pl.addPoint(Point2D(2, 3));
	pl.addPoint(Point2D(3, 4));
	pl.addPoint(Point2D(5, 4));
	pl.coordinates();
	cout << pl.length() << endl << endl;
	pl.removeLast();
	cout << pl.nrOfPoints() << endl << endl;
	pl.coordinates();
	cout << pl.length() << endl << endl;
	cout << pl.getPoint(2).toString() << endl;;
	pl.removeLast();
	pl.removeLast();
	pl.removeLast();
	pl.removeLast();

	system("pause");
	return 0;
}