#ifndef COMPLEX_H
#define COMPLEX_H

class ComplexNum
{
	friend ostream &operator<<(ostream &, ComplexNum &);
public:
	ComplexNum( void );			// конструктор по подразбиране
	ComplexNum(double, double); // инициализиращ конструктор
	ComplexNum(const ComplexNum &);	// копиращ конструктор
	~ComplexNum( void );		// деструктор

	void displayComplex( void );						// извеждане
	int operator==(ComplexNum &);

	double getReal( void )  // извличане на реалната част
			{ return real; }
	double getImag( void )  // извличане на имагинерната част
			{ return imag; }
private:
	double real;  
	double imag;
	
}; // end ComplexNum

#endif