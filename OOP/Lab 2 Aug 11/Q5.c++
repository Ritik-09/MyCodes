
#include <iostream>

using namespace std;


float FUNVOLUME(float side)
{
	cout << "calculating volume of Cube..";
	float calculate_volume;

	calculate_volume
		= side * side * side;


	return calculate_volume;
}


float FUNVOLUME(float length, float breadth,
			float height)
{
	cout << "calculating volume of "
		<< "Rectangle..";
	int calculate_volume;
	calculate_volume
		= length * breadth * height;


	return calculate_volume;
}

float FUNVOLUME(double radius,
			double height)
{
	cout << "calculating volume of"
		<< " cylinder..";
	float calculate_volume;
	calculate_volume
		= 3.14 * radius * radius * height;

	
	return calculate_volume/3;
}


int main()
{
	float height, radius, length;
	float breadth, rectangleHeight;
	float volumeCube = 0;
	float volumeRectangle = 0;
	float volumeCylinder = 0;
	float side;

	int choice;


	cout << "\n\n==== MENU ====";
	cout << "\n\n1.Calculate volume "
		<< "of CUBE";
	cout << "\n\n2.Calculate volume "
		<< "of RECTANGLE";
	cout << "\n\n3.Calculate volume "
		<< "of CYLINDER";
	cout << "\n\n4.PRESS '4' To SWAP "
		<< "VOLUMES OF CUBE AND "
			"CYLINDER";
	cout << "\n\n5.Exit";

	while (1) {

		cout << "\n\nSelect your choice :";
		cin >> choice;

	
		switch (choice) {

		case 1:
			cout << "\nEnter the side"
				<< " of cube :";
			cin >> side;
			volumeCube = FUNVOLUME(side);

			cout << "\nVolume of cube is :"
				<< volumeCube;
			break;

		case 2:
			cout << "\nEnter the length :";
			cin >> length;

			cout << "\nEnter the height :";
			cin >> rectangleHeight;

			cout << "\nEnter the breadth :";
			cin >> breadth;

			volumeRectangle
				= FUNVOLUME(length, breadth,
						rectangleHeight);

			cout << "\nVolume of Rectangle is :"
				<< volumeRectangle;

			break;

		case 3:
			cout << "\nEnter the Radius :";
			cin >> radius;

			cout << "\nEnter the height :";
			cin >> height;

			volumeCylinder = FUNVOLUME(
				radius, height);

			cout << "\nVolume of Cylinder is :"
				<< volumeCylinder;
			break;

		case 4:
			exit(0);
		}
	}
}
