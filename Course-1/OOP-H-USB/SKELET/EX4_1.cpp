#include <iostream>

using namespace std;

class OneData
{
  public:
	void set( int inValue );
	int getValue( void );

  private:
	int dataStore;

}; // end OneData

void main( void )
{
	OneData man1, man2, man3;
	int kid;

	man1.set(12);
	man2.set(17);
	man3.set(-13);
	kid = 123;
	cout << " The value of man1 is: " << man1.getValue() << endl;
	cout << " The value of man2 is: " << man2.getValue() << endl;
	cout << " The value of man3 is: " << man3.getValue() << endl;
	cout << " The value of kid  is: " << kid << endl;

} // end main

void OneData :: set( int inValue )
{
	dataStore = inValue;
}

int OneData :: getValue( void )
{
	return dataStore;
}
