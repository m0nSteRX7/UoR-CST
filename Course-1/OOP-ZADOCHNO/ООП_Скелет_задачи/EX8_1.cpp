#include <iostream>

using namespace std;

class Vehicle
{
public:
	void initialize( int, float);
	int getWheels( void );
	float getWeight( void );
	float wheelLoading( void );
protected:
	int wheels;					// брой колела 
	float weight;				// тегло
}; // end class Vehicle

class Car : public Vehicle
{
public:
	void initialize(int, float, int = 4);
	int passengers( void );
private:
	int passengerLoad;		// брой пътници
}; // end class Car

class Truck : public Vehicle
{
public:
	void initTruck( int = 2, float = 24000.0);
	float efficiency( void );	// коефициент за полезен товар
	int passengers( void );
private:
	int passengerLoad;
	float payLoad;
}; // end class Truck

void main( void )
{
  Vehicle tricycle;
	tricycle.initialize(3, 37.5);
	cout << "Trikolkata ima " << tricycle.getWheels() << " kolela."<<endl;
	cout << "Natowarwaneto na edno kolelo na trikolkata e " 
			<< tricycle.wheelLoading() << " kilograma."<<endl;
	cout << "Trikolkata tezi " << tricycle.getWeight() 
			<< " kilograma" <<endl<<endl;
  Car sedan;
	sedan.initialize(4, 3500.0, 5);
	cout << "Sedanat vozi " << sedan.passengers() << " passengers."<<endl;
	cout << "Sedanat tezi " << sedan.getWeight() << " kilograma."<<endl;
	cout << "Natovarvaneto na edno kolelo na sedana e " 
			<< sedan.wheelLoading()<< " kilograma."<<endl<<endl;
  Truck zil;
	zil.initialize(18, 12500.0);
	zil.initTruck(1, 33675.0);
	cout << "Zilat tezi " << zil.getWeight() << " kilograma."<<endl;
	cout << "Koeficientat na polezen tovar e "
		<< 100.0 * zil.efficiency() << " procenta."<<endl;


} // end main

// функции-членове на клас Vehicle
void Vehicle :: initialize( int inWheels, float inWeight)
{
	wheels = inWheels;
	weight = inWeight;
}
int Vehicle :: getWheels( void )
//връща броя колела на превозното средство
{
	return wheels;
}

float Vehicle :: getWeight( void )
// връща теглото на превозното средство
{
	return weight;
}
float Vehicle :: wheelLoading( void )
// връща разпределеното тегло
{
	return weight/wheels;
}

// функции-членове на клас Car
void Car :: initialize(int inWheels, float inWeight, int people)
{
	passengerLoad = people;
	wheels = inWheels;
	weight = inWeight;
}

int Car :: passengers(void)
{
	return passengerLoad;
}

// функции-членове на клас Tuck
void Truck :: initTruck( int howMany, float maxLoad)
{
	passengerLoad = howMany;
	payLoad = maxLoad;
}
float Truck :: efficiency( void )
{
	return payLoad / (payLoad + weight);
}
int Truck :: passengers( void )
{
	return passengerLoad;
}
