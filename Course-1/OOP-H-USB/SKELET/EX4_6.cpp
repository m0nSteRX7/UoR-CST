// EX4_6.CPP

#include <iostream>

// ���� �� ����� �� ���� �����

const int ARRAY_SIZE = 24;  // �������� �� ������������

class IntArray
{
public:
// ����������� � �������� ������� �� ������
   IntArray( int sz = ARRAY_SIZE );
// ����������� � �������� ����� �� ���� IntArray
   IntArray( const IntArray& );
// ����������
   ~IntArray() { ; }
// �������� ��������� �� ���������� �� ������
   void loadArray( void );
// ��������� ����������� �� ����������
   void showArray( void );
// ����� ��������� �������
   int findMin( void );
// ���������� �� ������ �� ���������
   void sortArray( void );
// ����� ������� �� ������
   int getSize( void ) { return size; }
   int *getPtr( void ) { return ia; }

private:
   //�������� ����������� �� ����������� ��� �����
   int size;
   int *ia;
};

// ����������� �� ����� �� ���� IntArray � �������� ��
// ������������ 5

void main ( void )
{
// �������� ��������� �� ���������� �� ������

// ��������� �� ��� ����� �� �������� ������������ �� ������ �����

// ���������� �� ������ ����� ���� ��������� �� �����������

// ������������� ������������ �� ���������� �� ����� �����

// ��������� ���������� �� ������ �� ������ �� ���������

// ��������� ���������� �� ���������� �����
 
// ��������� �� ���������� ������� �� ����� �����

} // end main

IntArray :: IntArray( int sz )
{
  // ������ ����� �� ������

  // ia �� ������������ � ������ �� ���������� �����
  // ������������� �� ������
;
}

IntArray :: IntArray( const IntArray &oldIa )
{
  // �������� ������� �� ������ - size

  // ������ ����� �� ������

  // ������ ���������� �� ������
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

