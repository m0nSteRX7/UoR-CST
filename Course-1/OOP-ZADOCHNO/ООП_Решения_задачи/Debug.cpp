// Debug.cpp

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//function return number entered by user
int getNumber(void)
{
	int number;

	cout << "Enter an integer: ";
	cin >> number;

	return number;

} // end function

// function main begins program execution
int main( void )
{
	// call function getNumber
	// store result in int variable number
	int number = getNumber();

	if ( number <= 0 )
		return 0;

	else
		for ( int i=1; i<=number; i++ )
			cout << i << endl; // print from 1 to number

	return 0;

} //end main
