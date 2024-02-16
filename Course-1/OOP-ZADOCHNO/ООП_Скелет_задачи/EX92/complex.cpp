#include <iostream>

using namespace std;

#include "complex.h"

// конструктор по подразбиране
ComplexNum::ComplexNum( void )
{
	cout << "Vavedete Real: ";
	cin >> real;

	cout << "Vavedete Imag: ";
	cin >> imag;
} // end inputComplex

// инициализиращ конструктор
ComplexNum::ComplexNum(double r, double i)
{
	real = r;	imag = i;
}

// копиращ конструктор
ComplexNum::ComplexNum(const ComplexNum &objCom)
{
	real = objCom.real;
	imag = objCom.imag;
}

// деструктор
ComplexNum::~ComplexNum( void )
{
//	cout << "End ComplexNum" << endl;
}

//извеждане
void ComplexNum::displayComplex( void )
{
	cout << endl << "Real = " << getReal();
	cout << endl << "Imag = " << getImag() << endl;
} // end displayComplex

ostream &operator<<(ostream &output, ComplexNum &obj)
{
	output << endl << "Real = " << obj.getReal();
	output << endl << "Imag = " << obj.getImag() << endl;
	return output;
}

int ComplexNum::operator ==(ComplexNum &a)
{
	return ((a.real==real) && (a.imag==imag));
}