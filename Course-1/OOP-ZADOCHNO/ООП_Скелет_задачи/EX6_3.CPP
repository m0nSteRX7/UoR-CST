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

private:
	double radius;
}; // end class Circle

class Cylinder : public Circle
{
public:
	// декларация на конструктора
	// декларация на деструктора

	// декларация на setHeight
	// декларация на getHeight

	// декларация на getArea
	// декларация на getVolume

	// декларация на show

private:
	// декларация на височината на цилиндъра

}; //end class Cylinder

void main( void )
{
	Point myPoint(12,23);
	myPoint.show();
	myPoint.setX(2);
	myPoint.setY(2);

	cout << "\n\nThe new location of point is ";
	myPoint.show();
	cout << endl<<endl;

	Circle myCircle(22,14,2.5);
	myCircle.show();
	myCircle.setX(2);
	myCircle.setY(2);
	myCircle.setRadius(4.25);

	cout << "\n\nThe new location and radius of circle are: \n";
	myCircle.show();
	cout << "\nDiameter is: " << myCircle.getDiameter();
	cout << "\nCircumference is: " << myCircle.getCircumference();
	cout << "\nArea is: " << myCircle.getArea();
	cout << endl<<endl;

	// деклариране на обект от клас Cylinder с координати 12,23, радуис 2.5, височина 5.7

	// визуализиране

	// установяване нова стойност на Х
	// установяване нова стойност на Y
	// установяване нова стойност на радиуса
	// установяване нова стойност на височината


	cout << "\n\nThe new location, radius and height of cylinder are: \n";
	// визуализиране новото положение на цилиндъра

	// визуализиране диаметъра на цилиндъра

	// визуализиране дължината на окръжността на основата на цилиндъра

	// визуализиране околната повърхнина на цилиндъра

	// визуализиране обема на цилиндъра

	cout << endl<<endl;

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

// дефиниция на setHeight

// дефиниция на getHeight

// дефиниция на getArea

// дефиниция на getVolume

// дефиниция на show


