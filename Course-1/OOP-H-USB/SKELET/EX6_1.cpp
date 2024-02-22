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
	int wheels;					// ���� ������
	float weight;				// �����
}; // end class Vehicle

class Car : public Vehicle
{
public:
	void initialize(int, float, int = 4);
	int passengers( void );
private:
	int passengerLoad;		// ���� �������
}; // end class Car

class Truck : public Vehicle
{
public:
	void initTruck( int = 2, float = 24000.0);
	float efficiency( void );	// ���������� �� ������� �����
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

// �������-������� �� ���� Vehicle
void Vehicle :: initialize( int inWheels, float inWeight)
{
	wheels = inWheels;
	weight = inWeight;
}
int Vehicle :: getWheels( void )
//����� ���� ������ �� ���������� ��������
{
	return wheels;
}

float Vehicle :: getWeight( void )
// ����� ������� �� ���������� ��������
{
	return weight;
}
float Vehicle :: wheelLoading( void )
// ����� �������������� �����
{
	return weight/wheels;
}

// �������-������� �� ���� Car
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

// �������-������� �� ���� Tuck
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
