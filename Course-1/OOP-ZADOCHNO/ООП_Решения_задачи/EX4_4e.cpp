// EX4_4.CPP
// Модел на комплексно число и допустими операции

#include <iostream>
#include <cmath>

using namespace std;

class ComplexNum
{
public:
	ComplexNum( void );			// конструктор по подразбиране
	ComplexNum(double, double); // инициализиращ конструктор
	ComplexNum(ComplexNum &);	// копиращ конструктор
	~ComplexNum( void );		// деструктор

	ComplexNum addComplex(ComplexNum &, ComplexNum &);		//събиране
	ComplexNum multiComplex(ComplexNum &, ComplexNum &);	// умножение
	double modulComplex( ComplexNum &);					// модул
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
	ComplexNum statAr[3];
	for (int i = 0; i < 3; i++)
		statAr[i].displayComplex();

	ComplexNum* ptr;
	ptr = new ComplexNum[3];
	for (int i = 0; i < 3; i++)
		(ptr + i)->displayComplex();

	delete[] ptr;

	/*
	ComplexNum t(0,0); // u,v - операнди; t - резултат

	cout << "Vavedete 1-vo kompleksno chislo" << endl;
	ComplexNum u;

	cout << "Vavedete 2-ro kompleksno chislo" << endl;
	ComplexNum v;

	cout << endl << "Sabirane na kompleksni chisla" << endl;
	t = t.addComplex(u,v);
	t.displayComplex();

	ComplexNum alfa(t);
	alfa.displayComplex();

	cout << endl << "Umnozenie na kompleksni chisla" << endl;
	t = t.multiComplex(u,v);
	t.displayComplex();

	cout << endl << "Modul= " << u.modulComplex(u) << endl;
	
	*/

} //end main

// дефиниции методите на класа

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
ComplexNum::ComplexNum(ComplexNum &objCom)
{
	real = objCom.real;
	imag = objCom.imag;
}
// деструктор
ComplexNum::~ComplexNum( void )
{
	cout << "End ComplexNum" << endl;
}

// събиране на две комплексни числа
ComplexNum ComplexNum::addComplex(ComplexNum &x, ComplexNum &y)
{
	ComplexNum z(0,0); // работен обект
	z.real = x.real + y.real;
	z.imag = x.imag + y.imag;
	return z;
} // end addComplex

// умножение на две комплексни числа
ComplexNum ComplexNum::multiComplex(ComplexNum &x, ComplexNum &y)
{
	ComplexNum z(0,0); // работен обект
	z.real = x.real * y.real;
	z.imag = x.imag * y.imag;
	return z;
} // end multiComplex

// модул на комплексно число
double ComplexNum::modulComplex(ComplexNum &x)
{
	return sqrt( x.real*x.real + x.imag*x.imag );
} // end modulComplex

//извеждане
void ComplexNum::displayComplex( void )
{
	cout << endl << "Real = " << getReal();
	cout << endl << "Imag = " << getImag() << endl;
} // end displayComplex