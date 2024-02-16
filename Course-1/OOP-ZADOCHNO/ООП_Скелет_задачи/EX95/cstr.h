#ifndef CSTR_H
#define CSTR_H

class CStr
{

friend ostream &operator<<(ostream &, CStr &);

public:
	CStr( const char * );
	char *getData(void);
private:
	int len;
	char *pdata;
};

#endif