#include <iostream>

using namespace std;

// ���� �� ����� �� ���� �����

const int ARRAY_SIZE = 24;  // �������� �� ������������

class IntArray
{
public:
// �������� � ������

// ����������� � �������� ������� �� ������
   IntArray( int sz = ARRAY_SIZE );

// ����������� � �������� ����� �� ���� IntArray
   IntArray( const IntArray& );

// ����������
   ~IntArray() { delete ia;
		  cout << " End of IntArray" << endl; }

// �������� ��������� �� ���������� �� ������
   void loadArray( void );

// ��������� ����������� �� ����������
   void showArray( void );

// ����� ������� �� ������
   int getSize( void ) { return size; }

// ����������� �� ����� �� ������������� �� ��������
// ����������� = �� ���� ����� �� ����

// ����������� �� ����� �� ������������� �� �������� �����������

// ����������� �� ����� �� ������������� �� �������� ++

// ����������� �� ����� �� ������������� �� �������� +
// (�������� �� ��� ������)

private:
   //�������� ����������� �� ����������� ��� �����
   int size;
   int *ia;
};

void main ( void )
{

  IntArray myArray;

// �������� ��������� �� ���������� �� ������
  myArray.loadArray();

// ��������� �� ��� ����� �� �������� ������������ �� ������ �����
  IntArray newArray( myArray );

// ������������� ������������ �� ���������� �� ����� �����
  newArray.showArray();


// �������� �� �������� "�����������"

// �������� �� �������� "�����������"

// �������� �� �������� ++

// �������� �� �������� + (�������� �� ��� ������)


} // end main

IntArray :: IntArray( int sz )
{
  size = sz;
  // ������ ����� �� ������
  ia = new int[size];
  // ia �� ������������ � ������ �� ���������� �����
  // ������������� ���������� �� ������
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

// ���������� �� ����� �� ������������� �� �������� =

// ���������� �� ����� �� ������������� �� �������� [] (�����������)

// ���������� �� ����� �� ������������� �� �������� ++
// (��������������)

// ���������� �� ����� �� ������������� �� �������� +

