// C++ program to demonstrate how we will calculate
// the area of shapes USING VIRTUAL FUNCTION
#include <fstream>
#include <iostream>
using namespace std;

// Declaration of Base class
class Shape {
public:
	// Usage of virtual constructor
	virtual void calculate()
	{
		cout << "Area of your Shape ";
	}
};

// Declaration of Derived calss
class Rectangle : public Shape {
public:
	int width, height, area;

	void calculate()
	{
		cout << "Enter Width of Rectangle: ";
		cin >> width;

		cout << "Enter Height of Rectangle: ";
		cin >> height;

		area = height * width;
		cout << "Area of Rectangle: " << area << "\n";
	}
};

// Declaration of 2nd derived class
class Square : public Shape {
public:
	int side, area;

	void calculate()
	{
		cout << "Enter one side your of Square: ";
		cin >> side;

		area = side * side;
		cout << "Area of Square: " << area;
	}
};

int main()
{

	// base class pointer
	Shape* S;
	Rectangle r;

	// initilization of reference variable
	S = &r;

	// calling of Rectangle function
	S->calculate();
	Square sq;

	// initilization of reference variable
	S = &sq;

	// calling of Square function
	S->calculate();

	// return 0 to tell the program executed
	// successfully
	return 0;
}
