#include "rectangleType.cpp"
using namespace std;

class Rectangle : public rectangleType {
	public:
		Rectangle():rectangleType() {}
		Rectangle(double l, double w):rectangleType(l, w) {}
};

int main(){
	
	cout << "DEFAULT CONSTRUCTOR";
	Rectangle defaultRect;
	defaultRect.print();
	
	cout << endl << endl << "CREATE A RECTANGLE";
	double length, width;
	cout << endl << "Enter the length: ";
	cin>>length;
	cout << "Enter the width: ";
	cin>>width;
	
	cout << endl << "YOUR RECTANGLE";
	Rectangle myRect(length, width);
	myRect.print();
	cout << endl << "Perimeter: " << myRect.perimeter();
	cout << endl << "Area: " << myRect.area();
	
	cout << endl << endl << "CHANGE YOUR RECTANGLE";
	cout << endl << "Enter the length: ";
	cin>>length;
	cout << "Enter the width: ";
	cin>>width;
	
	cout << endl << "YOUR CHANGED RECTANGLE";
	myRect.setDimension(length, width);
	myRect.print();
	cout << endl << "Perimeter: " << myRect.perimeter();
	cout << endl << "Area: " << myRect.area();
}
