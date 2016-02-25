#include "boxType.h"
#include <iostream>
#include <string>
using namespace std;

	void boxType::setDimension(double l, double w, double h) {
		rectangleType::setDimension(l, w);
		height = h;
	}

	double boxType::getHeight() const {
		return height;
	}

	double boxType::area() const {
		double surfaceArea;
		surfaceArea =  2 * rectangleType::area();
		surfaceArea += 2 * (height * rectangleType::getLength());
		surfaceArea += 2 * (height * rectangleType::getWidth());
		return surfaceArea;
	}

	double boxType::volume() const {
		return rectangleType::getLength() * rectangleType::getWidth() * height;
	}

	void boxType::print() const {
		rectangleType::print();
		cout << endl << "Height: " << height;
	}
		
	boxType::boxType(){
		rectangleType::setDimension(0, 0);
		height = 0;
	}

	boxType::boxType(double l, double w, double h){
		rectangleType::setDimension(l, w);
		height = h;
	}

