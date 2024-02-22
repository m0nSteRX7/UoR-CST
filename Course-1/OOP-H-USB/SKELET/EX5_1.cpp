#include <iostream>

using namespace std;

class Box
{
public:
	Box( int l=0, int w=0 )	
		{ length = l; width = w; }
	int getArea(void)		
		{ return length * width; }
	Box operator+( const Box &);	// ����� ��� �������������
	Box operator+( int );			// ������ ���������
	Box operator*( int );			// �������� � ���������
private:
	int length;
	int width;

};

void main( void )
{
	Box small(2,4);
	Box	medium(5,6);
	Box large(8,10);
	Box temp;

	cout << " The area is: " << small.getArea() << endl;
	cout << " The area is: " << medium.getArea() << endl;
	cout << " The area is: " << large.getArea() << endl;
	temp = small + medium;
	cout << " The new area is: " << temp.getArea() << endl;
	temp = small + 10;
	cout << " The new area is: " << temp.getArea() << endl;
	temp = large * 4;
	cout << " The new area is: " << temp.getArea() << endl;

} // end main

Box Box::operator+( const Box &a)		// ����� ��� ������������� �� ������
{
	Box temp;
	temp.length = a.length;
	temp.width = a.width + width;
	return temp;
}

Box Box::operator+( int a )		// ������ ��������� ��� ��������
{
	Box temp;
	temp.length = length;
	temp.width = a + width;
	return temp;
}

Box Box::operator*( int a )		// ��������� � ��������
{
	Box temp;
	temp.length = a * length;
	temp.width = a * width;
	return temp;
}

