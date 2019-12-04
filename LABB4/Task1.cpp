#include "MotorVehicle.h"
#include <iostream>

using namespace std;


int main() {
	int amount;
	cout << "How many vehicles do you want to register?" << endl;
	cin >> amount;
	string name, address, color, model;
	int cylinders, numberOfTires;
	float width, height, eSizeInLitres;
	bool drive;

	for (int i = 0; i < amount; i++)
	{
		cout << endl;
		cout << "Owner?" << endl;
		cin >> name;
		cout << "Owners address?" << endl;
		cin >> address;
		cout << "Is owner allowed to drive? 1/0 (true/false)" << endl;
		cin >> drive;
		cout << "What model?" << endl;
		cin >> model;
		cout << "How many tires?" << endl;
		cin >> numberOfTires;
		cout << "Engine size in litres?" << endl;
		cin >> eSizeInLitres;
		cout << "Nr of cylinders in engine?" << endl;
		cin >> cylinders;
		cout << "Body color?" << endl;
		cin >> color;
		cout << "Width of body?" << endl;
		cin >> width;
		cout << "Height of body?" << endl;
		cin >> height;

		MotorVehicle kekxd(Engine(eSizeInLitres, cylinders), Body(color, width, height), Owner(name, address, drive), numberOfTires, model);
		kekxd.print();
	}
	system("pause");
	return 0;
}