#include "rectangleType.h"
#include <iostream>
#include <string>
using namespace std;

	rectangleType::rectangleType(){
		length = 0;
		width = 0;
	}
	rectangleType::rectangleType(double l, double w){
		length = l;
		width = l;
	}
		
	void rectangleType::setDimension(double l, double w){
		length = l;
		width = w;
	}

	double rectangleType::getLength() const {
		return length;
	} 

	double rectangleType::getWidth() const {
		return width;
	}

	double rectangleType::area() const {
		return length * width;
	}

	double rectangleType::perimeter() const {
		return 2*length + 2*width;
	}

	void rectangleType::print() const {
		cout << endl << "Length: " << length;
		cout << endl << "Width: " << width;
	}

