#include "Point2D.h"
#include <iostream>

using namespace std;

int main() {

	Point2D p1(1, 1);
	Point2D p2(3, 4);
	cout << p1.distance(p2) << endl;
	Point2D p3(p1);
	cout << "p1: " << p1.toString() << " Comparison p1 == p3: " << (p1==p3) << endl;
	cout << "p2: " << p2.toString() << " Comparison p2 == p3: " << (p2==p3) << endl;
	cout << "p3: " << p3.toString() << endl;

	Point2D p4 = p1 + p2;
	cout << "p4: " << p4.toString() << endl << "Distance p4->p3: " << p4.distance(p3) << endl;;
	
	cout << "Comparisons with p4: " << (p4 == p1) << " " << (p4 == p2) << " " << (p4 == p3) << endl;

	system("pause");
	return 0;
}