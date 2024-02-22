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

void main( void )
{
	// деклариране на обект от клас Point с координати 12,23

	// визуализиране

	// установяване нова стойност на Х
	// установяване нова стойност на Y

	cout << "\n\nThe new location of point is ";
	// визуализиране новото положение на точката

	cout << endl<<endl;

	// деклариране на обект от клас Circle с координати 22,14 и радуис 2.5

	// визуализиране

	// установяване нова стойност на Х
	// установяване нова стойност на Y
	// установяване нова стойност на радиуса

	cout << "\n\nThe new location and radius of circle are: \n";
	// визуализиране новото положение на окръжността
	// визуализиране на диаметъра на окръжността
	// визуализиране на дължината на окръжността
	// визуализиране лицето на кръга

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

}

int Point::getX( void )
{
	return 0;
}

void Point::setY( int yVal )
{
	
}

int Point::getY( void )
{
	return 0;
}

void Point::show(void)
{

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

void Circle::setRadius(double riusVal)
{

}

double Circle::getRadius(void)
{
	return 0.0;
}

double Circle::getDiameter( void )
{
	return 0.0;
}

double Circle::getCircumference( void )
{
	return 0.0;
}

double Circle::getArea( void )
{
	return 0.0;
}

void Circle::show( void )
{

}
