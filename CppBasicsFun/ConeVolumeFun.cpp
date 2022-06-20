#include <iostream>

using namespace std;

int main() {
	double radius = 0.0;
	double height = 0.0;
	double volume = 0.0;
	const double PI = 3.14159;
	// const is short for constant, compiler ensures that const variables are never re-assigned
	// name const variables in all caps by convention
	
	cout << "Please enter the radius: ";
	cin >> radius;
	cout << "radius: " << radius << endl;
	cout << "Please enter the height: ";
	cin >> height;
	cout << "height: " << height << endl;
	
	// formula for volume of a cone
	// V = 1/3 pi r^2 h
	volume = 1.0 / 3.0 * PI * radius * radius * height;
	cout << "The volume of a cone with radius " << radius << " and height " << height << " is " << volume << endl;
	
	//PI = 0.0; // causes compiler error!
	// task: in a new file, CircleAreaFun.cpp, code up a solution to computing the area of a circle from user inputted radius
	// have fun!!

	return 0;
}
