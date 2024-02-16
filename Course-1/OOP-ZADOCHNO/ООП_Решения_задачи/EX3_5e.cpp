#include <iostream>

using namespace std;

const char BELL = '\007';

class VirScr
{
public:
	void init(int=5,int=10,char='#');
	void home( void ) {curScr = begScr;}
	void bottom( void );
	void move( int, int );
	char get( void ) {return *curScr;}
	char get( int, int );
	short getHeight( void ) {return height;}
	short getWidth( void )  {return width;}
	void display( void );
	void forward( void );
	void back( void );
	void up( void );
	void down( void );
	void set (const char *);

private:
	short height;
	short width;
	char *begScr;
	char *curScr;
	void checkRange(int, int);
	int row( void );
	int col( void );
	int spaceLeft( void );

}; // end VirScr

void main( void )
{
	VirScr s;
	s.init(10, 20, '*');
	s.display(); cin.get();
    s.set("Hi! Hello!");
    s.display(); cin.get();
    s.down();
    s.set("Thank you very much!!!");
    s.display(); cin.get();
    s.home();
    for (int i=0; i<6; i++) s.forward();
    for (int i=0; i<6; i++) s.down();
    s.set("Good");
    s.display(); cin.get();
    s.home();
    s.up();
    cin.get();

} // end main

// Дефиниции на методите на класа

void VirScr::init(int high, int wid, char bkground)
{
  int sz = high*wid;
  height = high;
  width = wid;
  curScr = begScr = new char[sz+1];
  char *ptr = begScr;
  char *endptr = begScr + sz;
  while (ptr != endptr) *ptr++=bkground;
  *ptr =  '\0';

} // end init

void VirScr :: checkRange(int row, int col)
{
  if (row<1||row>height||col<1||col>width)
     {
       cout <<"Coordinates out of screen" << endl;
       cin.get();
	    exit(-1);
     }
} // end checkRange

int VirScr :: row( void )
{
  // връща текущия ред
  int pos = curScr-begScr+1;
  return (pos+width-1)/width;
} // end row

int VirScr :: col( void )
{
  // връща текущата колона 
  int pos = curScr-begScr+1;
  return (pos % width) + 1;
} // end col

int VirScr :: spaceLeft( void )
{
  // връща брой позиции надясно от курсора 
  int sz = width * height;
  return (begScr + sz - curScr -1);
} // end spaceLeft

void VirScr :: bottom( void )
{
  int sz =width*height-1;
  curScr = begScr+sz;
}

void VirScr :: move (int r, int c)
{
  checkRange(r,c);
  int row = (r-1)*width;
  curScr = begScr + row + c - 1;
}

char VirScr :: get(int x, int y)
{
  // връща символа в позиция с координати x и y
  int z = (y-1)*width+x;
  return *(begScr+z);
}

void VirScr::display(void)
{
  char *ptrscr = begScr;
  for (int i=0; i<height; i++)
  {
    for (int j=0; j<width; j++) cout << *ptrscr++;
	    cout << endl;
  }
} // end display

void VirScr::forward( void )
{
  //премества курсора с една позиция напред
  ++curScr;
  //проверява дали не сме в последната точка на екрана 
  if (*curScr =='\0') home();
} // end forward

void VirScr :: back( void )
{
  //премества курсора с една позиция назад
  //проверява дали не сме в началото на екрана 
  if (curScr == begScr) bottom();
  else --curScr;
} // end back

void VirScr::up( void )
{
  //премества курсора с един ред нагоре
  if (row() == 1) cout.put(BELL);	//на първия ред???
  else curScr-=width;
} // end up

void VirScr::down( void )
 //премества курсора с един ред надолу
{
  if (row() == height) cout.put(BELL);	//на последния ред
  else curScr += width;
} // down

void VirScr::set( const char *s )
{
  // записва на екрана низ, започващ от позицията накурсора 
  int space = spaceLeft();
  int len = strlen(s);
  if (space < len)
  {
    cout << "символният низ ще бъде отсечен:"
	 << "място: " << space
	 << "дъкжина на низа: " << len << "\n";
    len = space;
  }
  for ( int i=0; i<len; ++i ) *curScr++ = *s++;
  curScr--;
  cout << "Koordinates: (" << col() << "," << row() <<")"; cin.get();
} // edn set

