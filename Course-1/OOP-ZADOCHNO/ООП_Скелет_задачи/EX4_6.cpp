// EX4_6.CPP

#include <iostream>

// Клас на масив от цели числа 

const int ARRAY_SIZE = 24;  // стойност по подразбиране

class IntArray
{
public:
// конструктор с аргумент размера на масива 
   IntArray( int sz = ARRAY_SIZE );
// конструктор с аргумент обект от клас IntArray
   IntArray( const IntArray& );
// деструктор
   ~IntArray() { ; }
// задаване стойности за елементите на масива 
   void loadArray( void );
// извеждане стойностите на елементите
   void showArray( void );
// търси минимален елемент
   int findMin( void );
// сортировка по метода на мехурчето
   void sortArray( void );
// връща размера на масива 
   int getSize( void ) { return size; }
   int *getPtr( void ) { return ia; }

private:
   //вътрешно представяне на абстрактния тип данни
   int size;
   int *ia;
};

// деклариране на обект от клас IntArray с аргумент за 
// конструктора 5

void main ( void )
{
// задаване стойности за елементите на обекта 

// създаване на нов обект за копиране съдържанието на стария обект

// премахване на стария обект чрез извикване на деструктора 

// визуализиране съдържанието на елементите на новия обект

// сортиране елементите на масива по метода на мехурчето

// извеждане елементите на сортирания масив
 
// извеждане на минималния елемент на новия обект

} // end main

IntArray :: IntArray( int sz )
{
  // заделя памет за масива 

  // ia се инициализира с адреса на заделената памет
  // инициализация на масива 
;
}

IntArray :: IntArray( const IntArray &oldIa )
{
  // копиране размера на масива  - size

  // заделя памет за масива 

  // копира елементите на масива 
;
}

void IntArray :: loadArray( void )
{

;
}

void IntArray :: showArray( void )
{

;
}

int IntArray :: findMin( void )
{

;
}

void IntArray :: sortArray( void )
{

;
}

