#ifndef COMPLEX_H
#define COMPLEX_H

class ComplexNum
{
	friend ostream &operator<<(ostream &, ComplexNum &);
public:
	ComplexNum( void );			// ����������� �� ������������
	ComplexNum(double, double); // ������������� �����������
	ComplexNum(const ComplexNum &);	// ������� �����������
	~ComplexNum( void );		// ����������

	void displayComplex( void );						// ���������
	int operator==(ComplexNum &);

	double getReal( void )  // ��������� �� �������� ����
			{ return real; }
	double getImag( void )  // ��������� �� ������������ ����
			{ return imag; }
private:
	double real;  
	double imag;
	
}; // end ComplexNum

#endif