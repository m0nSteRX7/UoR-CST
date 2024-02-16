# include <iostream>
# include <cstring>

using namespace std;

class Parent
{
public:
	Parent( void );				// ����������� �� ������������
	Parent( char * );			// ������������� �����������
	Parent( Parent & );			// ������� �����������
	~Parent( void )				// ����������
		{ delete lastName; }		
	char* getLastName( void );
	void setLastName( char * );
	virtual void answerName( void );

protected:
	char *lastName;
};

class Child : public Parent
{
public:
	Child( void );				// ����������� �� ������������
	Child( char *, char * );	// ������������� �����������
	Child( Child & );			// ������� �����������
	~Child( void )				// ����������
		{ delete firstName; }	
	char* getFirstName( void );
	void setFirstName( char * );
	virtual void answerName( void );

protected:
	char *firstName;

};

class GrandChild : public Child
{
public:
	GrandChild( void );							// ����������� �� ������������
	GrandChild( char *, char *, char * );		// ������������� �����������
	~GrandChild( void )							// ����������
		{ delete grandFatherName; }	
	virtual void answerName( void );

private:
	char *grandFatherName;
};

void main( void )
{

	Parent  *family[ 3 ];
	Parent *p = new Parent( "Ivanov" );
	Parent *c = new Child( "Ivanov", "Peter" );
	Parent *g = new GrandChild("Ivanov", "George", "Nick" );
	family[ 0 ] = g;
	family[ 1 ] = p;
	family[ 2 ] = c;
	for( int index = 0; index < 3; index++ )
		family[ index ]->answerName();

} // end main

// ��������� �� �������� �� Parent
Parent :: Parent( void )
{
	lastName = new char[ 5 ];
	strcpy( lastName, "None" );
}

Parent :: Parent( char *aLastName )
{
	lastName = new char[ strlen( aLastName ) + 1 ];
	strcpy( lastName, aLastName );
}

Parent :: Parent( Parent& aParent)
{
	lastName = new char[ strlen( aParent.lastName ) + 1 ];
	strcpy( lastName, aParent.lastName );
}

char* Parent :: getLastName( void )
{
	return lastName;
}

void Parent :: setLastName( char *aName )
{
	lastName = new char[ strlen( aName ) + 1 ];
	strcpy( lastName, aName );
}

void Parent :: answerName( void )
{
	cout << "My family name is: "<< lastName << endl;
}

// ��������� �� �������� �� Child
Child :: Child( void )
{
	firstName = new char[ 5];
	strcpy( firstName, "None");
}

Child :: Child( char *aLastName, char *aFirstName ) : Parent( aLastName )
{
	firstName= new char[ strlen(aFirstName)+ 1];
	strcpy( firstName, aFirstName );
}

Child :: Child( Child& aChild )
{
	setLastName( aChild.getLastName());
	firstName = new char[ strlen(aChild.firstName ) + 1 ];
	strcpy( firstName, aChild.firstName );
}

char* Child :: getFirstName( void )
{
	return firstName;
}

void Child :: setFirstName( char *aName )
{
	firstName = new char[ strlen( aName ) + 1 ];
	strcpy(firstName, aName);
}

void Child :: answerName( void )
{
	Parent::answerName();
	cout << "My name is: "<< firstName << "\n";
}

// ��������� �� �������� �� GrandChild
GrandChild::GrandChild( void )
{
	grandFatherName = new char[ 5];
	strcpy( grandFatherName, "None");
}

GrandChild::GrandChild(char *aLastName, char *aFirstName, char*aGrandFatherName)
			: Child( aLastName, aFirstName )
{
	grandFatherName = new char[ strlen( aGrandFatherName ) + 1 ];
	strcpy( grandFatherName, aGrandFatherName );
}

void GrandChild :: answerName( void )
{
	Child::answerName();
	cout << "My grandfather's name is: " << grandFatherName << endl;
}


