#include "boxType.cpp"
using namespace std;

class Box : public boxType {
	public:
		Box():boxType() {}
		Box(double l, double w, double h):boxType(l, w, h) {}
};

int main(){
	
	Box defaultBox;
	rectangleType *rectPtr1 = &defaultBox;
	
	cout << "DEFAULT CONSTRUCTOR";
	rectPtr1->print();
	
	cout << endl << endl << "CREATE A BOX";
	double length, width, height;
	cout << endl << "Enter the length: ";
	cin>>length;
	cout << "Enter the width: ";
	cin>>width;
	cout << "Enter the height: ";
	cin>>height;
	
	Box myBox(length, width, height);
	rectangleType *rectPtr2 = &myBox;
	
	cout << endl << "YOUR BOX";
	rectPtr2->print();
	cout << endl << "Volume: " << myBox.volume();
	cout << endl << "Area: " << rectPtr2->area();
	
	cout << endl << endl << "CHANGE YOUR BOX";
	cout << endl << "Enter the length: ";
	cin>>length;
	cout << "Enter the width: ";
	cin>>width;
	cout << "Enter the height: ";
	cin>>height;
	
	cout << endl << "YOUR CHANGED BOX";
	myBox.setDimension(length, width, height);
	rectPtr2->print();
	cout << endl << "Volume: " << myBox.volume();
	cout << endl << "Area: " << rectPtr2->area();
}


