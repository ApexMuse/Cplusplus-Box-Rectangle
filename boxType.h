#include "rectangleType.cpp"

class boxType: public rectangleType
{
	public:
		virtual void setDimension(double l, double w, double h);
		  //Function to set the length, width, and height 
		  //of the box.
		  //Postcondition: length = l; width = w; height = h;

		double getHeight() const;
		  //Function to return the height of the box.
		  //Postcondition: The value of height is returned. 

		virtual double area() const;
		  //Function to return the surface area of the box.
		  //Postcondition: The surface area of the box is 
		  //                calculated and returned.

		double volume() const;
		  //Function to return the volume of the box. 
		  //Postcondition: The volume of the box is 
		  //               calculated and returned.

		virtual void print() const;
		  //Function to output the length, width, and height of a box.

		boxType();
		  //Default constructor
		  //Postcondition: length = 0; width = 0; height = 0;

		boxType(double l, double w, double h);
		  //Constructor with parameters
		  //Postcondition: length = l; width = w; height = h;

	private:
		double height;
};
