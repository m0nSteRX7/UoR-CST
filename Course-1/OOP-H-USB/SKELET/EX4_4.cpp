// EX4_4.CPP
// Модел на комплексно число и допустими операции

#include <iostream>
#include <cmath>

using namespace std;

class ComplexNum
{
	public:
		void inputComplex( void ); // въвеждане елементите на числото
		ComplexNum addComplex(ComplexNum, ComplexNum);		//събиране
		ComplexNum multiComplex(ComplexNum, ComplexNum);	// умножение
		double modulComplex( ComplexNum );					// модул
		void displayComplex( void );						// извеждане
		double getReal( void )  // извличане на реалната част
			{ return real; }
		double getImag( void )  // извличане на имагинерната част
			{ return imag; }
	private:
		double real;
		double imag;
	
}; // end ComplexNum

void main( void )
{
	ComplexNum u,v, t; // u,v - операнди; t - резултат

	cout << "Vavedete 1-vo kompleksno chislo" << endl;
	u.inputComplex();

	cout << "Vavedete 2-ro kompleksno chislo" << endl;
	v.inputComplex();

	cout << endl << "Sabirane na kompleksni chisla" << endl;
	t = t.addComplex(u,v);
	t.displayComplex();

	cout << endl << "Umnozenie na kompleksni chisla" << endl;
	t = t.multiComplex(u,v);
	t.displayComplex();

	cout << endl << "Modul= " << u.modulComplex(u) << endl;

} //end main

// дефиниции методите на класа

// въвеждане елементите на числото
void ComplexNum::inputComplex( void )
{
	cout << "Vavedete Real: ";
	cin >> real;

	cout << "Vavedete Imag: ";
	cin >> imag;
} // end inputComplex

// събиране на две комплексни числа
ComplexNum ComplexNum::addComplex(ComplexNum x, ComplexNum y)
{
	ComplexNum z; // работен обект
	z.real = x.real + y.real;
	z.imag = x.imag + y.imag;
	return z;
} // end addComplex

// умножение на две комплексни числа
ComplexNum ComplexNum::multiComplex(ComplexNum x, ComplexNum y)
{
	ComplexNum z; // работен обект
	z.real = x.real * y.real;
	z.imag = x.imag * y.imag;
	return z;
} // end multiComplex

// модул на комплексно число
double ComplexNum::modulComplex(ComplexNum x)
{
	return sqrt( x.real*x.real + x.imag*x.imag );
} // end modulComplex

//извеждане
void ComplexNum::displayComplex( void )
{
	cout << endl << "Real = " << getReal();
	cout << endl << "Imag = " << getImag() << endl;
} // end displayComplex