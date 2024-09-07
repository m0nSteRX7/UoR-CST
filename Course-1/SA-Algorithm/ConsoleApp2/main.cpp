#include <cstring>
#include <iostream>

using namespace std;

struct t {
	char ime[257];
	int grupa;
};

typedef t *p;

p PStud;
t Stud; 

int main() {
	PStud = new t;
	strcpy((*PStud).ime,"Ivan"); 

	// екв. на strcpy_s(PStud->ime,"Ivan");
	PStud -> grupa=29;
	strcpy(Stud.ime,"Dragan");
	Stud.grupa=25;
	cout << PStud;
}

/*
    a) cout<<PStud; 0x55555556b2b0 (address)
    b) cout<<Stud->ime;
    c) cout<<PStud->ime[3]; 
    d) cout<<Stud.i; 
    e) cout<<Stud;
    f) cout<<*PStud; 
    g) Stud=new t;	
*/