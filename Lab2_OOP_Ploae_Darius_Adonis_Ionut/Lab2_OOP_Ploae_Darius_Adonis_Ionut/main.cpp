#include "area.h"
#include "complexNum.h"
#include <iostream>
#include <string>

using namespace std;

float solve(float a, float b) {
	if (a == 0) {
		throw invalid_argument("Division by zero");
	}

	return -b / a;
}

int main() {
	//Calculates the area of a rectangle or a square
	try {
		float (*calcAreaPtr)(const string&, const string&) = calcArea;

		cout << "Area: " << calcAreaPtr("3.5", "2.75") << endl << endl;
	}
	catch (exception& e) {
		cout << "Error: " << e.what() << endl << endl;
	}

	//Compute the absolute value of a real and of a complex number
	float realNr = -2;

	nrComplex x;
	x.real = 4;
	x.imaginary = -3;

	cout << "Abs value of realNr: " << absoluteValue(realNr) << endl;
	cout << "Abs value of x: " << absoluteValue(x) << endl << endl;

	//Solve the equation ax+b=0
	try {
		float a = 12.5;
		float b = 13.5;

		cout << "y = " << solve(a, b) << endl;
	}
	catch (exception& e) {
		cout << "Error: " << e.what() << endl;
	}
}