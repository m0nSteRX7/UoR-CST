#include <iostream>

using namespace std;

class Point
{
public:
	Point(int=0, int=0);	// constructor
	~Point( void );			// destructor

	void setX(int);			// set X
	int getX( void );		// get X

	void setY(int);			// set Y
	int getY( void );		// get Y

	void show( void );		// display coordinates

protected:
	int x;
	int y;
}; // end class Point

class Circle : public Point
{
public:
	Circle( int=0, int=0, double=0.0 );	// constructor
	~Circle( void );					// destructor

	void setRadius( double );			// set radius
	double getRadius( void );			// return radius
	
	double getDiameter( void );			// return diameter
	double getCircumference( void );	// return dalzinata na okraznostta
	double getArea( void );				// return area

	void show( void );					// display Center and radius

protected:
	double radius;
}; // end class Circle

class Cylinder : public Circle
{
public:
	Cylinder(int=0, int=0, double=0.0, double=0.0);
	~Cylinder( void );

	void setHeight( double );
	double getHeight( void );

	double getArea( void );
	double getVolume( void );

	void show( void );

private:
	double height;
}; //end class Cylinder

void main( void )
{




} // end main

// Point class member-function definitions
Point::Point(int xVal, int yVal)
{
	x=xVal; y=yVal;
	cout << "Point constructor: ";
	show();
	cout << endl;
}

Point::~Point(void)
{
	cout << "Point destructor: ";
	show();
	cout << endl;
}

void Point::setX( int xVal )
{
	x = xVal;
}

int Point::getX( void )
{
	return x;
}

void Point::setY( int yVal )
{
	y = yVal;
}

int Point::getY( void )
{
	return y;
}

void Point::show(void)
{
	cout << '[' << getX() << ", " << getY() << "]";
}

// Circle class member-function definitions
Circle::Circle(int xVal, int yVal, double radiusVal):Point(xVal, yVal)
{
	setRadius(radiusVal);
	cout << "Circle constructor: ";
	show();
	cout << endl;
}

Circle::~Circle(void)
{
	cout << "Circle destructor: ";
	show();
	cout << endl;
}

void Circle::setRadius(double radiusVal)
{
	radius = ( radiusVal < 0.0 ? 0.0 : radiusVal );
}

double Circle::getRadius(void)
{
	return radius;
}

double Circle::getDiameter( void )
{
	return 2*getRadius();
}

double Circle::getCircumference( void )
{
	return 3.14159 * getDiameter();
}

double Circle::getArea( void )
{
	return 3.14159 * getRadius() * getRadius();
}

void Circle::show( void )
{
	cout << "Center = ";
	Point::show();
	cout << "; Radius = " << getRadius();
}

// Cylinder class member-function definitions
Cylinder::Cylinder(int xVal, int yVal, double radiusVal, double heightVal) 
		: Circle( xVal, yVal, radiusVal )
{
	setHeight(heightVal);
	cout << "Cylinder constructor: ";
	show();
	cout << endl;
}

Cylinder::~Cylinder(void)
{
	cout << "Cylinder destructor: ";
	show();
	cout << endl;
}

void Cylinder::setHeight(double heightVal)
{
	height = (heightVal<0.0 ? 0.0 : heightVal);
}

double Cylinder::getHeight(void)
{
	return height;
}

double Cylinder::getArea(void)
{
	return 2*Circle::getArea()+getCircumference()*getHeight();
}

double Cylinder::getVolume(void)
{
	return Circle::getArea()*getHeight();
}

void Cylinder::show(void)
{
	Circle::show();
	cout << "; Height = " << getHeight();
}
