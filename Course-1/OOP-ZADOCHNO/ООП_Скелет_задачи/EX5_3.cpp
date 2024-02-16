#include <iostream>

using namespace std;

// Клас на масив от цели числа 

const int ARRAY_SIZE = 24;  // стойност по подразбиране

class IntArray
{
public:
// операции с масиви

// конструктор с аргумент размера на масива 
   IntArray( int sz = ARRAY_SIZE );

// конструктор с аргумент обект от клас IntArray
   IntArray( const IntArray& );

// деструктор
   ~IntArray() { delete ia;
		  cout << " End of IntArray" << endl; }

// задаване стойности за елементите на масива 
   void loadArray( void );

// извеждане стойностите на елементите
   void showArray( void );

// връща размера на масива 
   int getSize( void ) { return size; }

// деклариране на метод за предефиниране на операция
// присвояване = на един масив на друг

// деклариране на метод за предефиниране на операция индексиране

// деклариране на метод за предефиниране на операция ++

// деклариране на метод за предефиниране на операция +
// (събиране на два масива )

private:
   //вътрешно представяне на абстрактния тип данни
   int size;
   int *ia;
};

void main ( void )
{

  IntArray myArray;

// задаване стойности за елементите на обекта 
  myArray.loadArray();

// създаване на нов обект за копиране съдържанието на стария обект
  IntArray newArray( myArray );

// визуализиране съдържанието на елементите на новия обект
  newArray.showArray();


// тестване на операция "присвояване"

// тестване на операция "индексиране"

// тестване на операция ++

// тестване на операция + (събиране на два масива)


} // end main

IntArray :: IntArray( int sz )
{
  size = sz;
  // заделя памет за масива 
  ia = new int[size];
  // ia се инициализира с адреса на заделената памет
  // инициализация елементите на масива 
  for (int i=0; i<sz; ++i) ia[i] = 0;
}

IntArray :: IntArray( const IntArray &oldIa )
{
  size = oldIa.size;
  ia = new int[size];
  for ( int i=0; i<size; ++i) ia[i] = oldIa.ia[i];
}

void IntArray :: loadArray( void )
{
  cout << "Enter the elements" << endl;
  int sz = size;
  for ( int i=0; i<sz; ++i)
  {
    cout << "ia[" << i << "] = ";
    cin >> ia[i];
  }
}

void IntArray :: showArray( void )
{
  cout << "Display the elements" << endl;
  for ( int i=0; i<size; ++i)
	cout << "ia[" << i << "] = " << ia[i] << endl;
}

// дефиниране на метод за предефиниране на операция =

// дефиниране на метод за предефиниране на операция [] (индексиране)

// дефиниране на метод за предефиниране на операция ++
// (инкрементиране)

// дефиниране на метод за предефиниране на операция +

