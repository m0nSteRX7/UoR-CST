// EX4_6.CPP

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
   ~IntArray( void); 
   
// Задаване стойности за елементите на масива 
   void loadArray( void );
// изввеждане стойностите на елементите
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

int maxArray( int *, int );
int nmaxArray( const IntArray& );

// Деклариране на обект от клас IntArray с аргумент за 
// конструктора 5

//	IntArray myArray(5);

void main( void )
{

	IntArray myArray(5);

	
// задаване стойности за елементите на обекта 
  myArray.loadArray();
// създаване на нов обект за копиране съдържанието на стария обект
  IntArray newArray( myArray );
// премахване на стария обект чрез извикване на деструктора 
//  IntArray *pa = &myArray;
//  pa -> IntArray ::~IntArray();
// визуализиране съдържанието на елементите на новия обект
  newArray.showArray();
// сортиране елементите на масива по метода на мехурчето
  newArray.sortArray();
// извеждане елементите на сортирания масив
  newArray.showArray();
// извеждане минималния елемент на новия обект
  int minel = newArray.findMin();
  cout << "Minimalen element " << minel << endl;
// извеждане максималния елемент на новия обект чрез външна функция
  int maxel = maxArray( newArray.getPtr(),newArray.getSize() );
  cout << "Maksimalen element: " << maxel << endl;
// извеждане максималния елемент на новия обект чрез външна функция
  maxel = nmaxArray( newArray );
  cout << "Maksimalen element: " << maxel << endl;

} //end main

IntArray :: IntArray( int sz )
{
  size = sz;
  // заделя памет за масива 
  ia = new int[size];
  // ia се инициализира с адреса на заделената памет
  // инициализация на масива 
  for (int i=0; i<sz; ++i) ia[i] = 0;
}

IntArray :: IntArray( const IntArray &oldIa )
{
  size = oldIa.size;
  ia = new int[size];
  for ( int i=0; i<size; ++i) ia[i] = oldIa.ia[i];
}

IntArray :: ~IntArray( void )
{
	delete ia;
	cout << "Destructor " << endl;
}
void IntArray :: loadArray( void )
{
  cout << "Vavedete elementite na masiva" << endl;
  int sz = size;
  for ( int i=0; i<sz; ++i)
  {
    cout << "ia[" << i << "] = ";
    cin >> ia[i];
  }
}

void IntArray :: showArray( void )
{
  cout << "Izvezdane elementite na masiva" << endl;
  for ( int i=0; i<size; ++i)
	cout << "ia[" << i << "] = " << ia[i] << endl;
}

int IntArray :: findMin( void )
{
  int min;
  min = ia[0];
  for (int i=0; i<size; i++)
    if (min > ia[i]) min = ia[i];
  return min;
}

void IntArray :: sortArray( void )
{
  for (int k=0; k<(size-1); k++)
  {
    int minEl = ia[k];
    for (int i=k+1; i<size; i++)
      if (minEl > ia[i])
      {
	minEl=ia[i];
	ia[i] = ia[k];
	ia[k]=minEl;
      }
  }
}

int maxArray( int *ptIa, int sizeAr )
{
  int max;
  max = ptIa[0];
  for (int i=0; i<sizeAr; i++)
    if (max < ptIa[i]) max = ptIa[i];
  return max;
}

int nmaxArray( const IntArray &anArray )
{
  IntArray myArray( anArray );
  int *ptIa = myArray.getPtr();
  int sizeAr = myArray.getSize();
  int max;
  max = ptIa[0];
  for (int i=0; i<sizeAr; i++)
    if (max < ptIa[i]) max = ptIa[i];
  return max;
}
